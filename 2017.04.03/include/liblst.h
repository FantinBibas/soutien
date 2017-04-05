/*
** liblst.h for  in /home/yannick.suc/Igraph/tekadventure
** 
** Made by suc yannick
** Login   <yannick.suc@epitech.net>
** 
** Started on  Wed Apr  5 09:44:54 2017 suc yannick
** Last update Thu Apr  6 00:13:39 2017 suc yannick
*/

#ifndef	LIBLST_H_
#define LIBLST_H_

typedef struct	s_list
{
  void		*elem;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

t_list	*lstInsert(t_list *, void *);		//Ajoute un element dans la liste à la place courante
t_list	*lstRemove(t_list *);			//Supprime l'élément courant de la liste
t_list	*lstNext(t_list *);			//Avance dans la liste si possible sinon renvoie NULL
t_list	*lstPrev(t_list *);			//Recule dans la liste si possible sinon renvoie NULL
t_list	*lstSwapNext(t_list *);			//Echange la valeur de l'element actuel et du suivant
t_list	*lstSwapPrev(t_list *);			//Echange la valeur de l'element actuel et du précédent
int	lstLen(t_list *);			//Renvoie la longueur de la liste
t_list	*lstFirst(t_list *);			//Renvoie le premier element de la liste
t_list	*lstReverse(t_list *);			//Inverse la liste

t_list	*lstRemoveIndex(t_list *, int);		//Supprime un element de la liste à un rang donné
t_list	*lstInsertIndex(t_list *, void *, int);	//Ajoute un element dans la liste à un rang donné
int	lstGetIndex(t_list *);			//Renvoie l'index de l'element passé en parametre
t_list	*lstSwapIndex(t_list *, int, int);	//Echange la valeur des deux elements situés aux indexs passés en parametre
void	*lstGetElem(t_list *, int);		//Renvoie la valeur situé à l'index passé en parametre
t_list	*lstGet(t_list *, int);			//Renvoie l'element situé à l'index passé en parametre

#endif
