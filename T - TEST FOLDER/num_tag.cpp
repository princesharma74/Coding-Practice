#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int tab = 0, new_line = 0, space = 0, special_char = 0;
    fp = fopen("manit.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exists ");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\t')
        {
            tab++;
        }
        else if (ch == '\n')
        {
            new_line++;
        }
        else if (ch == ' ')
        {
            space++;
        }
        else if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '-' || ch == '_' || ch == '+' || ch == '=' || ch == '{' || ch == '}' || ch == '[' || ch == ']' || ch == '|' || ch == '\\' || ch == ':' || ch == ';' || ch == '"' || ch == '\'' || ch == '<' || ch == '>' || ch == ',' || ch == '.' || ch == '?' || ch == '/')
        {
            special_char++;
        }
    }
    printf("No. of tab = %d\n", tab);
    printf("No. of new line = %d\n", new_line);
    printf("No. of space = %d\n", space);
    printf("No. of special character = %d\n", special_char);

    fclose(fp);
    return 0;
}