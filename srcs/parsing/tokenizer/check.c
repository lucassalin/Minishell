/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:54:25 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:54:26 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenizer.h"

int	tokenizer_eol(t_tokenizer *tokenizer)
{
	return (!(*(tokenizer->cmd_ptr)));
}
