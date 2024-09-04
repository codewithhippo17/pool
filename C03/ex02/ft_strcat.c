/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:06:28 by ehamza            #+#    #+#             */
/*   Updated: 2024/09/04 14:06:33 by ehamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

/*#include <unistd.h>
#include <string.h>
int main()
{
    int i;
    i = 0;

    char dst[20] = "code_with"; 
    char src[] = "hippo";        
    ft_strcat(dst, src);
    while (dst[i])
    {
        write(1, &dst[i], 1);
        i++;
    }
    write(1, "\n", 1);

    i = 0;
    char dst1[20] = "code_with";
    char src1[] = "hippo";       
    strcat(dst1, src1);
    while (dst1[i])
    {
        write(1, &dst1[i], 1);
        i++;
    }

    return 0;
}*/