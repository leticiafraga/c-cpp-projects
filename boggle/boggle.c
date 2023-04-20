#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int readWord(char *word);
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

    char *grid = {'\0'};
    char *word = malloc(50 * sizeof(char));
    word[0] = '\0';

    for (int i = 1; i < argc - 1; i++)
    {

        if (strcmp(argv[i], "-g") == 0)
        {
            grid = argv[i + 1];
            i++;
        }
        else if (strcmp(argv[i], "-s") == 0)
        {
            size = atoi(argv[i + 1]);
            i++;
        }
        else if (strcmp(argv[i], "-w") == 0)
        {
            strcpy(word, argv[i + 1]);

            i++;
        }
    }

    int squareSize = size * size;

    if (!grid || strlen(grid) != squareSize)
    {
        fprintf(stderr, "The grid provided does not have the correct length (%d)\n", squareSize);
        exit(84);
    }

    int a;

    if (word[0] == '\0')
    {
        printGrid(size, grid);

        if (readWord(word) != 1)
        {
            return 0;
        }
    }
    while (word && strlen(word) > 0 && word[0] != '0' && word[0] != '\0')
    {
        int len = strlen(word);

        int found = 0;
        for (int i = 0; i < squareSize; i++)
        {
            if (*(grid + i) == word[0])
            {
                grid[i] = toupper(grid[i]);
                found = search(i, size, grid, 1, word);
                if (found != 0)
                {
                    printGrid(size, grid);
                    break;
                }
                else
                {
                    grid[i] = tolower(grid[i]);
                }
            }
        }
        if (found == 0)
        {
            printf("The word \"%s\" is not in the grid.\n", word);
        }

        if (readWord(word) != 1)
        {
            return 0;
        }
    }

    free(word);

    return (0);
}

int readWord(char *word)
{
    if (fgets(word, 50, stdin) == NULL)
    {
        fprintf(stderr, "Error reading word\n");
        exit(84);
    }

    int res = sscanf(word, "%s", word);
    word[strcspn(word, "\n")] = 0;
    return res;
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
    if (position % size != 0 && *(grid + position - 1) == word[wordPosition])
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