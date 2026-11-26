#include<stdio.h>
int main(){
    int length, breadth;
    printf("input length and breadth : ");
    scanf("%d %d", &length, &breadth);
    printf("\narea of rectange: %d", length*breadth);
    printf("\nperimeter of rectangle: %d", 2*(length+breadth));
    return 0;
}
