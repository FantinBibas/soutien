/*
** main.c for  in /home/yannick.suc/soutien/2017.04.06/fork
** 
** Made by suc yannick
** Login   <yannick.suc@epitech.net>
** 
** Started on  Thu Apr  6 11:06:07 2017 suc yannick
** Last update Thu Apr  6 11:12:40 2017 suc yannick
*/

int	main()
{
  pid_t	pid;
  char	*père;

  name = "le père";
  if (pid == 0)
    {
      name = "le fils";
      printf("Je suis %s\n", name);
    }
  else
    {
       printf("Je suis %s\n", name);
       wait(NULL);
    }
  return (0);
}
