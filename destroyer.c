/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroyer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorel <cmorel@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:03:10 by cmorel            #+#    #+#             */
/*   Updated: 2024/12/17 14:52:55 by cmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dico.h"

void	destroy_single(t_dict dict)
{
	if (dict.code == 1)
		free(dict.key);
	else if (dict.code == 2)
		free(dict.value);
}

void	destroy_both(t_dict dict)
{
	free(dict.value);
	free(dict.key);
}

void	clear(t_dict *dict)
{
	int		i;
	void	(*fct)(t_dict);
	i = 0;
	while (!dict[i].end)
	{
		fct = dict[i].destroyer;
		fct(dict[i]);
		i++;
	}
}

void	ft_destroy(t_dict *dict)
{
	clear(dict);
	free(dict);
}
