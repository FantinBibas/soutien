#include <stdlib.h>
#include "liblst.h"

t_list	*lstFirst(t_list *list)
{
  if (list == NULL)
    return (NULL);
  while (list->prev != NULL)
    list = list->prev;
  return (list);
}
