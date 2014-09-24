/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 10:27:04 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 23:28:41 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n)
	{
		while (x < n)
		{
			dest[x] = src[x];
			x += 1;
		}
	}
	return (0);
}
