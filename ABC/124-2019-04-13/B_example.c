#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int h[n];
  int max = 0;
  int counter = 0;
  for (int i = 0; i<n; i++) {
    scanf("%d", &h[i]);
    if(max <= h[i]) {
      max = h[i];
      counter += 1;
    }
  }
  printf("%d\n", counter);
  return 0;
}
