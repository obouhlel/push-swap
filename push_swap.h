/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 21:00:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
# include <stdlib.h>
# include <unistd.h>

# define FAIL (void *)-1

enum price{
	RA_RB,
	RRA_RRB,
	RA_RRB,
	RRA_RB,
};

//stack structure and function
typedef struct s_stack
{
	struct s_stack		*previous;
	struct s_stack		*next;
	int					value;
	unsigned int		id;
	int					rotate;
	int					rotate_reverse;
}	t_stack;

//stack info struture
typedef struct s_info
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size_a;
	int		max_a;
	int		min_a;
	int		med_a;
	int		size_b;
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
void	ft_putstrnbr_fd(char *str, int nbr, int fd);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
ssize_t	ft_atoi_long(const char *nptr);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char *s2);
char	**ft_split(char *s, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

//stack
t_stack	*ft_stack_new(int value);
t_stack	*ft_stack_last(t_stack *stack);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
void	ft_stack_id_init(t_stack *stack);
int		ft_stack_size(t_stack *stack);
void	ft_stack_clear(t_stack *stack);
void	ft_stack_delone(t_stack *stack);
t_stack	*ft_stack_deltop(t_stack *stack);
void	ft_print_stack_color(t_stack *stack_a, t_stack *stack_b);
void	ft_stack_print_num_fd(t_stack *stack, int fd);

//error check
int		ft_push_swap_check(t_stack *stack);

char	**ft_clear_av(char **av, int n);
void	ft_error_push_swap_double(t_stack *stack, char **nbrs);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

void	free_nbrs_stack(char **nbrs, t_stack *stack);
void	free_all_stack(t_stack *stack_a, t_stack *stack_b);
void	free_info(t_info *info);
void	ft_create_stack_a(t_stack **stack, char **nbrs, int n);

//sort
void	ft_swap(t_stack *stack);
void	ft_rotate(t_stack *stack);
void	ft_reverse_rotate(t_stack *stack);

void	pa(t_info *info);
void	sa(t_stack *stack_a);
void	ra(t_stack *stack_a);
void	rra(t_stack *stack_a);

void	pb(t_info *info);
void	sb(t_stack *stack_b);
void	rb(t_stack *stack_b);
void	rrb(t_stack *stack_b);

void	ss(t_stack *stack_a, t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

//algo
int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
int		ft_med(t_stack *stack, t_info *info);
void	ft_algo_push_swap(t_stack *stack_a, t_stack *stack_b);
void	ft_algo_3(t_info *info);
void	ft_algo_5(t_info *info);
void	ft_algo_n(t_info *info);
void	ft_algo_lis(t_info *info);

//price
void	ft_price_calcule(t_stack *stack, int size);
void	ft_price_calculate_all_price(t_info *info);
void	ft_price_combo(t_stack *stack_a, t_stack *stack_b, int *tab);
int		ft_best_price_cost(t_stack *stack_a, t_stack *stack_b);
int		ft_best_price_move(t_stack *stack_a, t_stack *stack_b);

//info
t_info	*ft_init_info(t_stack *stack_a, t_stack *stack_b);
t_info	*ft_update_info(t_info *info);
void	ft_print_info(t_info *info);

#endif