#include < at89x51.h>

void	delay(int	interval){
int	i,j;
for(i=0;i<255;i++){
for(j=0;j<interval;j++);
} }
void	main(){
//	P0=0xfe;
//while(1){

//delay(100);
//P0=P0<<1;
//delay(100);
//} 
//}
while(1){
P0=0x55;
delay(100);
//P0=0xAA;
//delay(100);
} }