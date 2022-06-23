/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsauvain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:37:50 by jsauvain          #+#    #+#             */
/*   Updated: 2022/05/09 17:22:54 by jsauvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	va_start(arg, format);
	i += ft_format(format, arg);
	va_end(arg);
	return (i);
}
/*
int main(void)
{
	int	b,c = 0;
	char	*str = "presente";
	int		a = 24;
	void	*adresse = "l";

	b = ft_printf("Je me %s, j'ai %d ans. Mon adresse est %p\n", str, a, adresse);
	c = printf("Je me %s, j'ai %d ans. Mon adresse est %p\n", str, a, adresse);
	printf("b = %d\nc = %d\n", b, c);
}*/
