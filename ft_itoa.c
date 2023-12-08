/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:58:50 by knarman           #+#    #+#             */
/*   Updated: 2023/12/06 06:31:34 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// -1234\0
static size_t get_number_digit(int number)
{
    size_t i;
    
    i = 0;
    if (number > 0)
    {
        while (number != 0)
        {
            number /= 10;
            i++;
        }
        return (i);
    }
    else if (number < 0)
    {
        while (number != 0)
        {
            number /= 10;
            i++;
        }
        return (i + 1);
    }
    else
        return (1);
    
    
}
// 1234
char *ft_itoa(int n)
{
    size_t len;
    int nbr;
    char *str;

    len = get_number_digit(n);
    nbr = n;

    if (n < 0)
        nbr = -nbr;
    if (!(str = (char *)malloc(sizeof(char) * len)))
        return (NULL);
    str[len] = '\0';
    
    while (nbr > 0)
    {
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    if (n < 0) 
        str[0] = '-';
    if (n == 0)
        str[0] = '0';
    return (str);
    
    
}

int main()
{
    printf("%s", ft_itoa(-1234));
}