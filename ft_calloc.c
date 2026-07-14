/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:25:07 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:25:33 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*str;
	size_t			total;

	if (count != 0 && size > (size_t)-1 / count)
		return (NULL);
	total = count * size;
	str = (unsigned char *)malloc(total);
	if (!str)
		return (NULL);
	i = 0;
	while (i < total)
		str[i++] = '\0';
	return ((void *)str);
}

/*int main(void)
{
	int i = 0;
	int *arr = calloc(5, sizeof(int));
	
	while (i < 5)
		printf("%d ", arr[i++]);
	free(arr);
	return (0);
}*/
