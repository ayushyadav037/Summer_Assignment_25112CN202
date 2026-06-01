#include <stdio.h>
int main(){
    int i,num,range;
    printf("enter any integer : ");
    scanf("%d",&num);

    printf("enter the range : ");
    scanf("%d",&range);

    for(i=1;i<=range;i++){

    
      printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;


}
