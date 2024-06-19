#include <unistd.h>
#include <stdio.h>

 
int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
  
    if (s1[i] == s2[i])
    {
        return (0);
    }

    else
    {
        return (s1[i] - s2[i]);
    }
}


int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hell";
    char str4[] = "hello";
    int result;


    result = ft_strcmp(str1, str2);
    printf("Difference between \"%s\" and \"%s\": %d\n", str1, str2, result);

    result = ft_strcmp(str1, str3);
    printf("Difference between \"%s\" and \"%s\": %d\n", str1, str3, result);

    
    result = ft_strcmp(str1, str4);
    printf("Difference between \"%s\" and \"%s\": %d\n", str1, str4, result);

    return 0;
}
