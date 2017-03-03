/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:06:41 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 23:26:41 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		nbr_words(const char *s, char c)
{
	int n;

	n = 0;
	while (*s)
	{
		if (*s == c)
			while (*s == c && *s)
				s++;
		else
		{
			n++;
			while (*s != c && *s)
				s++;
		}
	}
	return (n);
}

static int		largest_word(const char *s, char c)
{
	int i;
	int largest;

	largest = 0;
	while (*s)
	{
		i = 0;
		if (*s == c)
			while (*s == c && *s)
				s++;
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		if (i > largest)
			largest = i;
	}
	return (largest);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		words;
	int		largest;
	char	**tmp;

	i = 0;
	n = 0;
	words = nbr_words(s, c) + 1;
	largest = largest_word(s, c);
	tmp = (char **)malloc(sizeof(char *) * words);
	while (i < words)
	{
		tmp[i] = (char *)malloc(sizeof(char) * largest);
		i++;
	}
	i = 0;
	while (*s)
	{
		n = 0;
		while (*s != c && *s)
		{
			tmp[i][n] = *s;
			n++;
			s++;
		}
		if (*s == c)
		{
			i++;
			while (*s == c && *s)
				s++;
		}
	}
	tmp[words - 1] = NULL;
	return (tmp);
}
