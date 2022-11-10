/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 03:02:06 by zjaddad           #+#    #+#             */
/*   Updated: 2022/11/08 15:14:00 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexdecimal(unsigned long nb, char *base)
{
	int	lent;

	lent = 0;
	if (nb >= 16)
	{
		lent += ft_hexdecimal(nb / 16, base);
		lent += ft_hexdecimal(nb % 16, base);
	}
	else
		lent += ft_putchar(base[nb]);
	return (lent);
}
