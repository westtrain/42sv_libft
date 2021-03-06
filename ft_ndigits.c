/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:52:48 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:34:45 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 숫자의 자릿수를 반환하는 함수.
** 예를 들어,
** int digits = ft_ndigits(1234); 라고 하면 1234의 자릿수는 4자리임으로 4을 반환한다.
*/

#include "libft.h"

int		ft_ndigits(int n)
{
	int cnt;

	cnt = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		++cnt;
	}
	return (cnt);
}
