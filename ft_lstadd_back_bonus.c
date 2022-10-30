/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:39:28 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 04:51:06 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
	else
		*lst = new;
}
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	t_list *temp;
// 	int i;
// 	i = 2;
// 	temp = ft_lstnew(argv[1]);
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&temp, ft_lstnew(argv[i]));
// 		i++;
// 	}

// 	while (temp)
// 	{
// 		printf("%s->",temp->content);
// 		temp = temp->next;
// 	}
// }
