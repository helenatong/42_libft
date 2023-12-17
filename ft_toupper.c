/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:54:28 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:27:06 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n",ft_toupper(atoi(argv[1])));
	printf("%d",toupper(atoi(argv[1])));
}
*/
