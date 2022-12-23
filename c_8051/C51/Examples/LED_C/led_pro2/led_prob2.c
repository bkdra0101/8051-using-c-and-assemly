#include <at89x51.h>
#include <stdio.h>
#define LED0 P0_0
#define LED1 P0_1
#define LED2 P0_2
#define LED3 P0_3
#define LED4 P0_4
#define LED5 P0_5
#define LED6 P0_6
#define LED7 P0_7
#define sang 1
#define tat 0
void delay(unsigned int ms)
	{
		unsigned int i,j;
		for(i=0;i<ms;i++)
		for(j=0;j<120;j++)
		{}
	}
void display_LED(unsigned char number)
	{
		switch(number)
		{
		case 1:
		LED0 = sang;
		LED1 = LED2 = LED3 = LED4 = LED5 = LED6 = LED7 = tat;
		break;
		case 2:
		LED1 = sang;
		LED0 = LED2 = LED3 = LED4 = LED5 = LED6 = LED7 = tat;
		break;
		case 3:
		LED2 = sang;
		LED1 = LED0 = LED3 = LED4 = LED5 = LED6 = LED7 = tat;
		break;
		case 4:
		LED3 = sang;
		LED1 = LED2 = LED0 = LED4 = LED5 = LED6 = LED7 = tat;
		break;
		case 5:
		LED4 = sang;
		LED1 = LED2 = LED3 = LED0 = LED5 = LED6 = LED7 = tat;
		break;
		case 6:
		LED5 = sang;
		LED1 = LED2 = LED3 = LED4 = LED0 = LED6 = LED7 = tat;
		break;
		case 7:
		LED6 = sang;
		LED1 = LED2 = LED3 = LED4 = LED5 = LED0 = LED7 = tat;
		break;
		case 8:
		LED7 = sang;
		LED1 = LED2 = LED3 = LED4 = LED5 = LED6 = LED0 = tat;
		break;
		}
	}
void main()
	{
	unsigned char m;
	while(1)
		{
			for(m=0;m<9;m++)
			{
			display_LED(m);
			delay(500);
			}
		}
	}