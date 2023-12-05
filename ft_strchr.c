/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:20 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 12:35:03 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
        if (*str++ == (char)c)
            return (char *)str - 1 ;
    return (NULL);
}

int main()
{
    const char *str = "asyqwertyub";
    int c = 'k';
    printf("%s", ft_strchr(str, c));
}