/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:48:24 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:48:29 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s0[] = "1";
	char	s1[] = "abc";
	int	n0 = 1;
	char	s2[] = "abc";
	char	s3[] = "same";
	int	n1 = 100;
	char	s4[] = "iim huge";
	char	s5[] = "iiismol";
	int	n2 = 20;

	printf("Native-s1:%s s2:%s n:%d=%d\n", s0, s1, n0, strncmp(s0, s1, n0));
	printf("Coded -s1:%s s2:%s n:%d=%d\n\n", s0, s1, n0, ft_strncmp(s0, s1, n0));
	printf("Native-s1:%s s2:%s n:%d=%d\n", s2, s3, n1, strncmp(s2, s3, n1));
	printf("Coded -s1:%s s2:%s n:%d=%d\n\n", s2, s3, n1, ft_strncmp(s2, s3, n1));
	printf("Native-s1:%s s2:%s n:%d=%d\n", s4, s5, n2, strncmp(s4, s5, n2));
	printf("Coded -s1:%s s2:%s n:%d=%d\n", s4, s5, n2, ft_strncmp(s4, s5, n2));
	printf("Coded -s1:%s s2:%s n:%d=%d\n", s4, s5, n2, ft_strncmp(s1, s2, n2));
}*/
