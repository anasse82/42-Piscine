/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 21:52:39 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 17:55:35 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		num;
	int		i;
	char	ok;

	num = 0;
	i = 0;
	ok = 1;
	while (*(str + i))
	{
		if ('0' <= *(str + i) && *(str + i) <= '9')
		{
			num *= 10;
			num += *(str + 1) - '0';
		}
		if (*(str + i) == '-')
			ok = 0;
		i += 1;
	}
	if (ok)
		return (num);
	else
		return (num * -1);
}
