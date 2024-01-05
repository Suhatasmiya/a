#include<stdio.h>

int main()  
{  
    long num, temp, reverse;  
    int rem;  

    printf("Input a number\n");  
    scanf("%ld", &num); //add ampersand to signify address of storage
    temp = num;  
    reverse = 0;  

    while (num > 0)   
    {       
        rem = num % 10;       //to get remainder we use %
        reverse = reverse * 10 + rem;      
        num = num / 10;   // to get the quotient we use /
    }   

    if (temp == reverse)  //relational operator not assingnment
    {          
        printf("%ld is a palindrome", temp);  
    } 
    else           
    { 
        printf("%ld is not a palindrome", temp);  
    } 

    return 0;  
}
