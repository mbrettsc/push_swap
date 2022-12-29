/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 05:35:04 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/28 23:37:52 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	t_struct	*stack_a;
	t_struct	*stack_b;

	if (ac > 1 && ft_arg_check(av, ac))
	{
		stack_b = NULL;
		stack_a = ft_lst_fill(av, ac);
		if (ft_is_sorted(stack_a) == 1)
		{
			ft_lst_free(&stack_a);
			return (0);
		}
		ft_main_sort(&stack_a, &stack_b, (ac - 1));
	}
}
