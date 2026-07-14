/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:32:48 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:40:13 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[] = "Wipe this memory";
	char	str2[] = "become clean";
	char	str3[] = "";
	char	*strs[] = {str1, str2, str3};
	char	*backup;
	int		deleting = 5;
	int		replace = 'x';
	int		set = 0;
	size_t	i;
	size_t	len;

	printf("MEMSET\n");
	while (set < 3)
	{
		len = strlen(strs[set]);
		backup = strdup(strs[set]);
		printf("Str : %s\n(=>): ", strs[set]);
		ft_memset(strs[set], replace, deleting);
		i = 0;
		while (i < len)
			printf("%c", strs[set][i++]);
		printf("\n(og): ");
		memset(backup, replace, deleting);
		i = 0;
		while (i < len)
			printf("%c", backup[i++]);
		printf("\n\n");
		free(backup);
		set++;
	}
	return (0);
}*/
