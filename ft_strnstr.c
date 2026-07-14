/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:48:43 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:48:45 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	stringlen;
	size_t	i;

	stringlen = ft_strlen(needle);
	if (stringlen == 0)
		return ((char *)haystack);
	if (stringlen > len)
		return (NULL);
	i = 0;
	while (i <= len - stringlen && haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, stringlen) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char search[] = "the quick brown fox";
	char find[] = "brown";
	int n = 4;
	
	printf("strnstr: (%s)", ft_strnstr(search, find, n));
	return (0);
}*/
