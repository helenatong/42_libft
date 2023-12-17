/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:53:45 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:24:12 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n",ft_isascii(atoi(argv[1])));
	printf("%d",isascii(atoi(argv[1])));
}*/