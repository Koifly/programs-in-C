#include <stdio.h>
#include <stdlib.h>

void express (int numbers[5]) {

  for (int i = 0; i < 5; i++) {

    printf ("%i\t", numbers[i]);
  }
  printf ("\n");

}

void sort (int n[5]) {

  for (int j = 0; j < 10; j++){
    for (int i = 0; i < 5; i++) {
      if (n[i] > n[i + 1]) {

        int temp;
        temp = n[i + 1];
        n[i + 1] = n[i];
        n[i] = temp;
      }
    }
  }

  express (n);
}

int main () {

  printf ("\nBUBBLE SORT\n");
  printf ("\nPlease enter five integers\n");

  int numbers[5];

  for (int i = 0; i < 5; i++) {

    scanf ("%i",  &numbers[i]);
  }

  express (numbers);

  sort (numbers);

  return 0;
}
