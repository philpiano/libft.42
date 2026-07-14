/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:25:50 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:25:52 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
/*int	ft_isalnum(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}*/

/*int	main(void)
{
	int	a = 0;
	while (a >= 0 && a <= 128)
	{
		printf("%d: '%c' Is this char alnum? (%d)\n", a, a, ft_isalnum(a));
		a++;
	}
	return (0);
}*/
