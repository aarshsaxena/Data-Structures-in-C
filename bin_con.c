#include <stdio.h>
//decimal to binary.

void main(){
    int i=1,n,re,bin=0;

    printf("\nEnter the number: ");
    scanf("%d",&n);

    while (n>0){
        re=n%2;
        bin=bin+(re*i);
        n=n/2;
        i=i*10;
    }
    printf("Binary number: %d",bin);
}