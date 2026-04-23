/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:17:50 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/07 16:11:26 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	fact;

	if (nb < 0)
		return (0);
	n = nb;
	fact = 1;
	while (n > 0)
	{
		fact = fact * n;
		n--;
	}
	return (fact);
}
/*
int	main(int argc, char	**argv)
{
	int	check;
	if (argc < 2)
		return (1);
	check = atoi(argv[1]);
	printf("%d\n", ft_iterative_factorial(check));
	return (0);
}*/
