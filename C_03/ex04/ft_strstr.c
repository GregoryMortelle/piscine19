/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmortell <gmortell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:21:30 by gmortell          #+#    #+#             */
/*   Updated: 2022/09/19 14:13:50 by gmortell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + i] == to_find[i] && str[c + i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str + c);
		c++;
		i = 0;
	}
	return (0);
}
