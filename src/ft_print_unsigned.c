/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 08:40:58 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/18 08:51:27 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	i;
	char			*str;

	str = ft_uitoa(n);
	i = ft_print_str(str);
	free(str);
	return (i);
}
