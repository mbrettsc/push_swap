/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:12:53 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/18 02:57:35 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/header.h"

void	ft_push_a(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackB)
	{
		head = (*stackB)->next;
		(*stackB)->next = *stackA;
		*stackA = *stackB;
		*stackB = head;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackA)
	{
		head = (*stackA)->next;
		(*stackA)->next = *stackB;
		*stackB = *stackA;
		*stackA = head;
		write(1, "pb\n", 3);
	}
}

void	ft_push_ab(t_struct **stackA, t_struct **stackB)
{
	ft_push_a(stackA, stackB);
	ft_push_b(stackA, stackB);
}
