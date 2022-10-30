/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:58:35 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/28 15:36:48 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = s;
	if (n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>

int main()
{
    char str[12] = "helllo there";
    ft_bzero(str,8);
    int i = 0;
	ft_bzero(str, 8);
    while(i < 12)
    {
        printf("%c",str[i]);
        i++;
    }
}*/
