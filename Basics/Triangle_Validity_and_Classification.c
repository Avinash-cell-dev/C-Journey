#include <stdio.h>
int main(){
    int s1, s2, s3;
    printf("Enter 3 sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1==s2 && s2==s3){
        printf("equilateral triangle");
    }
    else if (s1==s2 || s2==s3 || s1==s3){
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalane");
    }
    return 0;
}
