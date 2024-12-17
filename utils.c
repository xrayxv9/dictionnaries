/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorel <cmorel@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:06:38 by cmorel            #+#    #+#             */
/*   Updated: 2024/12/17 14:19:58 by cmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dico.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s, char *s2)
{
	int	i;

	i = 0;
	while (s[i] == s2[i] && (s[i] && s2[i]))
		i++;
	return (s[i] == s2[i]);	
}
