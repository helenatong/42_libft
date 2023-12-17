/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:45:51 by htong             #+#    #+#             */
/*   Updated: 2023/12/15 20:57:04 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;

	if (!set || !s1)
		return (0);
	while (ft_inset(*s1, set))
		s1++;
	if (!(*s1))
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (ft_inset(s1[len], set))
		len--;
	return (ft_substr(s1, 0, len + 1));
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("final len : %d \n", ft_len_after_trim(av[1], av[2]));
    printf("string trimmed : %s \n", ft_strtrim(av[1], av[2]));
	return (0);
}
*/
