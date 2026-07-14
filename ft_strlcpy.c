/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:03:22 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/03 20:53:37 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst1[] = "This is the start of the story";
	char	src1[] = "How about the end,";
	char	dst2[] = "Final Destination";
	char	src2[] = "Start";
	char	dst3[] = "111";
	char	src3[] = "9";
	char	*srcs[] = {src1, src2, src3};
	char	*dsts[] = {dst1, dst2, dst3};
	int		i = 0;

	printf("STRLCPY\n");
	while (i < 3)
	{
		printf("dst: '%s' src: '%s'\n", dsts[i], srcs[i]);
		printf("len: %ld (=>) %s\n",
		ft_strlcpy(dsts[i], srcs[i], ft_strlen(srcs[i])), dsts[i]);
		printf("len: %ld (og) %s\n\n",
		strlcpy(dsts[i], srcs[i], ft_strlen(srcs[i])), dsts[i]);
		i++;
	}
}
*/