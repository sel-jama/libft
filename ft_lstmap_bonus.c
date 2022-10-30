/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:36:10 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 04:43:09 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new)
	{
		elem = NULL;
		lst = lst->next;
		while (lst)
		{
			elem = ft_lstnew(f(lst->content));
			if (!elem)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, elem);
			lst = lst->next;
		}
	}
	return (new);
}
// void *ft_minitoupper(void *tmp)
// {
// 	char *s = (char *)tmp;
// 	while(*s)
// 	{
// 		*s = ft_toupper(*s);
// 		s++;
// 	}
// 	return (0);
// }
// void	del(void *content)
// {
// 	free(content);
// }
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	t_list *elem;
// 	int i;

// 	elem = ft_lstnew(argv[1]);
// 	i = 2;
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&elem, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	t_list *temp;
// 	temp = elem;
// 	while (elem)
// 	{
// 		printf("%s\n", elem->content);
// 		elem = elem->next;
// 	}
// 	ft_lstmap(temp, ft_minitoupper, del);
// 	while (temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// 	return (0);
// }