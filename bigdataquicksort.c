#include <stdio.h>
#include <stdlib.h>

struct datum{
  int value;
  // BIG DATA
  long theBigData[10000];
};

int compare(const void *s1, const void *s2){
  struct datum *d1 = (struct datum *)s1;
  struct datum *d2 = (struct datum *)s2;
  return d1->value > d2->value;
}

int main(int argc, char **argv) {
  // allocate storage
  int numberCount = argc - 1;
  struct datum data[numberCount];
  int i;

  // insert params into storage
  for(i = 1; i < argc; ++i) {
    data[i - 1].value = strtol(argv[i], NULL, 10);
  }

  // quicksort
  qsort(data, numberCount, sizeof(struct datum), compare);

  for (i = 0; i < numberCount; ++i)
    printf("%d ", data[i].value);

    return 0;
}
