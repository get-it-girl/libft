#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;

	cur = lst;
	if (lst == NULL)
		return ;
	while (cur)
	{
		f(cur -> content);
		cur = cur -> next;
	}
}
