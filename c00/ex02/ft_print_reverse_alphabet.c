/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:49:57 by ehamza            #+#    #+#             */
/*   Updated: 2024/08/28 12:51:38 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}

/*int main()
{
	ft_print_reverse_alphabet();
	return 0;
}*/