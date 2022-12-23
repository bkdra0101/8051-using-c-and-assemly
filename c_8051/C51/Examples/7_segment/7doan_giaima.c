#include<at89x51.h>
int dem=0;
void delay(unsigned long time)
{
unsigned long i;
for(i=0;i<time;i++)
{} }
void main(void)
{
P2=0x00;
while(dem<10)
{
P2=dem;
dem++;
delay(10000);
} }