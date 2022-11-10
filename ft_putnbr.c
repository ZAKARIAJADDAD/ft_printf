/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:26:07 by zjaddad           #+#    #+#             */
/*   Updated: 2022/11/08 03:53:31 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	lent;

	lent = 0;
	if (nb >= 10)
	{
		lent += ft_putnbr(nb / 10);
		lent += ft_putchar((nb % 10) + 48);
	}
	else if (nb == -2147483648)
	{
		lent += ft_putchar('-');
		lent += ft_putchar('2');
		lent += ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		lent += ft_putchar('-');
		lent += ft_putnbr(nb * (-1));
	}
	else if (nb <= 9)
		lent += ft_putchar(nb + 48);
	return (lent);
}
