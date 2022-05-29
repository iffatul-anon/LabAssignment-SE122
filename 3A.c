#include<stdio.h>
int main(){
    int n,i,a=-1,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a += 2;
        printf("%d ",a);
        sum += a;
    }
    printf("\nSum of odd numbers = %d\n",sum);

    return 0;

}