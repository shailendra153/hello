#include<stdio.h>
	void arm(int n){
		int i=n;
		int r,sum=0;
		while(i!=0){
		r=i%10;
		sum=sum+r*r*r;
		i=i/10;
                   } 
                   if(n==sum)        
                printf("  %d is  Armstrong \n",n);
                else
                printf("%d is not Armstrong\n",n);
          }
          int main(){
          arm(123);
          arm(370);
          arm(371);
          arm(372);
          
          
          
          return 0;
          }
