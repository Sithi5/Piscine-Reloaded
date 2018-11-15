/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:54:04 by mabouce           #+#    #+#             */
/*   Updated: 2018/11/05 17:57:51 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstring(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int av, char **ac)
{
	int i;

	if (av < 2)
		return (0);
	i = 1;
	while (i < av)
	{
		ft_putstring(ac[i]);
		ft_putchar('\n');
		i++;
	}
}
