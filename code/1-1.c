#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

int main() {
  Point p = {1, 2};

  printf("%d %d\n", p.x, p.y);

  return 0;
}
