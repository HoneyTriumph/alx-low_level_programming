#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

<<<<<<< HEAD
a[2] = 1024;
p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
p[5] = (a + 2);
p[5] = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
=======
  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
>>>>>>> 794e74100e84f2c5d8729454c378bdaf2c550b8a
}
