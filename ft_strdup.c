/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:15:01 by htong             #+#    #+#             */
/*   Updated: 2023/11/09 18:07:45 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	while (i < len + 1)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av) // COmment saturer une me;oire
{
	if (ac != 2)
		return (0);
	printf("%s \n", ft_strdup(av[1]));
    printf("%s", strdup(av[1]));
	return (0);
}*/
