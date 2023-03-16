#include<stdio.h>
int main(){
    int n,i,d;
    printf("Enter the number");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
    	d = n*i;
        printf("%d * %d = %d\n",n,i,d);
        
    }
    return 0;
}
    

