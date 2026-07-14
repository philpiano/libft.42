/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:24:43 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:24:46 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[] = "delete this";
	char	str2[] = "become zeroth";
	char	str3[] = "this too";
	char	*strs[] = {str1, str2, str3};
	char	*backup;
	size_t	deleting = 5;
	int		set = 0;
	size_t	i;
	size_t	len;

	printf("BZERO\n");
	while (set < 3)
	{
		len = ft_strlen(strs[set]);
		backup = strdup(strs[set]);
		printf("Str : %s\n(=>): ", strs[set]);
		ft_bzero(strs[set], deleting);
		i = 0;
		while (i < len)
		{
			if (i < deleting)
				printf("0");
			else
				printf("%c", strs[set][i]);
			i++;
		}
		printf("\n(og): ");
		bzero(backup, deleting);
		i = 0;
		while (i < len)
		{
			if (i < deleting)
				printf("0");
			else
				printf("%c", backup[i]);
			i++;
		}
		printf("\n\n");
		free(backup);
		set++;
	}
	return (0);
}
*/
