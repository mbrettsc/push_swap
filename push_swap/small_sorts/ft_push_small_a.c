/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:00:09 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/23 03:09:48 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/header.h"

void	ft_push_small_a(t_struct **stackA, t_struct **stackB, int flag)
{
	t_struct	*head;

	head = *stackA;
	while (head->next != NULL)
	{
		if ((head->index == 0 && flag == 0) || (head->index == 1 && flag == 1))
		{
			ft_push_b(stackA, stackB);
			break ;
		}
		ft_rot_a(stackA);
		head = *stackA;
	}
	free (head);
}
