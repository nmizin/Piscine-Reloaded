/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:58:45 by nmizin            #+#    #+#             */
/*   Updated: 2017/10/25 14:58:51 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
