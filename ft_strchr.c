/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:21:11 by htong             #+#    #+#             */
/*   Updated: 2023/11/11 11:37:40 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	if ((s[i] == '\0') && ((char) c == '\0'))
		return (ptr);
	while (s[i])
	{
		if (s[i] == (char) c)
			return (ptr);
		i++;
		ptr++;
	}
	if ((char) c == '\0')
		return (ptr);
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str = argv[1];
    printf("%p \n", ft_strchr(str, atoi(argv[2])));
	printf("%p", strchr(str, atoi(argv[2])));
    return (0);
}
*/
