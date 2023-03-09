/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykostan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:51:54 by lykostan          #+#    #+#             */
/*   Updated: 2023/01/28 20:51:56 by lykostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c);
int		ft_strchr(const char *str, int c);
int		ft_putnbr_fd(int n);
int		ft_putstr_fd(char *s);
int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);

#endif
