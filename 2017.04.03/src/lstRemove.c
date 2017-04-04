#include <stdlib.h>
#include "liblst.h"

t_list	*lstRemove(t_list *list)
{
  t_list	*tmp;
  
  if (list == NULL)
    return (NULL);
  if (list->prev != NULL)
    {
      list->prev->next = list->next;
      tmp = list->prev;
    }
  else
    tmp = list->next;
  if (list->next != NULL)
    list->next->prev = list->prev;
  free(list);
  return (tmp);
}
