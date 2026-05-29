#include<stdio.h>
int main(){
    //input 5  -------->5 10 15 20 25 30 35 40 45 50
    int n,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d ",n*i);
    }
    return 0;
}
