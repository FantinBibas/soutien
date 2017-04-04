#include <stdlib.h>
#include <stdio.h>
#include "liblst.h"
int		main()
{
  t_list	*list;

  list = lstInsert(NULL, strdup("Hello World !"));
  printf("%s\n", list->elem);
  list = lstInsert(list, strdup("Zeubi"));
  printf("%s\n", list->elem);
  list = lstInsert(list, strdup("Neckel"));
  printf("%s\n", list->elem);
  list = lstRemove(list);
  printf("%s\n", list->elem);
  return (0);
}
