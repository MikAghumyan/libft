#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*reslst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	reslst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&reslst, del);
			return (NULL);
		}
		ft_lstadd_back(&reslst, new_node);
		lst = lst->next;
	}
	return (reslst);
}
/*
#include <stdio.h>

void	*ft_map(void *content)
{
	return (content);
}

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*res_;
	t_list	*res;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstadd_back(&lst, ft_lstnew("!!!"));
	res_ = ft_lstmap(lst, ft_map, ft_del);
	res = res_;
	while (res)
	{
		printf("%s\n", (char *)res->content);
		res = res->next;
	}
	ft_lstclear(&lst, ft_del);
	ft_lstclear(&res_, ft_del);
	return (0);
}
*/