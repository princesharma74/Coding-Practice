#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("manit.txt", "w");
    if (fp == NULL)
    {
        printf("File does not exists ");
        exit(0);
    }
    printf("Enter data to write into file");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("manit.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exists ");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}