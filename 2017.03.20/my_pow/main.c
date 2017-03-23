#include <stdlib.h>

int	my_pow(int n, int pow)
{
  int	res;

  if (pow == 0)
    return (1);
  res = n * my_pow(n, pow - 1);
  return (res);
}

int	main(int ac, char **av)
{
  if (ac != 3)
    return (0);
  int a = atoi(av[1]);
  int b = atoi(av[2]);
  printf("%d ^ %d = %d\n", a, b, my_pow(a, b));
  return (0);
}
