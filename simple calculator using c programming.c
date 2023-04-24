#include<stdio.h>
#include<conio.h>
void main(){
    int num1,num2;
    char op;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("enter a character:");
    scanf("\n %c",&op);
    
    if (op == '+')
    {
        printf("sum :%d",num1+num2);
    }
    else if (op == '-'){
        printf("sum :%d",num1-num2);
    }
     else if (op == '*'){
        printf("sum :%d",num1*num2);
        }
    else if (op == '/')
    {
        printf("sum :%d",num1/num2);
}
else{
    printf("invalid operator");
}
getch();
}