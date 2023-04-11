#include <stdio.h>
int count_bits(unsigned long int num);
int main()
{
    unsigned long int num;
    int mycnt = 0;
    while (num != -1)
    {
        printf("Please enter a binary number (-1 to exit): ");
        scanf("%lu", &num);
        if ((mycnt = count_bits(num)) == -1)
        {
            printf("Bad input!\n");
            return 1;
        }

        printf("Count is %d\n", mycnt);
    }
    return 0;
}

int count_bits(unsigned long int num)
{
    int cnt = 0;
    while (num > 0)
    {
        if (num % 10 != 0 && num % 10 != 1)
        {
            return -1;
        }
        if (num % 10)
        {
            cnt++;
        }
        num /= 100;
    }
    return cnt;
}
