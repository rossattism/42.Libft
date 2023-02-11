/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:28:51 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:18:59 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
/**                                 FT_SPLIT
 * VARIABLE: 'tab': a pointer that will contain the table (string of strings)
 * created with 'ft_split'.
 * MALLOC: creates the memory necessary to allocate the table which is the
 * size of char multiplicated by the amount of words in 'tab' (calculated by 
 * 'ft_wordcounter') + 1 last space for the null-terminator.
 * IF: needed to secure the function, null is returned if neither 'tab' nor 
 * 's' exist.
 * RETURN: the new 'tab', string of strings, created by the function. In order
 * to do this, a creation of a memory for each word (row) in the table is 
 * needed.
 * WORDCOUNTER: counts the amount of words anchored by the value of 'c', 
 * necessary to know the amount of memory to allocate for 'tab'.
 * WORDSIZE: calculates de length of the words necessary to know the amount
 * of memory to allocate for each word in 'tab'.
 * MEMORYFREE: releases the memory allocated for a word if it does not exist.
 * MEMORYMAKER: allocates memory for each word in 'tab'.
 * REMINDER: 'ft_substr' creates a substring of 's' starting from the value 
 * of 'start' with a maximum length of 'len'.
*/

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (w);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_memoryfree(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_memorymaker(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_wordsize(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_memoryfree(str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	return (ft_memorymaker(tab, (char *)s, c));
}
