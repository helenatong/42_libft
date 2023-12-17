/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:02:47 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 22:04:00 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	lentot;
	char			*out;

	if (!s1 || !s2)
		return (NULL);
	lentot = ft_strlen(s1) + ft_strlen(s2);
	out = ft_calloc(lentot + 1, sizeof(char));
	if (out == NULL)
		return (0);
	ft_strlcpy(out, s1, lentot + 1);
	ft_strlcpy(out + ft_strlen(s1), s2, lentot + 1);
	return (out);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%s \n", ft_strjoin(av[1], av[2]));
	return (0);
}
*/
