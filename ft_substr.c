/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:30:02 by htong             #+#    #+#             */
/*   Updated: 2023/12/19 18:47:04 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		len_s;
	char				*out;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	out = (char *) malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (0);
	i = 0;
	while ((i < len) && (start + i < len_s))
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void) ac;
	printf("%s \n", ft_substr("0123456789", 9, 10));
	return (0);
}
*/