/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 17:11:42 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

//struct price
typedef struct s_price
{
	int	swap;
	int	rotate;
	int	rotate_reverse;
}	t_price;

//stack structure and function
typedef struct s_stack
{
	struct s_stack		*previous;
	int					value;
	unsigned int		id;
	t_price				*price;
	struct s_stack		*next;
}	t_stack;

//stack info struture
typedef struct s_info
{
	int		min_a;
	int		max_a;
	int		min_b;
	int		max_b;
	int		size_a;
	int		size_b;
	t_stack	**stack_a;
	t_stack	**stack_b;
}	t_info;

t_stack	*ft_stacknew(int value);

void	ft_stackadd_front(t_stack **stack, t_stack *new);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stack_init_id(t_stack *stack);

int		ft_stacksize(t_stack *stack);
t_stack	*ft_stacklast(t_stack *stack);

void	ft_stackdelone_relink(t_stack **stack);
void	ft_stackdelone(t_stack *stack, void (*del)(int));
void	ft_stackclear(t_stack **stack, void (*del)(int));

void	ft_stackprint_num_fd(t_stack *stack, int fd);
void	ft_stackprint_num_rev_fd(t_stack *stack, int fd);
void	ft_printstack_color(t_stack *stack_a, t_stack *stack_b);


//error_1.c
char	**ft_clear_av(char **av, int n);
void	ft_error_push_swap_double(t_stack *stack, char **nbrs);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

//error_2.c
void	delete_value(int a);
void	free_nbrs_stack(char **nbrs, t_stack **stack);
void	free_all_stack(t_stack **stack_a, t_stack **stack_b);
void	ft_create_stack_a(t_stack **stack, char **nbrs, int n);

#endif