/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:45:57 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:45:59 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

/*char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*output;

	size = ft_strlen(src);
	output = malloc((size + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	ft_memcpy(output, src, (size + 1));
	return (output);
}
/*
int	main(void)
{
	char	str0[] = "string to duplicate";
	char	*str1;
	char	str2[] = "standard stringdup";
	char	*str3;

	str1 = ft_strdup(str0);
	if (str1 == NULL)
		return (1);
	printf("My Function~\nOrig str: %s\nNew  str: %s\n", str0, str1);
	free(str1);
	str3 = strdup(str2);
	if (str3 == NULL)
		return (1);
	printf("Lib Function~\nOrig str: %s\nNew  str: %s\n", str2, str3);
	free(str3);
	return (0);
}*/
