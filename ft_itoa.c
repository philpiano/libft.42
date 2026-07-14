/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:26:12 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:26:14 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	counter(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;
	int		pos;

	nb = n;
	len = counter(nb);
	pos = len - 1;
	result = malloc(sizeof(char) * (len + 1));
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	if (nb == 0)
		result[pos] = '0';
	while (nb > 0)
	{
		result[pos] = (nb % 10) + '0';
		nb = nb / 10;
		pos--;
	}
	result[len] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	itoa1 = -2147483647;
	int	itoa2 = -1;
	int	itoa3 = 0;
	int	itoa4 = 10;
	int	itoa5 = 42;
	int	itoas[] = {itoa1, itoa2, itoa3, itoa4, itoa5};
	int	set = 0;
	char	*writeme;

	printf("ITOA\n");
	while (set < 5)
	{
		writeme = ft_itoa(itoas[set]);
		printf("int (%d)   =   str (%s)\n", itoas[set], writeme);
		free(writeme);
		set++;
	}
	return (0);
}*/
