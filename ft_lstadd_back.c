#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*tmp;

	lst = ft_lstnew("first");
	ft_lstadd_back(&lst, ft_lstnew("second"));
	ft_lstadd_back(&lst, ft_lstnew("third"));
	ft_lstadd_back(&lst, ft_lstnew("fourth"));
	ft_lstadd_back(&lst, ft_lstnew("fifth"));
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	return (0);
}
*/