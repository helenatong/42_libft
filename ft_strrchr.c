/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:19:54 by htong             #+#    #+#             */
/*   Updated: 2023/11/11 11:36:38 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		cc;
	char		*ptr;
	char		*temp;

	i = 0;
	ptr = 0;
	temp = (char *) s;
	cc = (char) c;
	if ((s[i] == '\0') && (cc == '\0'))
		return (temp);
	while (s[i])
	{
		if (s[i] == cc)
			ptr = temp;
		i++;
		temp++;
	}
	if (cc == '\0')
		return (temp);
	return (ptr);
}

/*
//The strrchr() function returns a pointer to the last occurrence 
//of the character c in the string s.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str = argv[1];
    printf("%p \n", ft_strrchr(str, atoi(argv[2])));
	printf("%p", strrchr(str, atoi(argv[2])));
    return (0);
}
*/