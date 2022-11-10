/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:18:14 by zjaddad           #+#    #+#             */
/*   Updated: 2022/11/08 03:53:38 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsnbr(unsigned int nb)
{
	int	lent;

	lent = 0;
	if (nb >= 10)
	{
		lent += ft_putnbr(nb / 10);
		lent += ft_putchar((nb % 10) + 48);
	}
	else if (nb <= 9)
		lent += ft_putchar(nb + 48);
	return (lent);
}
