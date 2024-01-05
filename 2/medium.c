//Binary Search
#include<stdio.h>
#include<conio.h>

void main()  
{  
    int a[10], i, n, m, c = 0, low, high, mid;  
    printf("Enter the size of an array: ");  
    scanf("%d", &n);  
    printf("Enter the elements in ascending order:\n");  
    for (i = 0; i <= n; i++)  
    {  
        scanf("%d", &a[i]);  
    }  
    printf("Enter the number to be search: ");  
    scanf("%d", &m);  
    low = 0, high = n;  
    while (low <= high)  
    {  
        mid = (low + high) / 2;  
        if (m == a[mid])  
        {  
            c = 1;  
            printf("\n %d found at %d position\n", m, mid );  
            break;  
        }  
        else if (m < a[mid])  
        {  
            high = mid + 1;  
        }  
        else  
            low = mid - 1;
    }  
    if (c == 0)  
        printf("%d is not found\n", m);  
    getch(); 
}
