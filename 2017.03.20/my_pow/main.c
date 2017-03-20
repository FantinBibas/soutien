#include <stdlib.h>

int	my_pow(int n, int pow)
{
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 3)
    return (0);
  int a = atoi(av[1]);
  int b = atoi(av[2]);
  printf("%d ^ %d = %d", a, b, my_pow(a, b));
  return (0);
}
