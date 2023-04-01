#include <stdio.h>

int my_strcmp(char str1[], char str2[]);

void main()
{
    char str1[80];
    char str2[80];
    printf("Please enter the first string: ");
    scanf("%s",&str1);
    printf("Please enter the second string: ");
    scanf("%s",&str2);
    printf("%d",my_strcmp(str1, str2));
}
int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}