/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:01:17 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:01:44 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int k;

	k = 0;
	while (src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
