/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:54:29 by noaziki           #+#    #+#             */
/*   Updated: 2024/08/09 21:55:31 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac > 1)
	{
		while (j <= (ac - 1))
		{
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
}
