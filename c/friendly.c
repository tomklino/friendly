#include <stdio.h>
#include <stdlib.h>

unsigned long sumDevidors(unsigned long candidate) {
  unsigned long i, sum = 1;
  for (i = 2; i*i < candidate; i++) {
    if (candidate % i == 0) {
      sum = sum + i + (candidate / i);
    }
  }
  if (i == candidate) {
	  return sum + i;
  }
  return sum;
}

int main(unsigned long argc, char *argv[]) {
  unsigned long candidate, mate, maxSearch;
  char *endptr;
  maxSearch = strtoul(argv[1], &endptr, 10);
  for (candidate = 1; candidate < maxSearch; candidate++) {
    mate = sumDevidors(candidate);
    if (mate <= candidate)
      continue;
    if(sumDevidors(mate) == candidate) {
      printf("%lu %lu\n", candidate, mate);
    }
  }
  return 0;
}
