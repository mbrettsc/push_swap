/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:38 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/21 05:56:26 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstnew(int value)
{
	t_struct	*ptr;

	ptr = (t_struct *)malloc(sizeof(t_struct));
	if (!ptr)
		return (NULL);
	ptr->value = value;
	ptr->index = -1;
	ptr->next = NULL;
	return (ptr);
}
