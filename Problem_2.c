//You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
//Example
//Input: 4
//Output: 0 1 1 2


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    int n1=0;
    int n2=1;
    printf("%d",n1);
    printf("%d",n2);
    for(int i=2;i<n;i++)
    {
        int n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }    
    

    return 0;
}
