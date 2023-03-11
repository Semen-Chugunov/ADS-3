// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = size - 1;
  int c = 0;
  while (l <= r) {
    int m = (l + r) / 2;
    if (arr[m] == value) {
      int i = m - 1;
      c++;
      while (i >= l && arr[i] == value) {
        c++;
        i--;
      }
      i = m + 1;
      while (i <= r && arr[i] == value) {
        c++;
        i++;
      }
    } else if (arr[m] > value) {
      r = m - 1;
    } else {
      l = m + 1;
    }
 }
  return c;
}
