int	write_text_in_file(char *file)
{
  fd = open(file, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (84);
  return (write_text_in_file(av[1]));
}
