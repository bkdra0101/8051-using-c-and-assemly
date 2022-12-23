#include <at89x51.h>
int count=0;
void delay(int interval)
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<interval;j++);
	}
}

void output_7seg(unsigned char value)
{
	unsigned char const
	mask[10]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	if(value < 10)
	{
		P0=mask[value];
	}
}

void EXT0_Process() interrupt 0
{
EA=0;
count++;	 	
EA=1;
}

void display_number(int iNum)
{
	int i;
	unsigned char pos=0x08;
	unsigned char temp;
	for(i=0;i<4;i++)
	{
	temp=iNum%10;
	iNum=iNum/10;
	P2=pos;
	output_7seg(temp);
	delay(5);
	pos=pos>>1;
	}
}

void init()
{
	P3_2=1; //Thiet lap chan P3_2 lam chan vao
	IE=0x81; //Cho phep ngat ngoai
	IT0=1; //Ngat theo suon
}

void main()
{
	init();
	while(1)
	{display_number(count);}
}