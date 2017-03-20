#include <stdlib.h>

void	count_island_1D(char *map, int start)
{
  
}

int	main(int ac, char **av)
{
  if (ac != 3)
    return (0);
  av[1][0] = '\0';
  int n = atoi(av[2]);
  if (n >= strlen(av[1] + 1))
    return (0);
  count_island_1D(av[1], n);
  return (0);
}
