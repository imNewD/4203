#include <unistd.h>
#include <stdio.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    
    if (n == 0)
    {
        return 0;
    }

    
    i = 0;

    
    while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
    {
        i++;
    }

    
    if (s1[i] == s2[i])
    {
        return 0;
    }
    else
    {
       
        return (s1[i] - s2[i]);
    }
}


int main()
{
    char s1[] = "Hello, world!";
    char s2[] = "Hello, there!";
    unsigned int n = 7;
    int result;

    result = ft_strncmp(s1, s2, n);
    printf("Comparison result: %d\n", result);

    n = 13;
    result = ft_strncmp(s1, s2, n);
    printf("Comparison result: %d\n", result);

    return 0;
}
