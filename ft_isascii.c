/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 17:50:34 by pwarda            #+#    #+#             */
/*   Updated: 2026/06/27 17:50:36 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int	a = 0;
	while (a >= 0 && a <= 128)
	{
		printf("%d: '%c' Is this char ascii? (%d)\n", a, a, ft_isascii(a));
		a++;
	}
	return (0);
}*/
