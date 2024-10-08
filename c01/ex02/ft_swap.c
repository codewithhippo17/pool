/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:00:17 by ehamza            #+#    #+#             */
/*   Updated: 2024/08/31 10:12:02 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*#include <stdio.h>

int main()
{
	int a;
	int b;
	a = 45;
	b = 54;
	int *a2, *b2;
	a2 = &a;
	b2 = &b;
	ft_swap(a2, b2);
	printf("%d, %d\n", *a2, *b2);
	return 0;
}*/