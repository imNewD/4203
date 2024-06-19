#include <unistd.h>
#include <stdio.h>


char *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int j;

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


int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    ft_strcat(dest, src);
    printf("After concatenation: %s\n", dest);

    return 0;
}
