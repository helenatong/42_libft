/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:44:38 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:24:16 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int     main (int argc, char **argv)
{
    printf("%d \n",ft_isdigit(atoi(argv[1])));
	printf("%d",isdigit(atoi(argv[1])));
}*/