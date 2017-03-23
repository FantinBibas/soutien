/*
** main.c for  in /home/yannick.suc/soutien/2017.03.23/simple_read
** 
** Made by suc yannick
** Login   <yannick.suc@epitech.net>
** 
** Started on  Thu Mar 23 15:27:07 2017 suc yannick
** Last update Thu Mar 23 15:59:42 2017 suc yannick
*/

#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define READ_SIZE (100)

int	my_strlen(char *str)
{
  if (*str == 0)
    return (0);
  return (my_strlen(str + 1) + 1);
}

char	*my_strdup(char *src)
{
  char	*str;
  int	i;

  if ((str = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return (NULL);
  i = 0;
  while (src[i] != 0)
    {
      str[i] = src[i];
      i++;
    }
  str[i] = 0;
  return (str);
}

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	j;

  if ((str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (dest[i] != 0)
    {
      str[j] = dest[i];
      i++;
      j++;
    }
  i = 0;
  while (src[i] != 0)
    {
      str[j] = src[i];
      i++;
      j++;
    }
  str[j] = 0;
  return (str);
}

char	*read_file(char *file)
{
  char	buffer[READ_SIZE];
  char	*str;
  int	fd;

  if ((fd = open(file, O_RDONLY)) < 3)
    return (NULL);
  if ((str = my_strdup("")) == NULL)
    return (NULL);
  memset(buffer, 0, READ_SIZE);
  while (read(fd, buffer, READ_SIZE - 1) > 0)
    {
      if ((str = my_strcat(str, buffer)) == NULL)
	return (NULL);
      memset(buffer, 0, READ_SIZE);
    }
  return (str);
}

int	main(int ac, char **av)
{
  char	*str;

  if (ac != 2)
    return (84);
  str = read_file(av[1]);
  if (str == NULL)
    return (84);
  printf("%s\n", str);
  return (0);
}
