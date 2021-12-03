#include<stdio.h>
void temp(int t,char ch) {
    switch(ch) {
    case 'c':
        printf(" %.2f celcius = %.2f fehrenhite",t,t*9/5.0+32);
        break;
    case 'C':
        printf(" %.2f celcius = %.2f fehrenhite",t,t*9/5.0+32);
        break;
    case 'f':
        printf("%.2f fehrenhite = %.2f celcius",t,(t-32)*9/5.0);
        break;
    case 'F':
        printf("%.2f fehrenhite = %.2f celcius",t,(t-32)*9/5.0);
        break;
    default:
        printf("Invalid choice\n");
    }
}
int main(){
int ch;
int t;
printf("Enter c for celcius to fehrenhite and f for fehrenhite to celcius\n");
scanf("%c",&ch);
printf("Enter Temperature\n");
scanf("%d",&t);
temp(t,ch);


return 0;
}