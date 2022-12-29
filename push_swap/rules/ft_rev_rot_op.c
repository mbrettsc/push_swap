/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:54:12 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/29 00:56:19 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/header.h"

void	ft_rev_rot_a(t_struct **stackA)
{
	t_struct	*head;
	t_struct	*new;

	if ((*stackA)->next == NULL)
		return ;
	head = *stackA;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackA;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackA);
	*stackA = new;
	write(1, "rra\n", 4);
}

void	ft_rev_rot_b(t_struct **stackB)
{
	t_struct	*head;
	t_struct	*new;

	if ((*stackB)->next == NULL)
		return ;
	head = *stackB;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackB;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackB);
	*stackB = new;
	write(1, "rrb\n", 4);
}

void	ft_rev_rot_ab(t_struct **stackA, t_struct **stackB)
{
	ft_rev_rot_a(stackA);
	ft_rev_rot_b(stackB);
}
