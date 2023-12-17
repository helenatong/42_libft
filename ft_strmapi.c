/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:15:58 by htong             #+#    #+#             */
/*   Updated: 2023/12/17 16:24:11 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strmodified;
	unsigned int	lens;
	unsigned int	i;

	i = -1;
	if ((!s) || (!f))
		return (NULL);
	lens = ft_strlen(s);
	strmodified = (char *) malloc((lens + 1) * sizeof(char));
	if (strmodified == NULL)
		return (0);
	while (++i < lens)
		strmodified[i] = f(i, s[i]);
	strmodified[i] = '\0';
	return (strmodified);
}

/*
char ft_add_one(unsigned int pos, char c)
{
	c = c + 1;
	return(c);
}

int     main (int argc, char **argv)
{
    printf("%s \n",ft_strmapi(argv[1], &ft_add_one));
}
*/
