/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:41:50 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 23:15:49 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *dst;

    i = 0;
    if (!(dst = malloc(sizeof(char) * len + 1)))
        return (NULL);
    while (i < len && s[start + i] != '\0')
    {
        dst[i] = s[start + i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
    
}

int main ()
{
    char str[20] = "KEREFSMFSD";
    unsigned int val = 5;
    
    printf("Doldurulmuş bellek bloğu: %s\n", ft_substr(str, val, 4));

    return 0;
}