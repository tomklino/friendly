#include <stdio.h>
#include <stdlib.h>

int calculateFriend(int candidate) {
  int i, sum = 1;
  for (i = 2; i*i <= candidate; i++) {
    if (candidate % i == 0) {
      sum = sum + i + (candidate / i);
    }
  }
  return sum;
}

int main(int argc, char *argv[]) {
  int bigCandidate, smallCandidate;
  for (bigCandidate = 1; bigCandidate < atoi(argv[1]); bigCandidate++) {
    smallCandidate = calculateFriend(bigCandidate);
    if (smallCandidate >= bigCandidate)
      continue;
    if(calculateFriend(smallCandidate) == bigCandidate) {
      printf("%d %d\n", smallCandidate, bigCandidate);
    }
  }
}
