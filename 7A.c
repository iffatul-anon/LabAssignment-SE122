#include<stdio.h>
int main(){
    int i,j,flag;
    printf("The prime numbers between 1 and 200 are:\n");
    for(i=2;i<=200;i++){
        flag=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=0;         
            }
        }
        if(flag==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}


