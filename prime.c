#include<stdio.h>
int main(){
       int n,count=0;
       printf("Enter the no which you wants to check :");
       scanf("%d",&n);
       
       for(int i=1;i<=n; i++){
        if (n%i==0){
           count++;
        }

     }
       
       if(count ==1){
        printf("The number is neither a prime number nor a composit number.");
       }
       else if(count==2){
        printf("The number is prime number.");
       }
       else{
        printf("The number is not a prime number .\n It is composit number.");
       }
    
    return 0;
}