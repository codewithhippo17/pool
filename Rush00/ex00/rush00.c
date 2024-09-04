/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:39:40 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/01 12:36:51 by daoutou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_outer(int a)
{
	int	ia;

	ia = 0;
	while (ia < a)
	{
		if (ia == 0 || ia == a - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		ia += 1;
	}
}

void	print_inner(int a)
{
	int	ia;

	ia = 0;
	while (ia < a)
	{
		if (ia == 0 || ia == a - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		ia += 1;
	}
}

void	rush(int x, int y)
{
	int	ib;

	if (x <= 0 || y <= 0)
		return ;
	
	ib = 0;
	while (ib < y)
	{
		if (ib == 0 || ib == y - 1)
			print_outer(x);
		else
			print_inner(x);
		ft_putchar('\n');
		ib += 1;
	}
}
