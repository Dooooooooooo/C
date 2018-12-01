int Max(int* nums, int length) {
  int max = nums[0];
  for (int i = 0; i < length; i++) {
    if (nums[i] > max) max = nums[i];
  }

  return max;
}

int Min(int* nums, int length) {
  int min = nums[0];
  for (int i = 0; i < length; i++) {
    if (nums[i] < min) min = nums[i];
  }

  return min;
}
