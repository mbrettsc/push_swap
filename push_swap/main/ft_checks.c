/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 06:00:27 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/21 06:02:46 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <limits.h>

int		*ft_to_arr(char **n, int size)
{
	int *arr;
	int i;
	int j;

	i = 1;
	j = 0;
	arr = (int *)malloc(sizeof(int) * size);
	while (n[i])
	{
		arr[j] = ft_atoi(n[i]);
		i++;
		j++;
	}
	return (arr);
}

int		ft_dup_check(char **n, int size)
{
	int i;
	int j;
	int *arr;

	i = 0;
	arr = ft_to_arr(n, size);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				write (1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(arr);
	return (1);
}

int		ft_is_sorted(t_struct *stackA)
{
	while (stackA->next)
	{
		if (stackA->value > stackA->next->value)
			return (0);
		stackA = stackA->next;
	}
	return (1);
}

void	ft_max_min_check(char *a)
{
	if (ps_atoll(a) < INT_MIN || ps_atoll(a) > INT_MAX)
	{
		write (1, "Error\n", 6);
		exit(0);
	}
	return ;
}

int	ft_arg_check (char **n)
{
	int i;
	int j;

	i = 1;
	while (n[i])
	{
		ft_max_min_check(n[i]);
		j = 0;
		while (n[i][j] != '\0')
		{
			if (n[i][j] == '+' || n[i][j] == '-')
				j++;
			if (!ft_isdigit(n[i][j]))
			{
				write (1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (ft_dup_check(n, i - 1) == 0)
		return (0);
	return (1);
}
