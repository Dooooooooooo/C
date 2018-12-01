#include <stdio.h>

void LogNewline();
void DebugLogNewline();
void LogSeparator();
void LogBoldSeparator();
void LogLabel(char*);
void LogInt(int);
void LogIntArray(int*, int);
void LogChar(char);
void LogCharArray(char*, int);

void LogNewline() {
  printf("\n");
}

void DebugLogNewline() {
  #ifdef DEBUG
  LogNewline();
  #endif
}

void LogSeparator() {
  printf("-----------------------------------------------------\n");
}

void LogBoldSeparator() {
  printf("=====================================================\n");
}

void LogLabel(char* target) {
  printf("%s: ", target);
}

void LogInt(int target) {
  printf("%d\n", target);
}

void LogIntArray(int* target, int length) {
  for(int i = 0; i < length; i++) {
    if (i != 0) printf(" ");
    printf("%d", target[i]);
  }
  printf("\n");
}

void LogChar(char target) {
  printf("%c\n", target);
}

void LogCharArray(char* target, int length) {
  for(int i = 0; i < length; i++) {
    printf("%c", target[i]);
  }
  printf("\n");
}
