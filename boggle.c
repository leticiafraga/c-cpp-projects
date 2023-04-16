#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printGrid(int size, char *lines);
int search(int position, int size, char *grid, int wordPosition, char *word);

int main(int argc, char *argv[])
{

    int size = 4;

    if (argc == 1)
    {
        printf("One argument expected.\n");
        return 0;
    }

    char *grid;

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

    printGrid(size, grid);

    char *word = malloc(size);
    int a;
    do
    {
        scanf("%s", word);

        int len = strlen(word);

        for (int i = 0; i < size * size; i++)
        {

            if (*(grid + i) == word[0])
            {

                int found = search(i, size, grid, 1, word);
                if (found != 0)
                {
                    printf("%d\n", found);
                }
            }
        }

    } while (word[0] != '0');

    free(word);

    return (0);
}

void printGrid(int size, char *lines)
{

    for (int i = 0; i < (size * 2 + 3); i++)
    {
        printf("+");
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("| ");
        for (int j = 0; j < size; j++)
        {

            printf("%c ", *(lines + (i * size + j)));
        }
        printf("|\n");
    }

    for (int i = 0; i < (size * 2 + 3); i++)
    {
        printf("+");
    }
    printf("\n");
}

int search(int position, int size, char *grid, int wordPosition, char *word)
{
    int len = strlen(word);
    int found = 0;
    int maxPosition = size * size;

    if (wordPosition == len)
        return 1;

    // search right
    if (position % size != (size - 1) && *(grid + position + 1) == word[wordPosition])
    {
        found = search(position + 1, size, grid, wordPosition + 1, word);
        if (found)
            return found;
    }

    return found;
}