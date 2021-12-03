#include <stdio.h>
int fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
void printstrong(int start, int end)
{
    int  sum;
    int num;
    while(start != end)
    {
        sum = 0;
        num = start;
        while(num != 0)
        {
            sum =sum+ fact(num % 10);
            num =num/ 10; 
        }
        if(start == sum)
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}

int main()
{
    int start, end;
    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);
    
    printf("All strong numbers between %d to %d are: \n", start, end);
    printstrong(start, end);
    
    return 0;
}


