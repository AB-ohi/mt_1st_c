#include <stdio.h>


int main (){

  int mark;
  printf("student mark :");
  scanf("%d", &mark);
//   if(mark >= 0 && mark< 30){
//     printf("student is fail");
//   }
//   else if (mark >=30 && mark<=100){
//     printf("student is pass");
//   }
//   else{
//     printf("wrong mark");
//   }
if (mark<30){
    printf("C \n");
}else if(mark >= 30 && mark<70){
    printf("B \n");

}
else if(mark>=70 && mark < 90){
    printf("A \n");
}
 else if (mark >= 90 && mark <= 100){
    printf("A+");
}

else{
    printf("wrong mark");
}



return 0;
}