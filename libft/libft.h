/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:05:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 11:51:19 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# define INT_MIN -2147483648

//type of char
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

//conversion
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);

//print
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

//list
typedef struct s_list
{
	struct s_list	*previous;
	int				content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);

void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstprint(t_list *lst);

int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

void	ft_lstdelone_relink(t_list **lst);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));

#endif
