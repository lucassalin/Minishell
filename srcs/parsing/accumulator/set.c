/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:49:37 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:49:37 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "accumulator.h"

int	acc_set_not_empty(t_acc	*acc)
{
	acc->is_empty = False;
	return (0);
}
