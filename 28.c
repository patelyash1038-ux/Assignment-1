#include<stdio.h>
#include<math.h>
int main(){
    int NUM,num,n=0,final=0,remainder;
    printf("Enter one no.= ");
    scanf("%d",&num);
    NUM=num;
    while(NUM!=0){
        NUM/=10;
        ++n;
    }
    NUM=num;
    while (NUM!=0)
    {
        remainder=NUM%10;
        final+=round(pow(remainder,n));
        NUM/=10;
    }
    if(final == num){
        printf("the no. is ARMSTRONG");
    }
    else{
        printf("the no. is not ARMSTRONG");
    }
    return 0;
}