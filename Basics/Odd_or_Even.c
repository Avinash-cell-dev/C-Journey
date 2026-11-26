#include<stdio.h>
int main(){
    int number;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &number);
    if(number%2==0){
        printf("Even no.");
    }
    else{
        printf("odd no.");
    }
    return 0;
}
