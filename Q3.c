#include <stdio.h>
void main()
{
    int sum = 0, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    do
    {
        printf("%d ", num);
        num--;

            if (num %2==0)
        {
            sum = +num;
        }

    } while (num > 0);
    do
    {

    
    } while (sum > 0);

    printf("\nsum of the odd num is %d: ", sum);
}