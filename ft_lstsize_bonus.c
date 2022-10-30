/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:54:20 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 04:43:29 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	t_list *new;
// 	int		i = 1;

// 	new = ft_lstnew("hi");
// 	while (i < argc)
// 		ft_lstadd_back(&new,ft_lstnew(argv[i++]));
// 	t_list *tmp;
// 	tmp = new;
// 	while (new)
// 	{
// 		printf("%s\n", new->content);
// 		new = new->next;
// 	}
// 	printf("%d", ft_lstsize(tmp));
// }