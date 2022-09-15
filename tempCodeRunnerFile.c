#include <stdio.h>
int main(void)
{
    int n1 , n2 , n , p=0;
    printf("enter the number of elements: ");
    scanf("%d",&n1);
    printf("enter the number of elements: ");
    scanf("%d",&n2);
    printf("enter the elements of 1.\n");
    int a[n1];
    for(int i = 0 ; i <n1 ;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n2] , c[n1+n2]; 
    printf("enter the elements of 2.\n");
    for(int i = 0 ; i <n2 ;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i = 0 ; i<n1 ; i++)
    {
        for( int j = 1; j<n2 ; j++)
        {
            if(a[i] > b [j])
            {
                c[p] = b[j];
            }
            else
            {
                c[p] = a[i];
            }
            p++;

        }
        
    }
    for(int p = 0 ; p<n1+n2 ; p++)
    {
        printf("%d\n" ,c[p]);
    }
}