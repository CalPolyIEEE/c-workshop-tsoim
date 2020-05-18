#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int y = 0;

   /* Nothing special about these numbers, arbitrarily chosen.
      In practice use #define to give meaning to constants. Avoid magic numbers! */
   for (y = 0; y < 7000; y++) {

      if (y % 100 == 0) {
         printf("y = %d\n", y);
      }

      if (y == 500) {
         goto outside; /* Don’t ever do this! */
      }
   }
   
   outside:
   printf("You broke the loop!\n");
   
   return EXIT_SUCCESS;
}
