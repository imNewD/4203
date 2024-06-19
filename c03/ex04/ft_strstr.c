#include <unistd.h>
#include <stdio.h>


char *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;

    i = 0;

    
    if (to_find[0] == '\0')
    {
        return (str);
    }

   
    while (str[i] != '\0')
    {
        j = 0;

        while (str[i + j] == to_find[j])
        {
           
            if (to_find[j + 1] == '\0')
            {
                return (str + i);
            }
            j++;
        }

        i++;
    }

    
    return (0);
}


int main()
{
    char str[] = "Hello, world!";
    char to_find[] = "world";
    char *result;

    result = ft_strstr(str, to_find);
    if (result)
    {
        printf("Found substring: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}

