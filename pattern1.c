#include <stdio.h>
int main ()
{
    int n ;
    printf("enter an odd number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("enter odd number.");
        return 0;
    }
    for(int i = 0 ; i<n ; i++)
    {
        printf("#");
    }
    printf("\n");
    for(int i = 1 ; i <= n/2 ; i++)
    {
        for(int j = 0 ; j< n/2 -i +1 ; j++)
        {
            printf("#");
        }
        for(int j = 0 ; j < 2*i -1 ; j=j+1)
        {
            printf(" ");
        }
        for(int j = 0 ; j< n/2 -i +1 ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
     for(int i = n/2 ; i >0 ; i--)
    {
        for(int j = 0 ; j< n/2 -i +1 ; j++)
        {
            printf("#");
        }
        for(int j = 0 ; j < 2*i -1 ; j=j+1)
        {
            printf(" ");
        }
        for(int j = 0 ; j< n/2 -i +1 ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    for(int i = 0 ; i<n ; i++)
    {
        printf("#");
    }
    printf("\n");

    
    return 0;
}