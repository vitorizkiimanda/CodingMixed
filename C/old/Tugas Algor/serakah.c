#include <stdio.h>
int main(){
    long long maksgram,gram,harga,i,j,has;
    scanf("%lld",&maksgram);
    i=0;
    has=0;
    while (scanf("%lld %lld",&gram,&harga)>0){
       if (maksgram>0){
       	if (maksgram>=gram) {
		   	has+=gram*harga;
		   	maksgram-=gram;
		   }
       	else{
       		has+=maksgram*harga;
       		maksgram=0;
		   }
	   } 
    }
    
    printf("%lld\n",has);
}
