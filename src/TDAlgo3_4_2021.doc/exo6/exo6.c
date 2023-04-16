#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    char content[100];

    if (f == NULL)
    {
        return 1;
    }

    int rank = 0;
    int i = 1; // content start from 1
    while (fscanf(f, "%s", &content) == 1)
    {
        if (strcmp(content, "val") == 0)
        {
            rank = i;
        }

        i++;
    }

    printf("rank = %d\n", rank);
    fclose(f);
    return 0;
}
