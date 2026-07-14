/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:31:01 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:31:04 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
	char	src1[] = "Copy me over there!";
	char	src2[] = "";
	char	src3[] = "The Quick Brown Fox.";
	char	*srcs[] = {src1, src2, src3};
	char	*destft;
	char	*destog;
	size_t	current = 0;
	size_t	i;
	size_t	len;

	printf("MEMCPY\n");
	while (current < 3)
	{
		len = ft_strlen(srcs[current]);
		destft = malloc(len + 1);
		destog = malloc(len + 1);
		ft_bzero(destft, len + 1);
		ft_bzero(destog, len + 1);
		ft_memcpy(destft, srcs[current], len);
		printf("Src : %s\nSize: %zu\n(=>): ", srcs[current], len);
		i = 0;
		while (i < len)
			printf("%c", destft[i++]);
		memcpy(destog, srcs[current], len);
		printf("\n(og): ");
		i = 0;
		while (i < len)
			printf("%c", destog[i++]);
		printf("\n\n");
		free(destft);
		free(destog);
		current++;
	}
	return (0);
}*/
