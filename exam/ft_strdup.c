#include <stdlib.h>
//#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dup;
    int i = 0;

    dup = (char *) malloc (sizeof(int) * (ft_strlen(src) + 1));
    if (dup == NULL)
    {
        return 0;
    }
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
#include <unistd.h>
int main()
{
    int i = 0;
    char *dup;
    dup = ft_strdup("hippo and Chaima");
    while (dup[i])
    {
        write(1, &dup[i], 1);
        i++;
    }
    write(1, &dup[i], 1);

    return 0;
}