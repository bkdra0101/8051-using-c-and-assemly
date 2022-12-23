#include <at89x51.h>
#include <stdio.h>
#define DELAYTIME 65000
unsigned int temp1;
void delay(unsigned int temp)
	{
		while(--temp);
	}
void main()
	{
		P1=0;     //LED is off
		while(1)
		{
			P1=1;
			P2=0XC0;
			temp1 = DELAYTIME;
			delay(temp1);
			P1 = 2;
			P2 = 0XF9;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 4;
			P2 = 0XA4;
			temp1 = DELAYTIME;
			delay(temp1);
			P1 = 8;
			P2 = 0XB0;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 1;
			P2 = 0X99;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 2;
			P2 = 0X92;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 4;
			P2 = 0X82;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 8;
			P2 = 0Xf8;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 1;
			P2 = 0X80;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 2;
			P2 = 0X90;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 4;
			P2 = 0X08;
			temp1 = DELAYTIME;
			delay (temp1);
			P1=8;
			P2=0X03;
			temp1 = DELAYTIME;
			delay (temp1);			
P1 = 1;
			P2 = 0X46;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 2;
			P2 = 0X21;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 4;
			P2 = 0X06;
			temp1 = DELAYTIME;
			delay (temp1);
			P1 = 8;
			P2 = 0X0E;
			temp1 = DELAYTIME;
			delay (temp1);
			temp1 = DELAYTIME;
			delay (temp1);
		}
	}
	