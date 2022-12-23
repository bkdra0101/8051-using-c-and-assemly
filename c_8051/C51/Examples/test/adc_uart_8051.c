#include <regx51.h>
#define	uchar	unsigned	char
#define	uint	unsigned	int
#define	port0	P0
#define	ale P3_6
//#define	c	P1_1	
#define	b	P3_3
#define	a	P3_2
#define	oe	P3_7
#define	eoc	P3_4
#define	start	P3_5
int dig[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
uchar	 trans_data,rdata, nhietdo,tram,chuc,donvi;
uint	x;
int lm35;
void	delay(int	x)
	{
	int	i;
	for(i=0;i<x;i++);
	}
void	tachso(void)
	{
	//tram=x/100;
	chuc=(x/10)%10;
	donvi=x%10;
	}
void	giaima(int	x)
	{ 
	if	(x==1)
	{//c=0;
		b=0;a=0;}

	if	(x==2)
	{//c=0;
		b=0;a=1;}
	if	(x==3)
	{//c=0;
b=1;a=0;}
	if (x==4)
	{//c=0;
		b=1;a=1;}

	}
	
//	unsigned char chuc, dvi, rdata, nhietdo, trans_data;
void setup()
	{
		TMOD = 0x20;//;enabletimer1,mode2(autoreload)
		TH1 = -3;		//9600Baudrate
		SCON = 0x50;//;8bituart,1stop bit,RENenabled,timer1
		TR1 = 1;
		IE = 0x90;
	}
void serint(void)interrupt 4 using 1
	{
		if(RI)
		{
		rdata = SBUF;
		RI = 0;
		switch(rdata)
			{
				case('0'):{lm35=0; break;}
				case('1'):{lm35=1; break;}
				case('2'):{lm35=2; break;}
				case('3'):{lm35=3; break;}
				
			}
		}
	}
	

void main()
	{
	int	i;
	oe	=	1;
	setup();		
	

		lm35=0;	
		for(;;)
		{
			
			P2=0x01;
			P0=dig[lm35];
			P2_4=0;
			delay(1000);
			start=0;ale=0;eoc=1;
			
			trans_data = lm35+ 0x30;
			SBUF = trans_data;
			
			giaima(lm35+1);
			delay(100);
			start=1;ale=1;
			delay(500);
			start=0;ale=0;
			while(eoc==0);
			delay(100);
			eoc=1;
			
			x=P1;
			tachso();
	/*		
			P2=0x02;
			P0=dig[tram];
			P2_4=1;
			delay(500);
			*/
			P2=0x02;
			P0=dig[chuc];
			
			trans_data = chuc +0x30;
			SBUF = trans_data;
			
			P2_4=1;
			delay(500);
			P2=0x04;
			P0=dig[donvi];
			trans_data = donvi+ 0x30;
			SBUF = trans_data;
			P2_4=1;
			delay(500);
			
	
	
			while(TI == 0);
			TI = 0;	

		}
	
	

}