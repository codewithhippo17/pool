/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:58:52 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/01 21:46:29 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*#include <unistd.h>
int main()
{

    char *res;
    char str[] = "dfghaFGHUUY5988///";
    res = ft_strupcase(str);
    while (*res)
    {
        write(1, res, 1);
        res++;
    }
    return 0;
}*/
