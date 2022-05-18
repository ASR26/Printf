/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:50:46 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/18 08:49:30 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función crea una string que representa el valor entero recibido como
 * argumento. Gestiona números negativos*/
#include"../include/ft_printf.h"

#define TAM 20

char	*ft_uitoa(unsigned int n)
{
	char	str[TAM];
	long	val;
	int		i;

	i = TAM - 1;
	val = (long) n;
	str[i--] = '\0';
	while (val > 0)
	{
		str[i--] = (char)(val % 10 + '0');
		val /= 10;
	}
	if (n == 0)
		str[i--] = '0';
	return (ft_strdup(&str[i + 1]));
}
