/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:11:02 by gpaul             #+#    #+#             */
/*   Updated: 2021/11/27 17:54:44 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_info	*tab;

	if (argc < 2)
		ft_error();
	tab = malloc(sizeof(t_info) * 1);
	if (tab == NULL)
		ft_error();
	if (argc == 2)
		cpy_arg2(argv, tab);
	else if (argc > 2)
		cpy_arg(argc, argv, tab);
	cpy_sort(tab);
	bubblesort(tab->sort, tab->size_sort);
	solver(tab);
	exit_free(tab, 3);
	return (0);
}
