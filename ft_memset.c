/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:18 by knarman           #+#    #+#             */
/*   Updated: 2023/12/17 19:56:02 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*d1;

	d1 = (unsigned char *)dest;
	while (count--)
		*d1++ = (unsigned char)c;
	return (dest);
}
