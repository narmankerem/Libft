/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:03:48 by knarman           #+#    #+#             */
/*   Updated: 2023/12/06 11:18:18 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    
    if (s == NULL || f == NULL) {
        return;
    }
    unsigned int i = 0;
    while (s[i] != '\0') {
        f(i, &s[i]);
        i++;
    }
}

void print_char_info(unsigned int index, char *c) {
    printf("Index: %u, Character: %c\n", index, *c);
}

int main() {
    char str[] = "Hello, World!";
    ft_striteri(str, print_char_info);

    return 0;
}