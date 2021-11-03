/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:04:13 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/14 15:47:22 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **mat, int i)
{
	i = i - 1;
	while (i > 0)
	{
		free(mat[i]);
		i--;
	}
	free(mat);
	return (NULL);
}

static int	ft_sizeofword(char const *s, char c, int k)
{
	int	len;

	len = 0;
	while (s[k] == c)
		k++;
	while (s[k] && s[k] != c)
	{
		k++;
		len++;
	}
	return (len);
}

static int	ft_wordcounter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == '\0' && s[i] == c)
		return (i++);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_output(char **mat, const char *s, char c, int wordcount)
{
	int i;
	int j;
	int	k;
	int	lenofword;

	i = 0;
	j = 0;
	k = 0;
	while (i < wordcount)
	{
		j = 0;
		while (s[k] == c)
			k++;
		lenofword = ft_sizeofword(s, c, k);
		if (!(mat[i] = (char *)malloc(sizeof(char) * (lenofword + 1))))
			return (ft_free(mat, i));
		while (lenofword--)
			mat[i][j++] = s[k++];
		mat[i][j] = '\0';
		i++;
	}
	mat[i] = NULL;
	return (mat);
}

char		**ft_split(const char *s, char c)
{
	int		wordcount;
	char	**mat;

	if (!s)
		return (NULL);
	wordcount = ft_wordcounter(s, c);
	mat = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!mat)
		return (NULL);
	return (ft_output(mat, s, c, wordcount));
}
