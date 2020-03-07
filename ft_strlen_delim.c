/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:08:57 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 16:44:41 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열속에 지정된 위치부터 지정된 문자가 나올때까지의
** 문자열의 길이를 반환하는 함수.
** 예를 들어, 
** char *s = "*hello*fellow***students*";
** int cnt = ft_strlen_delim(s, 1, '*'); 라고 한다면 s[1]부터 '*'나올때까지의 
** 문자열의 길이를 세고 5를 반환한다. 
** 
*/

#include "libft.h"

int		ft_strlen_delim(char const *s, int pos, char delim)
{
	int len;

	len = 0;
	while (s[pos] != delim && s[pos])
	{
		pos++;
		len++;
	}
	return (len);
}
