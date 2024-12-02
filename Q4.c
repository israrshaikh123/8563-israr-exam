#include<stdio.h>
void main ()
{
    int a,b,c;
    
    printf("Enter the A:-");
    scanf("%d",&a);
    
    printf("Enter the B:-");
    scanf("%d",&b);
    
    printf("Enter the C:-");
    scanf("%d",&c);

    if (a<b)
    {
        printf("num is a min:-");
    }
    else if (b<c)
    {
        printf("b is min");
    }
    else{
      printf("c is min");
    }
    

    
    
    
}

