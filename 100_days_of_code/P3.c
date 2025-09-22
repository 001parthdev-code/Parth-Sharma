//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/


#include <stdio.h>

int main() {
    int a, b, area, perimeter;

    printf("Enter the length: ");
    scanf("%d", &a);


    printf("Enter the breadth: ");
    scanf("%d", &b);


    perimeter = 2 * (a+b);
    area = a*b;

    printf("The Perimeter of the rectangle is: %d\n", perimeter);
    printf("The area of rectangle is: %d\n", area);


    return 0;
}