/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:22:23 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/04 16:22:24 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &base[str[i] / 16], 1);
			write(1, &base[str[i] % 16], 1);
		}
		i++;
	}
}

/*int main()
{
    ft_putstr_non_printable("Coucou\n \t \r   \b   tu vas bien ?");
    return 0;
}*/