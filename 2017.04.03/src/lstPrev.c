#include <stdlib.h>
#include "liblst.h"

t_list	*lstPrev(t_list *list)
{
  if (list == NULL)
    return (NULL);
  return (list->prev);
}
