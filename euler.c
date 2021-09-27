#include <stdio.h>
#include <stdlib.h>

int euler1() {
  int a = 3;
  int b = 5;
  int sum = 0;
  while ( a < 1000 ) {
    sum += a;
   	a += 3;
  }
  while ( b < 1000 ) {
    if (b % 3 != 0) sum += b;
   	b += 5;
  }
  return sum;
}

int euler5() {
  int a = 2520;
  int b;
  while (1) {
    for (b = 19; b > 1; b--) {
      if (a % b != 0) {
        a += 20;
        break;
      }
      else if (b == 2) return a;
    }
  }
}

int euler6() {
  int sumsquare = 0;
  int squaresum = 0;
  int i;
  for (i = 1; i <= 100; i++) {
    sumsquare += i * i;
    squaresum += i;
  }
  squaresum *= squaresum;
  return squaresum - sumsquare;

}

int euler7() { // takes a decent a mnt to time to run
  int counter = 6;
  int n = 13;
  int i;
  while (counter < 10001) {
    n += 2;
    for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) break;
      else if (i == n / 2) counter++;
    }
  }
  return n ;
}

int euler9() {
  int a,b,c;
  for (a = 1; a < 999; a++) {
    for (b = 1; b < 1000 - a; b++) {
      c = 1000 - a - b;
        if (a * a + b * b == c * c) return a * b * c;
    }
  }
}
