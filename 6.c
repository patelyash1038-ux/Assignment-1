#include<stdio.h>

int main(){
    int a,b;
    printf("enter two numbers-");
    scanf("%d %d", &a,&b);
    printf("before swapping a=%d , b=%d\n", a,b);
    //now swapping without any other variable
    a=b;
    b=a;
    printf("after swapping a=%d , b=%d\n" , a,b);
    

    return 0;
}