/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:29:37 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:29:40 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char	s1[] = "this is test";
	char	s2[] = "hello";
	int	n  = 3;

	printf("(s1) %s s2: %s, n: %d\n", s1, s2, n);
	printf("%d\n", memcmp(s1, s2, n));
	printf("s1: %s s2: %s, n: %d\n", s1, s2, n);
	return (0);
}*/
