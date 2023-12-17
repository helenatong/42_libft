/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:11:13 by htong             #+#    #+#             */
/*   Updated: 2023/11/11 12:39:01 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lendest = 0;
	lensrc = 0;
	i = 0;
	if (dst != NULL)
		lendest = ft_strlen(dst);
	if (src != NULL)
		lensrc = ft_strlen(src);
	if (((dst == NULL) || (src == NULL)) && (size == 0))
		return (lendest + lensrc);
	if (lendest >= size)
		return (size + lensrc);
	while ((i < size - 1 - lendest) && (src[i]))
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = 0;
	return (lendest + lensrc);
}

/*
int     main (int argc, char **argv)
{
	int i;
    printf("%d \n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
	printf("%s", argv[1]);
    return(0);
}
*/