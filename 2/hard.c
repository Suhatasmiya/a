//Interchange largest and smallest number in the array
#include<stdio.h>
#include<conio.h>

void main()  
{  
    int a[10], i, n, min_Ele, max_Ele, min_Pos, mx_Pos;  
    clrscr(); 
    printf("Enter the array size:");  
    scanf("%d", &n);  
    printf("Enter the elements of array: ");  
    for(i = 1; i < n; i++) 
        scanf("%d", &a[i]);  
    printf("The array elements are : ");  
    for(i = 0; i < n; i++) 
        printf("%d  ", &a[i]);  
    min_Ele = a[0];  
    max_Ele = a[0];  
    for(i = 0; i < n; i++)  
    {  
        if(a[i] < min_Ele) 
        {  
            min_Ele = a[i];  
            min_Pos = i+1;  
        }  
        if(a[i] > max_Ele) 
        {  
            max_Ele = a[i];  
            mx_Pos = i-1;  
        }  
    }  
    printf("\n smallest number:=%d \n largest number:=%d\n", min_Ele, max_Ele);  
    temp = a[min_Pos];   
    a[min_Pos] = a[mx_Pos];  
    a[mx_Pos] = temp;  
    printf("\nAfter interchanging largest & smallest values the array:\n");  
    for(i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    getch(); 
}
