/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:51:23 by pwarda            #+#    #+#             */
/*   Updated: 2026/07/14 18:51:27 by pwarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_all(char **arr, size_t until)
{
	size_t	i;

	i = 0;
	while (i < until)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*new_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	nwords;
	size_t	i;
	size_t	len;

	nwords = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < nwords)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		result[i] = new_word(s, len);
		if (!result[i])
			return (free_all(result, i), NULL);
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "hello how are you today?";
	char	**test;
	int		i;

	printf("%s\n", str);
	test = ft_split(str, ' ');
	if (!test)
		return (1);
	i = 0;
	while (test[i])
	{
		printf("%s\n", test[i]);
		free(test[i]);
		i++;
	}
	free(test);
	return (0);
}*/
