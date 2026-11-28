#include <stdio.h>
int main(){
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);
    if(marks < 40){
        printf("Fail");
    }
    else if(marks >= 40 && marks <= 59){
        printf("E");
    }
    else if(marks >= 60 && marks <= 69){
        printf("D");
    }
    else if(marks >= 70 && marks <= 79){
        printf("C");
    }
    else if(marks >= 80 && marks <= 89){
        printf("B");
    }
    else{
        printf("A");
    }
    return 0;
}
