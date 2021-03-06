/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfron <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:00:56 by mfron             #+#    #+#             */
/*   Updated: 2014/08/15 16:17:18 by mfron            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i <= length)
	{
		l = 0;
		k = 0;
		j = tab[i];
		while (k <= length)
		{
			if (tab[k] == j)
				l++;
			k++;
		}
		if (l % 2 != 0)
			return (j);
		i++;
	}
	return (0);
}
