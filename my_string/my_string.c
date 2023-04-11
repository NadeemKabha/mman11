#include <stdio.h>

int my_strcmp(char str1[], char str2[]);
int my_strncmp(char str1[], char str2[], int n);
int my_strchr(char str[], char c);
int main()
{   
    char str1[80];
    char str2[80];
    int c='a';
    while (1)
    {
        printf("Please enter the strings (to seperate use space):\n");
        if (scanf("%s %s", str1, str2)==-1)
        {
            printf("Done!\n");
            break;
        }
        
        printf("my_strcmp(%s,%s): %d\n", str1, str2, my_strcmp(str1, str2));
        printf("my_strncmp(%s,%s,3): %d\n", str1, str2, my_strncmp(str1, str2, 3));
        printf("my_strchr(%s,%c): %d\n", str1, c, my_strchr(str1, c));
    }
        return 0;

}
int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])

            return str1[i] - str2[i];

        i++;
    }
    return 0;
}

int my_strncmp(char str1[], char str2[], int n)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && i < n)
    {
        if (str1[i] != str2[i])

            return str1[i] - str2[i];

        i++;
    }
    return 0;
}
int my_strchr(char str[], char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return i;
        i++;
    }
    return -1;
}
