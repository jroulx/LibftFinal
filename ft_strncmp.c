/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:38:33 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:31:43 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		k;

	k = 0;
	while (s1[k] && s1[k] == s2[k] && k < n - 1)
		k++;
	if (n)
		return (((unsigned char)s1[k]) - ((unsigned char)s2[k]));
	return (0);
}