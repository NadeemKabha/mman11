#include <stdio.h>
int count_bits(unsigned long int num);
void main()
{
    unsigned long int num;
    printf("Please enter a binary number: ");
    scanf("%d", &num);
    printf("Count is %d", count_bits(num));
}

int count_bits(unsigned long int num)
{
    int ind = 0;
    int cnt = 0;
    while (num > 0)
    {
        if (!ind)
        {

            ind--;
        }
        else
        {
            if (num % 10)
            {
                cnt++;
            }
            ind++;
        }
        num /= 10;
    }
    return cnt;
}
