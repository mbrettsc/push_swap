/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 03:01:49 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/23 06:35:48 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_index(int ac)
{
	int	i;

	if (ac == 2)
		i = 0;
	else
		i = 1;
	return (i);
}

void	free_double(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
}

char	**add_av(char **av, int ac)
{
	char	**tab;

	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
		tab = av;
	return (tab);
}

int	arg_check_other(char **tab, int i)
{
	int	j;

	while (tab[i])
	{
		ft_max_min_check(tab[i]);
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == '-' || tab[i][j] == '+')
				j++;
			if (!ft_isdigit(tab[i][j]))
			{
				write(1, "Error\n", 6);
				exit (1);
			}
			j++;
		}
		i++;
	}
	return (i);
}
