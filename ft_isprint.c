/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 17:51:19 by pwarda            #+#    #+#             */
/*   Updated: 2026/06/27 17:51:24 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	int	a = 0;
	while (a >= 0 && a <= 128)
	{
		printf("%d: '%c' Is this char printable? (%d)\n", a, a, ft_isprint(a));
		a++;
	}
	return (0);
}*/
