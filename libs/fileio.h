#include <stdio.h>
#include <assert.h>

void WriteFile(char* path, char* text) {
  FILE *fp;
  fp = fopen(path, "w");

  fprintf(fp, "%s", text);

  fclose(fp);
}

char* ReadFile(char* path, int max_readable_characters_count) {
  FILE *fp;
  fp = fopen(path, "r");

  char* text;
  text = (char*)malloc(max_readable_characters_count);

  while(fscanf(fp, "%s", text) != EOF);

  fclose(fp);

  return text;
}
