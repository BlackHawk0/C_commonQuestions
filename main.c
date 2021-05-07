#include <stdio.h>
#include <string.h>

int main()
{
  FILE *file;
  int i;
  char name[32];
  int found = 0;
  int count = 0;

  // Open the file for writing
  file = fopen("records.txt", "wt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    getchar();
    return -1;
  }

  // Read and save data

    // Read data
    printf("Enter some text: ");
    scanf("%s", name);

    printf("\n");

    // Save data
    fprintf(file, "%s\t\n", name);
  }

  // Close the file
  fclose(file);

  // Open the file for reading
  file = fopen("records.txt", "rt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    return -1;
  }

  // Load and display data
  i = 0;
  while(!feof(file) && !found)
  {
    for (i = 0;name[i] != '\0';i++)
    {
        if (s[i] == ' ' && name[i+1] != ' ')
            count++;
    }
     printf("Number of words in given string are: %d\n", count + 1);
  }
  if (!found)
    printf("Record could not be found");

  // Close the file
  fclose(file);

  return 0;
}
