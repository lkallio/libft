/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 02:27:32 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 17:25:08 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l;

	if (lst)
	{
		if (!(l = f(lst)))
			return (0);
		if (lst->next && !(l->next = ft_lstmap(lst->next, f)))
		{
			free(l);
			return (0);
		}
		return (l);
	}
	return (0);
}
