/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 22:14:54 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/27 01:02:00 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n <= 9 && n >= 0)
		ft_putchar_fd(n + 48, fd);
	else if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
