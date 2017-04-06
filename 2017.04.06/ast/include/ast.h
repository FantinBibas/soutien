/*********************************************\
|*   Header created by AutoHeader v. 0.5.8   *|
|* https://github.com/FantinBibas/autoHeader *|
\*********************************************/

#ifndef AST_H_
#  define AST_H_

typedef struct	s_ast
{
  struct s_ast	*right;
  struct s_ast	*left;
  char		*data;
}		t_ast;

#endif
