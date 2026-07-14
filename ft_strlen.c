/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:47:36 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:47:39 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "String Length Character Tester!";
	char	str2[] = "The Quick Brown Fox jumps over the Lazy Dog.!0@[`{";
	char	str3[] = "String1";
	char	str4[] = "0123456789";
	char	str5[] = "";
	char	*examples[] = {str1, str2, str3, str4, str5};
	int		current = 0;

	while (current < 5)
	{
		printf("String : %s\n", examples[current]);
		printf("Len(=>): (%ld)\n", ft_strlen(examples[current]));
		printf("Len(og): (%ld)\n\n", strlen(examples[current]));
		current++;
	}
	return (0);
}*/
