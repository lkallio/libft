/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:12:15 by lkallio           #+#    #+#             */
/*   Updated: 2021/09/16 19:44:38 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*arr_get(t_array *arr, int i)
{
	if (i >= arr->last_index)
		return (NULL);
	return (arr->data + i * arr->mem_size);
}

void	arr_set(t_array *arr, int i, int n, void *new_data)
{
	if (n <= 0)
		n = 1;
	if (i < 0)
		i = arr->last_index;
	while (i + n - 1 >= arr->size)
	{
		arr->data = ft_realloc(arr->data, arr->size, arr->size, arr->mem_size);
		arr->size += arr->size;
	}
	ft_memmove(arr->data + i * arr->mem_size, new_data, arr->mem_size * n);
	if (arr->last_index <= i)
		arr->last_index = i + n;
}

void	arr_append(t_array *arr, void *new_data)
{
	arr_set(arr, -1, 1, new_data);
}

void arr_new(t_array *arr, int mem_size)
{
	arr->data = ft_memalloc(sizeof(mem_size));
	arr->size = 1;
	arr->mem_size = mem_size;
	arr->last_index = 0;
}