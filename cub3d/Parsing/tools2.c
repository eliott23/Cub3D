/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-che <zait-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 07:16:54 by zait-che          #+#    #+#             */
/*   Updated: 2023/02/22 07:17:42 by zait-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p.h"

int	ft_len(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_srch(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	m_srch(char *s, char c, char lim)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != lim)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
