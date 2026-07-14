/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:51:13 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/12 20:51:15 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	stringlen;
	char	*result;

	stringlen = ft_strlen(s);
	if (start > stringlen)
		return (ft_strdup(""));
	if (len > stringlen - start)
		len = stringlen - start;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
		result[j++] = s[i++];
	result[j] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	test_valid(void)
{
	char str[] = "Can you say!";
	unsigned int start = 4;
	size_t len = 3;
	char *res;

	res = ft_substr(str, start, len);
	if (!res)
	{
		printf("NULL\n");
		return (0);
	}
	printf("%s\n", res);
	free(res);
	return (0);
}


int	test_valid(void)
{
	char str[] = "Can you say!";
	unsigned int start = 4;
	size_t len = 3;
	char *res;

	res = ft_substr(str, start, len);
	if (!res)
	{
		printf("NULL\n");
		return (0);
	}
	if (!ft_strncmp(res, "you", 3))
		printf("OK\n");
	else
		printf("KO\n");
	free(res);
	return (0);
}

int	test_invalid(void)
{
	char str[] = "Can you say!";
	unsigned int start = 10;
	size_t len = 50000;
	char *res;

	res = ft_substr(str, start, len);
	if (!res)
	{
		printf("NULL\n");
		return (0);
	}
	printf("%s\n", res);
	free(res);
	return (0);
}

int main()
{
	test_valid();
	test_invalid();

	return (0);
}*/
