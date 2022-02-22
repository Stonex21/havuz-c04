/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 07:31:55 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/15 07:45:21 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str [i] >= 'a' && str [i] <= 'z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
				i++;
		else
			return (0);
	}
	return (1);
}
