/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:51:49 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 21:39:12 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	str1[] = "The Quick Brown Fox jumps over the Lazy Dog.!0@[`{\n9";
	char	str2[] = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOg.!0@[`{";
	char	str3[] = "the quick brown fox jumps over the lazy dog.!0@[`{";
	char	*examples[] = {str1, str2, str3};
	int		i;
	int		current = 0;

	printf("TOUPPER\n");
	while (current < 3)
	{
		i = 0;
		printf("(b4): %s\n(=>): ", examples[current]);
		while (examples[current][i] != '\0')
		{
			printf("%c", ft_toupper(examples[current][i]));
			i++;
		}
		printf("\n(og): ");
		i = 0;
		while (examples[current][i] != '\0')
		{
			printf("%c", toupper(examples[current][i]));
			i++;
		}
		printf("\n\n");
		current++;
	}
}*/
