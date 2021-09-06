/* main.c - Allocation Pool Library test driver
 */

#include <stdio.h>
#include <stdlib.h>
#include "pool.h"

int main ()
{
  pool_t *mypool;
  int i, j, *toss;

  for (j = 0; j < 5000; j++)
    {
      mypool = create_pool (0);

      for (i = 0; i < 100000; i++)
	{
	  toss = pool_alloc (mypool, sizeof (int));
	}

      if (j % 100 == 0)
	{
	  printf ("%d\n", j);
	}
      free_pool (mypool);
    }
  
  return EXIT_SUCCESS;
}
