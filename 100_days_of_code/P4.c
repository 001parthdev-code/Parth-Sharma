//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main() {
    int r;
    float area, perimeter;

    printf("Enter the radius: ");
    scanf("%d", &r);

    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;

    printf("The Area of Circle: %f\n", area);
    printf("The Perimeter of Circle: %f\n", perimeter);

    
    return 0;
}