/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 17:50:23 by pwarda            #+#    #+#             */
/*   Updated: 2026/06/27 17:50:26 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(void)
{
	int	a = 0;
	while (a >= 0 && a <= 128) // a goes 0-128 = All ASCII vals and checks
	{
		printf("%d: '%c' Is this char alpha? (%d)\n", a, a, ft_isalpha(a));
		a++;
	}
	return (0);
}*/
