/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:56:33 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 14:08:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_info	*ft_init_info(t_stack *stack_a, t_stack *stack_b)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info));
	if (!info)
	{
		free_all_stack(stack_a, stack_b);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	info->stack_a = stack_a;
	info->stack_b = stack_b;
	info->size = ft_stack_size(stack_a) + ft_stack_size(stack_b);
	info->size_a = ft_stack_size(stack_a);
	info->max_a = ft_max(stack_a);
	info->min_a = ft_min(stack_a);
	info->med_a = ft_med(stack_a, info);
	info->size_b = ft_stack_size(stack_b);
	info->max_b = ft_max(stack_b);
	info->min_b = ft_min(stack_b);
	info->med_b = ft_med(stack_b, info);
	info->ra = -1;
	info->rb = -1;
	info->rra = -1;
	info->rrb = -1;
	return (info);
}

t_info	*ft_update_info(t_info *info)
{
	info->size_a = ft_stack_size(info->stack_a);
	info->max_a = ft_max(info->stack_a);
	info->min_a = ft_min(info->stack_a);
	info->med_a = ft_med(info->stack_a, info);
	info->size_b = ft_stack_size(info->stack_b);
	info->max_b = ft_max(info->stack_b);
	info->min_b = ft_min(info->stack_b);
	info->med_b = ft_med(info->stack_b, info);
	return (info);
}

void	ft_print_info(t_info *info)
{
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;36m", 1);
	ft_putstrnbr_fd("Size total = ", info->size, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;31m", 1);
	ft_putstr_fd("STACK A :\n", 1);
	ft_putstrnbr_fd("size a\t= ", info->size_a, 1);
	ft_putstrnbr_fd("max a\t= ", info->max_a, 1);
	ft_putstrnbr_fd("min a\t= ", info->min_a, 1);
	ft_putstrnbr_fd("med a\t= ", info->med_a, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_putstr_fd("STACK B :\n", 1);
	ft_putstrnbr_fd("size b\t= ", info->size_b, 1);
	ft_putstrnbr_fd("max b\t= ", info->max_b, 1);
	ft_putstrnbr_fd("min b\t= ", info->min_b, 1);
	ft_putstrnbr_fd("med b\t= ", info->med_b, 1);
	ft_putstr_fd("\033[0m", 1);
	ft_putchar_fd('\n', 1);
	ft_print_move_info(info);
	ft_print_stack_color(info->stack_a, info->stack_b);
	ft_putstr_fd("\033[0m", 1);
}

void	ft_print_move_info(t_info *info)
{
	ft_putstr_fd("\033[0;35m", 1);
	ft_putstr_fd("MOVE :\n", 1);
	ft_putstrnbr_fd("ra\t= ", info->ra, 1);
	ft_putstrnbr_fd("rb\t= ", info->rb, 1);
	ft_putstrnbr_fd("rra\t= ", info->rra, 1);
	ft_putstrnbr_fd("rrb\t= ", info->rrb, 1);
	ft_putstr_fd("\033[0m", 1);
}

void	ft_init_move_info(t_info *info)
{
	ft_price_calculate_all_price(info);
	info->ra = info->stack_a->id;
	info->rb = info->stack_b->id;
	info->rra = info->size_a - info->stack_a->id;
	info->rrb = info->size_b - info->stack_b->id;
	// info->ra = -1;
	// info->rb = -1;
	// info->rra = -1;
	// info->rrb = -1;
}
