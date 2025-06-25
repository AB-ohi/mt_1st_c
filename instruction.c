#include <stdio.h>
#include <math.h>
// type declaration
/*int main (){

    int a = 33;
    int b = 22;
    int c = b+3;
    int d = 1,e;

    int oldAge = 33;
    int years = 4;
    int newAge = oldAge + years;

    int x,y,z;
    x=y=z=1;
    return 0;

}
    */

// arithmetic

// int main()
// {
//     int a = 1, b = 3;
//     int sum = a + b;
//     int multiply = a * b;
//     // int e+f = 5; error
//     int x, y;
//     x = y = 3;
//     int power = pow(x, y);
//     printf("%d", power);
//     return 0;
// }


// int main (){
//     // int b+c = a; error
//     int b,c;
//     b=c= 4;
//     int a= b+c;



//     return 0;
// }

// remainder

// int main (){
//     printf("%d", 2% 3);
//     return 0;
// }


// type conversion
// int main (){
//     printf("%d",2.0*2);
//     return 0;
// }
// int main(){
//     int a = (int) 1.9999;
//     printf("%d",a);
//     return 0;
// }

// int main (){
//     int a = 3+5*2;

//     int b = 4*3/6*2;
// printf("%d \n", b);
// return 0;    
// }

// int main (){
//     int a = 5*2-2*3;
//     int b = 5*2/2*3;
//     int c = 5*(2/2)*3;
//     int d = 5+2/2*3;
//     printf("%d",d);
//     return 0;
// }

int main(){
    int a,b;
    a=4 , b=3;
    int c,d;
    c=d=5;
    printf("Et: %d \n", a==b);
    printf("%d \n", c==d);
    printf("%d \n", 6==7);
    printf("%d \n", 6==6);
    printf("Gt: %d \n", 6>6);
    printf("GtE: %d \n", 6>=6);
    printf("Gt: %d \n", 6<6);
    printf("GlE: %d \n", 6<=6);
    printf("GlE: %d \n", 6<=7);
    printf("Gt: %d \n", 7>6);
    printf("NE: %d \n", 7!=6);
    printf("NE: %d \n", 6!=6);

    printf("And : %d \n", 2<3 && 5>2);
    printf("And : %d \n", 3<3 && 5>2);
    printf("OR : %d \n", 3<3 || 5>2);
    printf("OR : %d \n", 3<3 || 1>2);
    printf("NOT : %d \n", !(2>3));
    printf("NOT : %d \n", !(4>3));


    // assignment operator

    int x, y;
    x=3, y= 4;
    // x = x+4;
    //y = x-y;
    //or

    x+=y;
    y-=x;
    printf("new x value: %d \n", x);
    printf("new y value: %d \n", y);
    return 0;
}