/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorel <cmorel@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:46:05 by cmorel            #+#    #+#             */
/*   Updated: 2024/12/17 14:54:44 by cmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dico.h"

void	*get(t_dict *dict, char *key)
{
	int	i;

	while (!dict[i].end)
	{
		if (ft_strcmp(dict[i].key, key))
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

void	give(t_dict *dict, char *key, void *value, int code)
{
	int	i;
	int code;

	code = ft_strcmp(dict->key, key);
	i = 0;
	while (dict[i].filled && !code)
	{
	   	code = ft_strcmp(dict->key, key);	
		i++;
	}
	if (!dict[i].end)
	{
		dict[i].key = key;
		dict[i].value = value;
	}
	else
		perror("You didn't give enough space for the dictionnary");
}

t_dict	*create(int size)
{
	t_dict	*dict;

	dict = malloc(sizeof(t_dict) * (size + 1));
	if (!dict)
	{
		perror("The dictionnary couldn't be created\n");
		return (NULL);
	}
	dict[size].end = 1;
	while (size)
	{
		dict[size].filled = 0;
		dict[size].key = "0";
		dict[size].code = 0;
		dict[size].value = NULL;
		dict[size].destroyer= NULL;
		size--;
	}
	return (dict);
}
