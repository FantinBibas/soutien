#include <stdlib.h>

int	my_fact(int n)
{
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (0);
  int a = atoi(av[1]);
  printf("%d! = %d", a, my_fact(a));
  return (0);
}
