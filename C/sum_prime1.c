#include<stdio.h>
int main(){
    int n,i,j,sum=0,isPrime;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
    isPrime=1;
        for(j=2;j<i;j++){
           if(i%j==0){
           	isPrime=0;
            break;
           }
         }
         
    if(isPrime)
    sum=sum+i;
	}	
printf("Sum=%d",sum);
return 0;
}
