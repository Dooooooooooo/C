#include <stdio.h>
#include <time.h>

static clock_t start_time, end_time;

void StartMeasurement(void);
void StopMeasurement(void);
void ShowMeasurementResult(void);

// 計測開始時に呼び出します
void StartMeasurement(void) {
  start_time = clock();
}

// 計測終了時に呼び出します
void StopMeasurement(void) {
  end_time = clock();
}

// 計測結果をコンソール出力します
void ShowMeasurementResult(void) {
  printf("\n===================================\n");
  printf(" Execution Time = %f sec\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
  printf("===================================\n");
}
