/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:02:27 by aalvarez          #+#    #+#             */
/*   Updated: 2022/09/24 12:55:03 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief checks if the string pointed by str has at least onw character
 * that differs from a space bar or its significants.
 *
 * @param str the string to be evaluated.
 * @return int 1 if it finds a character differing from printable char, 0
 * otherwise.
 */
int	ft_strnotblank(const char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (ft_isprint(*str) && !ft_isblank(*str))
			return (1);
		str++;
	}
	return (0);
}
