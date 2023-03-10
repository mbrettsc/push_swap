/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:44:47 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/12/23 06:29:21 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../libft/libft.h"
# include <stdlib.h>

// LIST
t_struct	*ft_lst_fill(char **av, int nbr);
void		ft_lst_free(t_struct **stackA);

// CHECKS
int			ft_arg_check(char **n, int ac);
int			ft_is_sorted(t_struct *stackA);
int			ft_dup_check(char **n, int size, int ac);
int			*ft_to_arr(char **n, int size, int ac);
void		ft_max_min_check(char *a);

// RULES
void		ft_push_a(t_struct **stackA, t_struct **stackB);
void		ft_push_b(t_struct **stackA, t_struct **stackB);
void		ft_push_ab(t_struct **stackA, t_struct **stackB);

void		ft_rev_rot_a(t_struct **stackA);
void		ft_rev_rot_b(t_struct **stackB);
void		ft_rev_rot_ab(t_struct **stackA, t_struct **stackB);

void		ft_rot_a(t_struct **stackA);
void		ft_rot_b(t_struct **stackB);
void		ft_rot_ab(t_struct **stackA, t_struct **stackB);

void		ft_swap_a(t_struct **stackA);
void		ft_swap_b(t_struct **stackB);
void		ft_swap_ab(t_struct **stackA, t_struct **stackB);
// SORT
void		ft_small_sort(t_struct **stackA, t_struct **stackB, int ac);
void		ft_main_sort(t_struct **stackA, t_struct **stackB, int ac);
void		free_double(char **s);
void		ft_sort_three(t_struct **stackA);
void		push_other_three(t_struct **stackA, int *nums);
void		ft_sort_four(t_struct **stackA, t_struct **stackB);
void		ft_push_small_a(t_struct **stackA, t_struct **stackB, int flag);
void		ft_sort_five(t_struct **stackA, t_struct **stackB);

void		ft_radix_sort(t_struct **stackA, t_struct **stackB);
void		ft_radix_sort(t_struct **stackA, t_struct **stackB);

// UTILS
char		**add_av(char **av, int ac);
void		add_index(t_struct **stackA);
int			find_index(int ac);
int			ext_arg(char **tab);
int			arg_check_other(char **tab, int i);

#endif