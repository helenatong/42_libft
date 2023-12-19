/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:19:19 by htong             #+#    #+#             */
/*   Updated: 2023/12/19 18:58:03 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	lens;
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	lens = ft_strlen(s);
	while (++i < lens)
		f(i, &s[i]);
}
/*
void ft_add_one(unsigned int pos, char *str)
{
	*str = *str + 1;
}

int     main (int argc, char **argv)
{
    ft_striteri(argv[1], &ft_add_one);
    printf("%s \n", argv[1]);
}
*/
