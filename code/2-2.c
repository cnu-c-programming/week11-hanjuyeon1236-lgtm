#include <stdio.h>

enum Clolor {REN, GREEN, BLUE };

enum Status { OK = 0, ERR = -1, BUSY = 1 };

int main(void) {
  printf("Red = %d\n", RED);
  printf("FREEN = %d\n", GREEN);
  printf("BLUE = %d\n\n", BLUE);

  printf("OK = %d\n", OK);
  printf("ERR = %d\n", ERR);
  printf("BUSYS = %d\n", BUSY);

  return 0;
}
