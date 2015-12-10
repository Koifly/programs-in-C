#include <stdio.h>

int factorial (int n) {

  int fact = 1;
  if (n == 0) {
  return fact;
  }

  for (int c = 1; c < n + 1; c++) {
  fact = fact * c;

  }

return fact;

}

void pascal (int m) {

  for (int i = m; i > -1; i--) {
    for (int j = 0; j < i + 1; j++) {

      int n = m - i + j;

      int ncr;
      ncr = factorial (n) / (factorial (j) * factorial (n - j));

      printf ("%d\t", ncr);

    }
    printf ("\n");

  }
  return;

}

int main () {

  printf ("\nPASCAL'S TRIANGLE\n");
  printf ("How many rows of the triangle do you wish to see?\n");

  int n;

  scanf ("%d", &n);

  pascal (n);

}
