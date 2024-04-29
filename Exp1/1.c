// Area of Circle / Rectangle / Square
#include <stdio.h> 
void main () {
    int areaCircle, areaRect, areaSq;
    int radius, length, breadth, side;

    printf("Enter the Radius of the Circle \n");
    scanf("%d", &radius);
    
    printf("Enter the Length of the Rectangle \n");
    scanf("%d", &length);
    
    printf("Enter the Breadth of the Rectangle \n");
    scanf("%d", &breadth);
    
    printf("Enter the Side of the Square \n");
    scanf("%d", &side);

    areaCircle = 3.14 * radius * radius;
    areaRect = length * breadth;
    areaSq = side * side;

    printf("The area of Circle is %d \n", areaCircle);
    printf("The area of Rectangle is %d \n", areaRect);
    printf("The area of Square is %d \n", areaSq);

}