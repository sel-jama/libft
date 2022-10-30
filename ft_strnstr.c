/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:27:01 by sel-jama          #+#    #+#             */
/*   Updated: 2022/10/18 23:26:36 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)haystack;
	if (needle[j] == '\0')
		return (str);
	while (str[i] && len >= ft_strlen(needle))
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
	printf("%s",ft_strnstr("aaabcabcd","cd",8));
	printf("%s",strnstr("aaabcabcd","cd",8));

}*/
