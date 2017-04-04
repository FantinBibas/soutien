#include <stdlib.h>
#include "liblst.h"

t_list	*lstNext(t_list *list)
{
  return (list == NULL ? NULL : list->next);
}
