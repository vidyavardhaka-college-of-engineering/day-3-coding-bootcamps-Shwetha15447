// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    
   
    return 0;
}
