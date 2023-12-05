/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:28 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 16:08:54 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (!src || !dst)
        return (0);
    if (dstsize == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main ()
{
    char str[13] = "hello world!";
    char searchstr[6] = "atala";
    size_t len = 7;
    ft_strlcpy(str,searchstr,len);
    printf("%s",str);
}