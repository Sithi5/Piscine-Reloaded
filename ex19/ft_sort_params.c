/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:04:45 by mabouce           #+#    #+#             */
/*   Updated: 2018/11/06 13:28:26 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstring(char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap_string(char **s1, char **s2)
{
	char *s3;

	s3 = *s1;
	*s1 = *s2;
	*s2 = s3;
}

int		main(int av, char **ac)
{
	int i;

	if (av < 2)
		return (0);
	i = 1;
	while (i < av - 1)
	{
		if (ft_strcmp(ac[i], ac[i + 1]) > 0)
		{
			ft_swap_string(&ac[i], &ac[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < av)
	{
		ft_putstring(ac[i]);
		i++;
	}
}
