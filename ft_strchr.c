/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:21:38 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:08 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
	char str[] = "hhhello...";
	char *n = ft_strchr(str, '\0');
    size_t i = 0;
	while (str + i != n)
	{
		i++;
	}
	printf("%s",ft_strchr(str,'p'));
	printf("\n%s",strchr(str,'p'));
	printf("\n%d", i == ft_strlen((const char*)str));
}*/
