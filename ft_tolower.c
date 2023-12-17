/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:00:46 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:27:02 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n",ft_tolower(atoi(argv[1])));
	printf("%d",tolower(atoi(argv[1])));
}
*/
