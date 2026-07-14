/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:45:36 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:45:39 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "This is the test string!";
	int c;
	
	printf("Test String: '%s'\nEXPECTED CASES\n", s);
	c = 'g';
	printf("findbl chr:'%c' og-strchr(%s)\nchr findbl'%c':
	ft_strchr(%s)\n\n", c, strchr(s, c), c, ft_strchr(s, c));
	c = 90;
	printf("unfindbl chr:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	c = 115;
	printf("char multiple:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	c = 127;
	printf("char unprintable:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));

	printf("CASE UNEXPECTED - strchr / ft_strchr:\n");
	printf("char null:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	printf("int null:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	printf("char at start:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	printf("char at end:\nog strchr(%s)\nft_strchr(%s)\n",
	strchr(s, c), ft_strchr(s, c));
	return(0);
}*/
