/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:35:38 by mabouce           #+#    #+#             */
/*   Updated: 2018/11/05 16:43:58 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb >= 13 || nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	fact = nb;
	while (--fact > 0)
		nb = nb * fact;
	return (nb);
}
