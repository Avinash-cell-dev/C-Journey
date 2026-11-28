#include <stdio.h>
int main() {
    int s1, s2, s3;
    printf("Enter 3 sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || (s1 + s2 <= s3) || (s2 + s3 <= s1) || (s1 + s3 <= s2)) {
        printf("Not a valid triangle\n");
    } else if (s1 == s2 && s2 == s3) {
        printf("Equilateral triangle\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}
