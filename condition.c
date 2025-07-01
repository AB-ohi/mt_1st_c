#include <stdio.h>

int main()
{
    char day;
    // printf("enter day(1-7) : ");
    // scanf("%s", &day);

    // if(age>=18){
    //     printf("adult \n");

    // }else if(age > 13  && age<18){
    //     printf("teenager \n");
    // }
    // else{
    //     printf("child \n");
    // }

    // age >= 18 ? printf("adult \n"): printf("not adult \n");

    // switch (day)
    // {
    // case 's':
    //     printf("sunday \n");
    //     break;

    // case 'm':
    //     printf("monday \n");
    //     break;

    // case 't':
    //     printf("tuesday \n");
    //     break;

    // case 'w':
    //     printf("wednesday \n");
    //     break;

    // case 'T':
    //     printf("thursday \n");
    //     break;

    // case 'f':
    //     printf("friday \n");
    //     break;
    // case 'S':
    //     printf("saturday \n");
    //     break;

    // default:printf("not a valid day \n");
    // }


    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("positive \n");
        if(number% 2==0){
            printf("even number \n");
        }
        else{
            printf("odd number \n");
        }
    }
    else{
        printf("negative \n");

    }
    
    return 0;
}