/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:33:41 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/09 22:40:42 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (tab[a] != '\0')
	{
		if (f(tab[a]) == 1)
			i++;
		a++;
	}
	return (i);
}
