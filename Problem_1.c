//You will be given a number 'N'. Your task is to calculate the sum of first N natural numbers(1 to N)
//Example
//input: 
//4
//output: 
//10

#include<stdio.h>

int main()
{
    int N;
    printf("Enter the value for N\n");
    scanf("%d", &N);
    int sum=0;
   for(int i=1;i<N;i++)
   {
       sum+=i;
   }
       
   printf("%d",sum);    
       
       
       
    return 0;
}
