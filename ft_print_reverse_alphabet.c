/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:05:02 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/18 20:52:36 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}
