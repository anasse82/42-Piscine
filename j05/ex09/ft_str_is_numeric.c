/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 13:32:47 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 13:35:29 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		i += 1;
	if (str[i] == '\0')
		return (1);
	return (0);
}
