/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:38:07 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 21:10:54 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*s_element;

	s_element = malloc(sizeof(t_list));
	if (!s_element)
		return (NULL);
	s_element->content = (void *)content;
	s_element->next = NULL;
	return (s_element);
}
