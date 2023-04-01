#include <stdio.h>
int count_bits(unsigned long int num);
void main()
{
    unsigned long int num;
    printf("Please enter a binary number: ");
    scanf("%lu", &num);
    printf("Count is %d\n", count_bits(num));
}

int count_bits(unsigned long int num)
{
    // int ind = 0;
    int cnt = 0;
    while (num > 0)
    {
        if (num % 10)
            {
                cnt++;
            }
            // ind++;
        
        num /= 100;
    }
    return cnt;
}
