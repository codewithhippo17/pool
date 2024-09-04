/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:04:24 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/04 14:05:18 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main()
{
    char    s1[] = "hi8po";
    char    s2[] = "hi4po";

    int res = ft_strncmp(s1, s2, 6);
    printf("%d", res);
    return 0;
}*/
