/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 17:50:43 by pwarda            #+#    #+#             */
/*   Updated: 2026/06/27 17:51:11 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	int	a = 0;
	while (a >= 0 && a <= 128) // a goes 0-128 = All ASCII vals and checks
	{
		printf("%d: '%c' Is this char digit? (%d)\n", a, a, ft_isdigit(a));
		a++;
	}
	return (0);
}*/
