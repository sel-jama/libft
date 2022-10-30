/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:12:23 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/30 04:53:42 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst -> content);
		free(lst);
	}
}

// void del(void *s)
// {
// 	 s = NULL;
// 	free(s);
// }
// // #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	int i;
// 	t_list *new;
// 	t_list *temp;

// 	temp = new;
// 	i = 1;
// 	// new = ft_lstnew(ft_strdup("hello"));
// 	// system("leaks a.out");
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&new, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	ft_lstdelone(ft_lstlast(new), del);
// 	while (new)
// 	{
// 		printf("%s", new->content);
// 		new = new->next;
// 	}
// 	while (temp)
// 	{
// 		printf("%s", temp->content);
// 		temp = temp->next;
// 	}
// }