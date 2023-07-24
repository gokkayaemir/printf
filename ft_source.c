/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:17:11 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/23 18:20:51 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(unsigned long long i, int *result)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_pointer(i / 16, result);
		ft_pointer(i % 16, result);
	}
	else
		ft_putchar(base[i], result);
}

void	ft_lowerhex(unsigned int i, int *result)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_lowerhex(i / 16, result);
		ft_lowerhex(i % 16, result);
	}
	else
		ft_putchar(base[i], result);
}

void	ft_upperhex(unsigned int i, int *result)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		ft_upperhex(i / 16, result);
		ft_upperhex(i % 16, result);
	}
	else
		ft_putchar(base[i], result);
}

void	ft_unsigned(unsigned int i, int *result)
{
	if (i >= 10)
		ft_putnbr(i / 10, result);
	ft_putchar(i % 10 + '0', result);
}
