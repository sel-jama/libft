/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:21:02 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 04:52:38 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		*lst = new;
	if (!new)
		return ;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
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
// 	t_list *new;
// 	new = ft_lstnew("neww");
// 	ft_lstadd_front(&temp,new);
// 	while (temp)
// 	{
// 		printf("%s->",temp->content);
// 		temp = temp->next;
// 	}	
// }
