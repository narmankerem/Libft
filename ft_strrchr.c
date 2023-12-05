/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:43 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 12:32:58 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*s)
        s++;
    while (s >= str)
        if (*s-- == (char)c)
            return ((char *)s + 1);
    return (NULL);
}

int main()
{
    const char *str = "asywertyub";
    int c = 'y';
    printf("%s", ft_strrchr(str, c));
}