/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 02:53:59 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 16:56:58 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!content && content_size)
		return (ft_lstnew(content, 0));
	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content_size && !(lst->content = malloc(content_size)))
	{
		free(lst);
		return (0);
	}
	lst->content = content_size ?
		ft_memcpy(lst->content, content, content_size) : 0;
	lst->content_size = content_size;
	lst->next = 0;
	return (lst);
}
