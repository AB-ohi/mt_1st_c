#include <stdio.h>

// int main()
// {
//     float side;
//     printf("enter side");
//     scanf("%f", &side);

//     printf("area is: %f", side * side);
//     return 0;
// }


int main (){
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    float pi = 3.14;
    printf("area of circle is : %f", pi*radius*radius);
    return 0;
}