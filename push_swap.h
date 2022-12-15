/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 21:31:24 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
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
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size_a;
	int		size_b;
	int		max_a;
	int		min_a;
	int		med_a;
	int		max_b;
	int		min_b;
	int		med_b;
}	t_info;

//libft
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
ssize_t	ft_atoi_long(const char *nptr);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char *s2);
char	**ft_split(char *s, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

//error check
int		ft_push_swap_check(t_stack *stack);

char	**ft_clear_av(char **av, int n);
void	ft_error_push_swap_double(t_stack *stack, char **nbrs);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

void	delete_value(int a);
void	free_nbrs_stack(char **nbrs, t_stack *stack);
void	free_all_stack(t_stack *stack_a, t_stack *stack_b);
void	ft_create_stack_a(t_stack *stack, char **nbrs, int n);

//info
t_info	*ft_init_info(t_stack *stack_a, t_stack *stack_b);

//sort
void	swap(t_stack *stack);
void	push(t_stack *stack1, t_stack *stack2);
void	rotate(t_stack *stack);
void	rotate_reverse(t_stack *stack);

void	ss(t_stack *stack_a, t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

void	sa(t_stack *stack_a);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rra(t_stack *stack_a);

void	sb(t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	rb(t_stack *stack_b);
void	rrb(t_stack *stack_b);

//algo
void	ft_algo_push_swap(t_stack *stack_a, t_stack *stack_b);
void	ft_algo_ps_3(t_info *info);
void	ft_algo_ps_5(t_info *info);
void	ft_algo_ps_n(t_info *info);

int		algo_min(t_stack *stack);
int		algo_max(t_stack *stack);
int		algo_med(t_stack *stack, t_info *info);

//stack
t_stack	*ft_stacknew(int value);

void	ft_stackadd_front(t_stack *stack, t_stack *new);
void	ft_stackadd_back(t_stack *stack, t_stack *new);

void	ft_stack_init_id(t_stack *stack);

int		ft_stacksize(t_stack *stack);

t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackdelone_relink(t_stack *stack);

void	ft_stackdelone(t_stack *stack, void (*del)(int));
void	ft_stackclear(t_stack *stack, void (*del)(int));

void	ft_stackprint_num_fd(t_stack *stack, int fd);
void	ft_stackprint_num_rev_fd(t_stack *stack, int fd);
void	ft_printstack_color(t_stack *stack_a, t_stack *stack_b);

#endif