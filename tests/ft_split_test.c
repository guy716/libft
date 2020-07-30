/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 15:37:26 by gil               #+#    #+#             */
/*   Updated: 2020/07/30 15:48:26 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//in progress

int main(int argc, char *argv[])
{
	char **tokens = ft_split(argv[1], *(argv[2]+1));
	printf("The result when we split [%s] by [%c] is:\n", argv[1], *(argv[2]+1));
	while (token[] != NULL)
	{
		printf("%s\n", *token);
	}
	return 0;
}
