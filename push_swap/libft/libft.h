/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:05:14 by iyapar            #+#    #+#             */
/*   Updated: 2022/12/23 03:36:21 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_struct
{
	int				value;
	int				index;
	struct s_struct	*next;
}				t_struct;

bool		ft_isdigit(int n);

char		**ft_split(char const *s, char c);
int			ft_atoi(const char *str);
long		ps_atoll(const char *str);

t_struct	*ft_lstnew(int value);
t_struct	*ft_lstlast(t_struct *lst);
void		ft_lstadd_front(t_struct **lst, t_struct *new);
void		ft_lstadd_back(t_struct **lst, t_struct *new);
int			ft_lstsize(t_struct *lst);

#endif
