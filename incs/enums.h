/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:58:41 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 23:14:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

enum e_error
{
	NO_ERROR = 0,
	ERROR_ARGS_NUMBER = 1,
	ERROR_ARGS_EMPTY = 2,
	ERROR_PARSING = 3,
	ERROR_INIT = 4,
	ERROR_ALGO = 5,
	ERROR_MALLOC = 6,
	ERROR_NUMBER = 7
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
	RA,
	RRA
};

#endif