/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjiko <eunjiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:38:40 by eunjiko           #+#    #+#             */
/*   Updated: 2022/07/18 19:04:57 by eunjiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}