#include<stdio.h>

int main(){

    int ch  ;

    while(1){

    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %% \n");
    printf("Press 0 for Exit \n");

    printf("Enter your choice ");
    scanf("%d", &ch);

    switch (ch)
    { 
        
    int a , b;

    case 1:

    printf("Enter your first number ");
    scanf("%d", &a);

    printf("Enter your second number ");
    scanf("%d", &b);

    printf("Addision of two nuimber is %d  \n", a+b);


    break;

    case 2:

    printf("Enter your first number ");
    scanf("%d", &a);

    printf("Enter your second number ");
    scanf("%d", &b);

    printf("substraction of two nuimber is %d \n", a - b);


     break;


    case 3:

    printf("Enter your first number ");
    scanf("%d", &a);

    printf("Enter your second number ");
    scanf("%d", &b);

    printf("Multiplication of two nuimber is %d \n", a * b);


     break;

    case 4:

    printf("Enter your first number ");
    scanf("%d", &a);

    printf("Enter your second number ");
    scanf("%d", &b);

    printf("Division of two nuimber is %d \n", a / b);


     break;

    case 5:

    printf("Enter your first number ");
    scanf("%d", &a);

    printf("Enter your second number ");
    scanf("%d", &b);

    printf("Modulas of two nuimber is %d \n", a % b);

    break;

    case 6:

    return 0;

    break;
    
    default:

    printf("Invalid choice \n");
        break;
    }


    }

    return 0;


}