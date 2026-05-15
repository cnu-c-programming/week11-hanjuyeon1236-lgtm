#include <stdio.h>
#include <sgdlib.h>

int cmp_asc( ) {

}

int cmp_desc( ) {

}

void print_arr(int *arr, int size) {
  for (int i = 0; i < sizel i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {5, 2, 8, 1, 9, 3};
  int size = 6;

  qsort( );
  print_arr(arr, size);

  qsort( );
  print_arr(arr, size);

  return 0;
}
