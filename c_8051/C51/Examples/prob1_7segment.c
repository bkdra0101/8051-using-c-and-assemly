#include<at89x51.h>

void delay_ms(unsigned int x);
void giaima(void);
void hienthi(void);
unsigned char donvi,chuc;
unsigned int i,j,a;
int
dig[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90
};
void main (void)
{
while(1)
{
for(i=0;i<100;i++)
{
a=i;
for(j=0;j<5000;j++)
{
giaima();
hienthi();
} }
}}
//chuong trinhdelay
void delay_ms(unsigned int x)
{
unsigned char k;
while(x-->0)
{
for(j=0;k<125;k++
){;}
} }
//chuong trinh giaima
void giaima(void)
{
chuc=a/10;
donvi=a%10;
}
//chuongtrinhhienthi
void hienthi(void)
{
P0=dig[donvi];
P2=dig[chuc];
}
