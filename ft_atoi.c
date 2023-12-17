/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:56:44 by htong             #+#    #+#             */
/*   Updated: 2023/11/10 18:23:51 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while ((nptr[i]) && ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32)))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while ((nptr[i]) && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

/*
int     main (int argc, char **argv)
{
    printf("%d \n",(ft_atoi(argv[1])));
	printf("%d", (atoi(argv[1])));
}
*/