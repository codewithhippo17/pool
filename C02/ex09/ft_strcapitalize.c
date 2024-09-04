/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:08:40 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/04 16:18:20 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alph(char c)
{
	int	res;

	res = 1;
	if (c >= 'a' && c <= 'z')
		res = 1;
	else if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}

int	ft_str_is_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if (ft_str_is_num(str[i]) == 1)
			first_char = 0;
		else if (ft_str_is_uppercase(str[i]) == 1 && first_char == 1)
			first_char = 0;
		else if (ft_str_is_lowercase(str[i]) == 1 && first_char == 1)
		{
			str[i] = str[i] - 32;
			first_char = 0;
		}
		else if (ft_str_is_uppercase(str[i]) == 1 && first_char == 0)
			str[i] = str[i] + 32;
		else if (is_alph(str[i]) == 0)
			first_char = 1;
		i++;
	}
	return (str);
}

/*#include <unistd.h>
int main()
{

    char *res;
    char str[] = "Salut, cMMent tU vAs ? 42mots Quarante-deux; cinquante+et+un";
    res = ft_strcapitalize(str);
    while (*res)
    {
        write(1, res, 1);
        res++;
    }
    return 0;
}*/
