/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_fuctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:53:17 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/29 00:39:02 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_struct	*get_next_min(t_struct **stackA)
{
	t_struct	*head;
	t_struct	*min;
	int			flag;

	head = *stackA;
	flag = 0;
	min = NULL;
	if (!head)
		return (NULL);
	while (head)
	{
		if ((head->index == -1) && (!flag || head->value < min->value))
		{
			flag = 1;
			min = head;
		}
		head = head->next;
	}
	return (min);
}

void	add_index(t_struct **stackA)
{
	t_struct	*head;
	int			i;

	i = 0;
	head = get_next_min(stackA);
	while (head)
	{
		head->index = i++;
		head = get_next_min(stackA);
	}
}

void	ft_lst_free(t_struct **stackA)
{
	t_struct	*tmp;

	tmp = NULL;
	while (*stackA)
	{
		tmp = (*stackA)->next;
		free(*stackA);
		*stackA = NULL;
		if (tmp == NULL)
			break ;
		*stackA = tmp;
	}
}

t_struct	*ft_lst_fill(char **av, int ac)
{
	int			i;
	t_struct	*head;
	t_struct	*tmp;
	char		**tab;

	head = NULL;
	tab = add_av(av, ac);
	i = find_index(ac);
	while (tab[i])
	{
		tmp = ft_lstnew(ft_atoi(tab[i]));
		if (tmp == NULL)
		{
			ft_lst_free(&head);
			break ;
		}
		ft_lstadd_back(&head, tmp);
		i++;
	}
	if (ac == 2)
		free_double(tab);
	add_index(&head);
	return (head);
}
