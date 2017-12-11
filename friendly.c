#include <stdio.h>
#include <stdlib.h>

unsigned long calculateFriend(unsigned long candidate) {
  unsigned long i, sum = 1;
  for (i = 2; i*i <= candidate; i++) {
    if (candidate % i == 0) {
      sum = sum + i + (candidate / i);
    }
  }
  return sum;
}

unsigned long main(unsigned long argc, char *argv[]) {
  unsigned long bigCandidate, smallCandidate, maxSearch;
  char *endptr;
  maxSearch = strtoul(argv[1], &endptr, 10);
  for (bigCandidate = 1; bigCandidate < maxSearch; bigCandidate++) {
    smallCandidate = calculateFriend(bigCandidate);
    if (smallCandidate >= bigCandidate)
      continue;
    if(calculateFriend(smallCandidate) == bigCandidate) {
      printf("%lu %lu\n", smallCandidate, bigCandidate);
    }
  }
}
