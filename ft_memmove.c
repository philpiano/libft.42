/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:31:26 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:31:29 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "hello";
	char src[] = "srcsrcsrc";
	int n = 6;

	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	
	int	stringlen = 5;
	int	i = 0;
	printf("Now delete:");
	while (i < n)
	{
		printf("_");
		i++;
	}
	while (i < stringlen)
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
