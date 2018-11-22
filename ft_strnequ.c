/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:40:59 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:41:11 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		k;

	if (!s1 || !s2)
		return (0);
	k = ft_strncmp(s1, s2, n);
	if (k)
		return (0);
	else return (1);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}
