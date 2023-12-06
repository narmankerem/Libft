/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:53:17 by knarman           #+#    #+#             */
/*   Updated: 2023/12/06 04:28:38 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_white_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

static int ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *str;
    
    start = 0;
    
	while (is_white_space(s1[start]) || ft_char_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && (is_white_space(s1[end - 1]) || ft_char_in_set(s1[end - 1], set)))
        end--;
    str = (char *)malloc(sizeof(*s1) * (end - start + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (start < end)
        str[i++] = s1[start++];
    str[i] = '\0';
    return (str);
}

int main ()
{
    char str[] =  "gkonursdfhjkfdfgh";
    char set[] = "gh";
    printf("%s", ft_strtrim(str, set));
}