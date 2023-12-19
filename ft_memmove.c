/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:33:16 by htong             #+#    #+#             */
/*   Updated: 2023/12/15 20:57:29 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*destb;
	unsigned char	*srcb;

	i = 0;
	destb = (unsigned char *) dest;
	srcb = (unsigned char *) src;
	if (dest == src)
		return (dest);
	else if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (i < n)
	{
		destb[n - i - 1] = srcb[n - i - 1];
		i++;
	}
	return (dest);
}
