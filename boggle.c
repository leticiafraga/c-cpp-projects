#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int size = 4;

    if (argc == 1)
    {
        printf("One argument expected.\n");
        return 0;
    }

    char *grid;
    char lines[size][size];
    for (int i = 1; i < argc; i++)
    {
        if (i + 1 != argc)
        {
            if (strcmp(argv[i], "-g") == 0)
            {
                char *filename = argv[i + 1];
                grid = filename;
                i++;
            }
        }
    }
    printf("The argument supplied is %s\n", grid);

    for (int i = 0; i < (size * 2 + 3); i++)
    {
        printf("+");
    }
     printf("\n");

    for (int i = 0; i < size; i++)
    {
        strncpy(lines[i], grid + (i * size), size);

        printf("| ");     
        for (int j = 0; j < size; j++)
        {
            printf("%c ", lines[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < (size * 2 + 3); i++)
    {
        printf("+");
    }
    printf("\n");

    return (0);
}