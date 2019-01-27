#include<stdio.h>
float celcius,reamur;
float celciusToReamur(float celcius){
    reamur=celcius*0.8;
    return (reamur);
}
int main(){
    scanf("%f", &celcius);
    celciusToReamur(celcius);
    printf("%.2f\n", reamur);
}

