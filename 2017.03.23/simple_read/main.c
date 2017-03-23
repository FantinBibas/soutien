int	read_file(char *file)
{
  
}

int	main(int ac, char **av)
{
  char	*str;

  if (ac != 2)
    return (84);
  str = read_file(av[1]);
  if (str == NULL)
    return (84);
  return (0);
}
