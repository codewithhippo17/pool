/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:11:28 by ehamza            #+#    #+#             */
/*   Updated: 2024/08/28 20:28:51 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb > 9 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else
		ft_putchar(nb + 48);

}

/*int main()
{
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(99);
    ft_putchar('\n');
    ft_putnbr(2);
    ft_putchar('\n');
    ft_putnbr(2147483647);
}*/