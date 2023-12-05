/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:35 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 14:00:13 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while ((s1 || s2) && n--)
        if (*s1++ != *s2++)
            return ((char)*--s1 - (char)*--s2);
    return (0);
}

int main ()
{
    char *str1 = "asdgfdhs";
    char *str2 = "asdafdhs";
    size_t n = 6;
    printf("%d", ft_strncmp(str1, str2, n));
}

