/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:48:07 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:48:09 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	alternating(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	return (ft_tolower(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res [i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "You are a doofus";
	printf("%s\n", ft_strmapi(str, alternating));
	return (0);
}*/
