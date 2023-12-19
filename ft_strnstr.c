/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:11:16 by htong             #+#    #+#             */
/*   Updated: 2023/12/15 21:08:33 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (((!big || !little) && len == 0) || (ft_strlen(big) < ft_strlen(little)))
		return (0);
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] != 0)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && big[i + j]
				&& (i + j < len))
			{
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
			}
		}
	i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int     main (int argc, char **argv)
{
    printf("%p \n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    printf("%p", strnstr(argv[1], argv[2], atoi(argv[3])));
    return(0);
}
*/
