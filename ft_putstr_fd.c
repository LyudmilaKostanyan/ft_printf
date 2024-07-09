/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykostan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:50:12 by lykostan          #+#    #+#             */
/*   Updated: 2023/01/28 20:50:14 by lykostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	int		size;
	int		i;

	i = -1;
	if (s == NULL)
		write(1, "(null)", 6);
	else
	{
		size = ft_strlen(s);
		while (++i < size)
			write(1, &s[i], 1);
	}
	return (i);
}
