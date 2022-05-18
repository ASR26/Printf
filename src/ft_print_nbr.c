/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 08:33:40 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/18 09:08:47 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_nbr(int n)
{
	int		i;
	char	*str;

	str = ft_itoa(n);
	i = ft_print_str(str);
	free(str);
	return (i);
}
