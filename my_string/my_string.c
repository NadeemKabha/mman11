#include <stdio.h>
#include <String.h>
int my_strcmp(char str1[], char str2[]);
int my_strncmp(char str1[], char str2[], int n);
int my_strchr(char str[], char c);
int main()
{
    char str1[80];
    char str2[80];
    char fileName[] = " ";
    printf("Please Enter an Input File Name: ");
    scanf("%s", &fileName);
    FILE *file = fopen(fileName, "r");
    if (!file)
    {
        printf("file can't be read\n");
        return 1;
    }
    while (fscanf(file, "%s", &str1) == 1 && fscanf(file, "%s", &str2) == 1)
    {
        printf("my_strcmp: %d\n", my_strcmp(str1, str2) == strcmp(str1, str2));
        printf("my_strncmp: %d\n", my_strncmp(str1, str2, 3) == strncmp(str1, str2, 3));
        printf("my_strchr: %d\n",my_strchr(str1, 'a'));
    }

    // printf("Please enter the first string: ");
    // scanf("%s",&str1);
    // printf("Please enter the second string: ");
    // scanf("%s",&str2);
    // printf("%d",my_strcmp(str1, str2));
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
    int i=0;
    while(str[i]!='\0'){
        if (str[i]==c)
            return i;
        i++;
    }
    return -1;
}
