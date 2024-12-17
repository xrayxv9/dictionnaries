/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorel <cmorel@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:42:06 by cmorel            #+#    #+#             */
/*   Updated: 2024/12/17 14:51:40 by cmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DICO_H
# define DICO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_dict
{
	int		code;
	int		end;
	int		filled;
	char	*key;
	void	*value;
	void	(*destroyer)(struct s_dict);
}	t_dict;

int	ft_strlen(char *str);

int	ft_strcmp(char *s, char *s2);

void	*get(t_dict *dict, char *key);

void	give(t_dict *dict, char *key, void *value);

t_dict	*create(int size);

void	destroy_single(t_dict dict);

void	destroy_both(t_dict dict);

void	clear(t_dict *dict);

void	ft_destroy(t_dict *dict);

#endif
