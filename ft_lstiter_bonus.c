/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:18:01 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 01:44:40 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
// #include <stdio.h>
// void print(void *s)
// {
// 	printf("%s\n",s);
// }

// int main(int argc, char **argv)
// {
// 	int i;
// 	t_list *new;
// 	t_list *temp;

// 	new = ft_lstnew(argv[1]);
// 	temp = new;
// 	i = 2;
// 	while (i < argc)
// 	{
// 		 ft_lstadd_back(&new, ft_lstnew(argv[i]));
// 		 i++;
// 	}
// 	ft_lstiter(temp,print);
// }