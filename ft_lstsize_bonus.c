/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:38:10 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 21:11:00 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		nb_elem;

	tmp = lst;
	nb_elem = 0;
	while (tmp)
	{
		tmp = tmp->next;
		nb_elem++;
	}
	return (nb_elem);
}
