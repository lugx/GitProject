/*
 * The Towers Of Hanoi
 * C
 * Copyright (C) 1998 Amit Singh. All Rights Reserved.
 *
 * Tested with, ah well ... :)
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define FROM	1
#define TO	3
#define USING	2

void
dohanoi(int N, int from, int to, int using)
{
  if (N > 0) {
    dohanoi(N-1, from, using, to);
    printf ("move %d --> %d\n", from, to);
    dohanoi(N-1, using, to, from);
  }
}

int
main (int argc, char **argv)
{
  long int N;

  if (argc != 2) {
    fprintf(stderr, "usage: %s N\n", argv[0]);
    exit(1);
  }

  N = strtol(argv[1], (char **)NULL, 10);

  /* a bit of error checking, LONG_XXX should be there in limits.h */
  if (N == LONG_MIN || N == LONG_MAX || N <= 0) {
    fprintf(stderr, "illegal value for number of disks\n");
    exit(2);
  }

  dohanoi(N, FROM, TO, USING);

  exit(0);
}
