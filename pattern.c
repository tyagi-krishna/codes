#include <stdio.h>
int main()
{
    int n , count = 0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
         if(a[i]==0)
        {
            count = count+1;
        }
    }
    for(int i = 0; i<n ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(a[i] == a[j])
            {
                a[j]= 0;
            }

        }
    }
    printf("\n");
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
            printf("\n");
        }       
    }
    if(count !=0 )
    {
        printf("0\n");
    }
}