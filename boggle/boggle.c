#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void printGrid(int size, char *lines);
int search(int position, int size, char *grid, int wordPosition, char *word);

int main(int argc, char *argv[])
{

    int size = 4;
    int squareSize = size * size;

    if (argc == 1)
    {
        printf("One argument expected.\n");
        return 0;
    }

    char *grid = malloc(squareSize * sizeof(char));

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

    if (!grid || strlen(grid) != squareSize)
        return 84;

    printGrid(size, grid);

    char *word = malloc(size * sizeof(char));
    int a;
    do
    {
        scanf("%s", word);
        int len = strlen(word);

        for (int i = 0; i < squareSize; i++)
        {

            if (*(grid + i) == word[0])
            {

                grid[i] = toupper(grid[i]);
                int found = search(i, size, grid, 1, word);
                if (found != 0)
                {
                    printf("%d\n", found);
                }
                else
                {
                    grid[i] = tolower(grid[i]);
                }
            }
        }
        printGrid(size, grid);

    } while (word[0] != '0');

    free(word);
    free(grid);

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
        grid[position + 1] = toupper(grid[position + 1]);
        if (found)
            return found;
        else
            grid[position + 1] = tolower(grid[position + 1]);
    }

    // search left
    if (position % size != (size) && *(grid + position - 1) == word[wordPosition])
    {
        found = search(position - 1, size, grid, wordPosition + 1, word);
        grid[position - 1] = toupper(grid[position - 1]);
        if (found)
            return found;
        else
            grid[position - 1] = tolower(grid[position - 1]);
    }
    // search down
    if (position + size < maxPosition && *(grid + position + size) == word[wordPosition])
    {
        char current = *(grid + position + size);
        found = search(position + size, size, grid, wordPosition + 1, word);
        grid[position + size] = toupper(grid[position + size]);
        if (found)
            return found;
        else
            grid[position + size] = tolower(grid[position + size]);
    }
    // search top
    if (position - size >= 0 && *(grid + position - size) == word[wordPosition])
    {
        char current = *(grid + position - size);
        found = search(position - size, size, grid, wordPosition + 1, word);
        grid[position - size] = toupper(grid[position - size]);
        if (found)
            return found;
        else
            grid[position - size] = tolower(grid[position - size]);
    }
    return found;
}