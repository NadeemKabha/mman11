#include <stdio.h>
int count_bits(unsigned long int num);
int main()
{
    unsigned long int num;
    int mycnt = 0;
    FILE *file = fopen("input", "r");
    if (!file) 
    {
        printf("file can't be read\n");
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1)
    {
        if ((mycnt = count_bits(num)) == -1)
        {
            printf("Bad input!");
            return 1;
        }
        mycnt = count_bits(num);
        printf("%d\n", mycnt);
    }
    // printf("Please enter a binary number: ");
    // scanf("%lu", &num);
    // if ((mycnt = count_bits(num)) == -1)
    // {
    //     printf("Bad input!");
    //     return 1;
    // }

    // printf("Count is %d\n", mycnt);
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
