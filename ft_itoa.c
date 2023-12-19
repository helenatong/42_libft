/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:24:35 by htong             #+#    #+#             */
/*   Updated: 2023/12/19 18:40:52 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	int			len;
	long int	nb;

	nb = n;
	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*s;
	int			i;
	long int	nb;

	i = 1;
	nb = (long int) n;
	len = ft_len_int(nb);
	s = ft_calloc(len + 1, sizeof(char));
	if (s == NULL)
		return (0);
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (i < len)
	{
		s[len - i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (s[0] != '-')
		s[0] = nb % 10 + '0';
	s[i] = '\0';
	return (s);
}
/*
int     main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", ft_itoa(atoi(av[1])));
    
    return (0);
}
*/
