/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:50:44 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:50:47 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last);
}
/*
int	main(void)
{
	char s1[] = "hello";
	int c1 = 101;
	
	printf("og strrchr: %s\n", strrchr(s, c));
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	
	CASES: Normal - character findable
	not present - character unfindable
	multiple of same character
	character is null pointer
	character is non printable
	string is ''
	character is ''
	target is repeated
	
	return (0);
}*/
