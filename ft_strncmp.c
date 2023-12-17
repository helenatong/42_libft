/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:27:03 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 22:00:13 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
    printf("%d \n", strncmp(argv[1], argv[2], atoi(argv[3])));
    return(0);
}
*/