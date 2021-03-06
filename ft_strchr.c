/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:22:55 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:38:29 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열에서 특정 문자를 찾는 함수.
** strchr(문자열, 찾을 문자)함수를 통해서 arguments로 받은 문자열 속에서 특정문자를 찾아서 문자열의
** 주소를 반환한다.
** 예를 들어,
** char *str = strchr("abcd", 'b'); 와 같이 사용하면 함수를 통해 'b'로 시작하는 문자열 'bcd'의 시작
** 주소를 반환한다. 대소문자를 구분하기 때문에 'B'를 넣으면 찾지 않고 넘어간다.
** 만약 찾으려고 하는 문자가 '\0'이라면 문자열의 끝을 반환한다. (문자열의 마지막은 '\0'이다)
** strchr함수는 string.h 해더파일에 선언되어 있다.
**
** The strchr() function locates the first occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to be part of the string; therefore if c is `\0', the func-
** tions locate the terminating `\0'.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (NULL);
}
