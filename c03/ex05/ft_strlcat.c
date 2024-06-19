#include <unistd.h>
#include <stdio.h>

// Function to concatenate src to dest ensuring the result does not exceed size
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int res;

    i = 0;
    j = 0;
    res = 0;

    // Find the length of dest
    while (dest[i] != '\0')
        i++;

    // Find the length of src
    while (src[res] != '\0')
        res++;

    // Calculate the total length of the string it tried to create
    if (size <= i)
        res += size;
    else
        res += i;

    // Append src to dest
    while (src[j] != '\0' && (i + 1) < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate the result
    if (size > i)
        dest[i] = '\0';

    return (res);
}

// Example usage
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 12;
    unsigned int result;

    result = ft_strlcat(dest, src, size);
    printf("After concatenation: %s\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}

