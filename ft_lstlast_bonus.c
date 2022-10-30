/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:08:50 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/29 07:31:49 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (last)
		while (last->next != NULL)
			last = last->next;
	return (last);
}
// #include <stdio.h>
// int main(int argc,char **argv)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(argv[1]);
// 	int i = 2;
// 	while (i < argc)
// 		ft_lstadd_back(&lst, ft_lstnew(argv[i++]));
// 	t_list *temp = lst;
// 	while (lst)
// 	{
// 		printf("%s\n",lst->content);
// 		lst = lst->next;
// 	}
// 	printf("The last:%s",ft_lstlast(temp)->content);
// }