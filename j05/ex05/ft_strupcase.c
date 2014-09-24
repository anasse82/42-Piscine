/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 11:47:24 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 22:45:15 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = ((str[i] - 'a') + 'A');
			i += 1;
		}
	}
	return (str);
}
