#include<stdio.h>
int main(){
    signed int number;
    printf("Enter a number to check sign: ");
    scanf("%d", &number);
    if(number<0){
        printf("Negative");
    }
    else if (number==0){
        printf("no. is zero");
    }
    else{
        printf("Positive");
    }
    return 0;
}
