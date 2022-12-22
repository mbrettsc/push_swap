/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_fuctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:53:17 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/23 01:37:36 by mbrettsc         ###   ########.fr       */
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
	int				i;

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

void free_double(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
}

t_struct	*ft_lst_fill(char **av, int ac)
{
	int 		i;
	t_struct 	*head;
	t_struct	*tmp;
	char 		**tab;

	head = NULL;
	i = 0;
	if (ac == 2)
		tab	= ft_split(av[1], ' ');
	else
	{
		i = 1;
		tab = av;
	}	
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
