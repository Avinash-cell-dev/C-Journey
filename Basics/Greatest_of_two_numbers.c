#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num1, num2: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("greatest: %d", num1);
    }
    else if(num1<num2){
        printf("greatest: %d", num2);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}
