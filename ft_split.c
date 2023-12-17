/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:02 by htong             #+#    #+#             */
/*   Updated: 2023/12/17 16:24:06 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb_words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nb_words);
}

static int	ft_len_str(char **str, char c)
{
	int	lenstr;
	int	i;

	lenstr = 0;
	i = 0;
	while (**str && **str == c)
	{
		(*str)++;
	}
	while ((*str)[lenstr] && (*str)[lenstr] != c)
		lenstr++;
	return (lenstr);
}

static void	*ft_free(char **list_str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free((list_str)[j]);
		j++;
	}
	free(list_str);
	return (NULL);
}

static char	**ft_malloc_word(char const *s, char c)
{
	int			words;
	char		**list_str;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	list_str = malloc((words + 1) * sizeof(char *));
	if (!list_str)
		return (NULL);
	return (list_str);
}

char	**ft_split(char const *s, char c)
{
	char	**list_str;
	int		i;
	int		j;
	int		l;
	int		words;

	list_str = ft_malloc_word(s, c);
	if (list_str == NULL)
		return (NULL);
	words = ft_count_words(s, c);
	i = 0;
	while (i < words)
	{
		l = ft_len_str((char **) &s, c);
		list_str[i] = malloc((l + 1) * sizeof(char));
		if (list_str[i] == NULL)
			return (ft_free(list_str, i));
		j = 0;
		while (j < l)
			list_str[i][j++] = *s++;
		list_str[i++][j] = 0;
	}
	list_str[i] = 0;
	return (list_str);
}
/*
int	main(int ac, char **av)
{
	char	**t;
	int		i;
	int		lenstrs;

	(void)ac;
	t = ft_split("Bonjour0hello0hi0", '0');
	i = 0;
	lenstrs = ft_count_words("Bonjour0hello0hi0", 48);
	printf("nb of strings : %d \n", lenstrs);
	while (i < lenstrs + 1)
		printf("%s \n", t[i++]);
	return (0);
}
*/