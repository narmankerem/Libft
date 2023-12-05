/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:40 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 13:41:04 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            while (needle[j] != '\0' && haystack[i+j] == needle[j] && i+j < len)
            {
                if (needle[j+1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}

int main ()
{
    char *str = "hello world!";
    char *searchstr = "lo";
    size_t len = 5;

    printf("%s", ft_strnstr(str, searchstr, len));
}