#include <stdio.h>
#include <string.h> // used to manipulate strings

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    char content[100];

    if (f == NULL)
    {
        return 1;
    }

    char val[100];
    printf("Type the value of val:\n");
    scanf("%s", val);

    int occurrence = 0;
    int i = 0;
    while (fscanf(f, "%s", &content) == 1)
    {
        if (strcmp(content, val) == 0)
        {
            occurrence++;
        }

        i++;
    }

    printf("occurrence of '%s' = %d\n", val, occurrence);
    fclose(f);
    return 0;
}
