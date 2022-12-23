#include <at89x51.h>
void delay()
	{
		int i;
		for(i=1;i<200;i++);
	}
unsigned char num[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{
	int x,m,n,j,i = 0;
	unsigned char p0;
	while(1)
	{
		i=0;n=0;m=0;j=0;
		for(m=0;m<10;m++)
			for (n=0;n<10;n++)
			for (i=0;i<10;i++)
			for (j=0;j<10;j++)
		for(x=100;x>0;x--)
			{
				P0 = num[j];
				P1 = 0xfe;
					delay();
				P1 = 0xff;
				P1 = 0xfd;
				P0 = num[i];
					delay();
				P1 = 0xff;
				P1 = 0xfb;
				P0 = num[n];
					delay();
				P1 = 0xff;
				P1 = 0xf7;
				P0 = num[m];
					delay();
				P1 = 0xff;
			}
	}
}