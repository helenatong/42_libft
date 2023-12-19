/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:00:46 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:26:33 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n",ft_strlen(argv[1]));
	printf("%ld",strlen(argv[1]));
}
*/