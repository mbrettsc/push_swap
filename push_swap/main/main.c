/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 05:35:04 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/21 06:04:46 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int ac, char **av)
{
    t_struct    *stackA;
    t_struct    *stackB;
    
    if (ac > 1 && ft_arg_check(av))
    {
        stackB = NULL;
        stackA = ft_lst_fill(av, ac);
        if (ft_is_sorted(stackA) == 1)
        { 
            ft_lst_free(&stackA);
            return (0);
        }
        ft_main_sort(&stackA, &stackB, (ac - 1));
    }
}