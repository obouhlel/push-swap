/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:58:41 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 11:44:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

# define MAX_VALUE	500

enum e_error
{
	NO_ERROR = 0,
	ERROR_ARGS_NUMBER = 1,
	ERROR_ARGS_EMPTY = 2,
	ERROR_PARSING = 3,
	ERROR_INIT = 4,
	ERROR_ALGO = 5,
	ERROR_MALLOC = 6,
	ERROR_NUMBER = 7,
	ERROR_CHECKER = 8
};

enum e_type
{
	RA_RB,
	RRA_RRB,
	RA_RRB,
	RRA_RB
};

enum e_mode
{
	MODE_RA,
	MODE_RRA
};

enum e_bool
{
	FALSE = 0,
	TRUE = 1
};

enum e_median
{
	NO_MEDIAN = 0,
	MEDIAN = 1
};

enum e_move
{
	ERROR = -1,
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
};

#endif