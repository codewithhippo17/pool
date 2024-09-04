/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:11:29 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/01 21:47:37 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
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
    res = ft_strlowcase(str);
    while (*res)
    {
        write(1, res, 1);
        res++;
    }
    return 0;
}
*/
