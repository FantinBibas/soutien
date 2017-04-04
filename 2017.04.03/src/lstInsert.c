#include <stdlib.h>
#include "liblst.h"

t_list	*lstInsert(t_list *list, void *elem)
{
  t_list	*new;

  if ((new = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new->elem = elem;
  new->next = list;
  if (list != NULL)
    {
      new->prev = list->prev;
      if (list->prev != NULL)
	list->prev->next = new;
      list->prev = new;
    }
  else
    new->prev = NULL;  
  return (new);
}
