#include <stdio.h>
#include <assert.h>

void WriteFile(char*, char*);
char* ReadFile(char*, int);

// 対象のファイルに上書き保存します
void WriteFile(char* path, char* text) {
  FILE *fp;
  fp = fopen(path, "w");

  fprintf(fp, "%s", text);

  fclose(fp);
}

// ファイル終端まで読み込んだ文字列を返します
char* ReadFile(char* path, int max_readable_characters_count) {
  FILE *fp;
  fp = fopen(path, "r");

  char* text;
  text = (char*)malloc(max_readable_characters_count);

  while(fscanf(fp, "%s", text) != EOF);

  fclose(fp);

  return text;
}
