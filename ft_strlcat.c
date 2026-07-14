/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:47:12 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:47:19 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	output;

	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	destlen = i;
	output = destlen + ft_strlen(src);
	if (size == 0 || destlen == size)
		return (output);
	i = destlen;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (output);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destft[3][20] = {"1234567890", "Hello ", "abc"};
	char	destog[3][20] = {"1234567890", "Hello ", "abc"};
	char	*srcs[] = {"1234567890", "World", "defghij"};
	size_t	sizes[] = {16, 20, 2};
	size_t	retft;
	size_t	retog;
	int		current;

	current = 0;
	printf("STRLCAT\n");
	while (current < 3)
	{
		printf("Dest: %s\nSrc : %s\nSize: %zu\n",
			destft[current], srcs[current], sizes[current]);
		retft = ft_strlcat(destft[current], srcs[current], sizes[current]);
		retog = strlcat(destog[current], srcs[current], sizes[current]);
		printf("(=>): %s\nRet : %zu\n", destft[current], retft);
		printf("(og): %s\nRet : %zu\n", destog[current], retog);
		printf("\n");
		current++;
	}
	return (0);
}*/

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "1234567890";
	char	src1[] = "1234567890";
	char	dest[20] = "1234567890";
	char	dest1[20] = "1234567890";
	unsigned int	nb = 16;
	int len;
	int len1;

	printf("Source: %s\nDestin: %s\nNumber: (%d)\n", src, dest, nb);
	len = ft_strlcat(dest, src, nb);
	len1 = strlcat(dest1, src1, nb);
	printf("Functi: %s\nLength (%d)\n", dest, len);
	printf("Functi: %s\nLength (%d)\n", dest1, len1);
}*/
