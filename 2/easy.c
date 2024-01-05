//Palindrome
#include<stdio.h>

int main()  
{  
    long num, temp, reverse;  
    int rem;  

    printf("Input a number\n");  
    scanf("%ld", num); 
    temp = num;  
    reverse = 0;  

    while (num > 0)   
    {       
        rem = num /10;       
        reverse = reverse * 10 + rem;      
        num = num %10;   
    }   

    if (temp = reverse)  
    {          
        printf("%ld is a palindrome", temp);  
    } 
    else           
    { 
        printf("%ld is not a palindrome", temp);  
    } 

    return 0;  
}
