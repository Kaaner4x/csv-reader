#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if (argc < 2) 
    {
        printf("Error: No file name provided!\n");
        printf("Usage: %s <file_to_read.csv>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL) 
    {
        printf("Error: File '%s' could not be opened or found!\n", argv[1]);
        return 1;
    }

    char line[1024];

    while (fgets(line, sizeof(line), file))
     {
        line[strcspn(line, "\n")] = 0;

        char *column = strtok(line, ",");

        while (column != NULL) 
        {
            printf("%s - ", column); 
            column = strtok(NULL, ",");
        }
        printf("\n"); 
    }

    fclose(file);
    
    return 0;
}