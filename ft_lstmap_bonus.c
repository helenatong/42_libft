/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:38:02 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 21:10:48 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*flst;
	t_list	*tmp;
	t_list	*felem;

	if (!f || !del)
		return (0);
	flst = NULL;
	tmp = lst;
	while (tmp)
	{
		felem = ft_lstnew((*f)(tmp->content));
		if (!felem)
		{
			ft_lstclear(&flst, del);
			return (NULL);
		}
		ft_lstadd_back(&flst, felem);
		tmp = tmp->next;
	}
	return (flst);
}
