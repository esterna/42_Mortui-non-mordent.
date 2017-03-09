/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:39:08 by esterna           #+#    #+#             */
/*   Updated: 2017/03/08 22:43:17 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *n1 = "         +24     6";
	char *n2 = "   		-24+6";
	char *n3 = "   ";
	char *n4 = "-9223372036854775808";
	char *n5 = 	"9223372036854775807";
	char *n6 = "18446744073709551615";
	char *n7 = "";
	char *n8 = "2147483647";
	char *n9 = "-2147483648";

	printf("\nTESTING FT_ATOI...\n");
	if (atoi(n1) == ft_atoi(n1))
		printf("Test:         +24     6-> TRUE\n");
	else 
		printf("Test:         +24     6-> FALSE\n");
	if (atoi(n2) == ft_atoi(n2))
		printf("Test:   		-24+6-> TRUE\n");
	else 
		printf("Test:   		-24+6-> FALSE\n");
	if (atoi(n3) == ft_atoi(n3))
		printf("Test:    -> TRUE\n");
	else 
		printf("Test:    -> FALSE\n");
	if (atoi(n4) == ft_atoi(n4))
		printf("Test: –9223372036854775808 -> TRUE\n");
	else 
		printf("Test: -9223372036854775808 -> FALSE\n");
	if (atoi(n5) == ft_atoi(n5))
		printf("Test: 9223372036854775807 -> TRUE\n");
	else 
		printf("Test: 9223372036854775807 -> FALSE\n");
	if (atoi(n6) == ft_atoi(n6))
		printf("Test: 18446744073709551615 -> TRUE\n");
	else 
		printf("Test: 18446744073709551615 -> FALSE\n");
	if (atoi(n7) == ft_atoi(n7))
		printf("Test: NULL -> TRUE\n");
	else 
		printf("Test: NULL -> FALSE\n");
	if (atoi(n8) == ft_atoi(n8))
		printf("Test: 2147483647 -> TRUE\n");
	else 
		printf("Test: 2147483647 -> FALSE\n");
	if (atoi(n9) == ft_atoi(n9))
		printf("Test: -2147483648 -> TRUE\n");
	else 
		printf("Test: -2147483648 -> FALSE\n");

	char b1[] = "giraffe";
	char b2[] = "giraffe";

	printf("\nTESTING FT_BZERO...\n");
	bzero(b1, 0);
	ft_bzero(b2, 0);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 0 -> TRUE\n");
	else 
		printf("Test: giraffe 0 -> FALSE\n");
	bzero(b1, 1);
	ft_bzero(b2, 1);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 1 -> TRUE\n");
	else 
		printf("Test: giraffe 1 -> FALSE\n");
	bzero(b1, 8);
	ft_bzero(b2, 8);
	if (memcmp(b1, b2, 8) == 0)
		printf("Test: giraffe 8 -> TRUE\n");
	else 
		printf("Test: giraffe 8 -> FALSE\n");



	printf("\nTESTING FT_ISALPHA...\n");
	if (isalpha(65) == ft_isalpha(65))
		printf("Test: A -> TRUE\n");
	else 
		printf("Test: A -> FALSE\n");
	if (isalpha(97) == ft_isalpha(97))
		printf("Test: a -> TRUE\n");
	else 
		printf("Test: a -> FALSE\n");
	if (isalpha(50) == ft_isalpha(50))
		printf("Test: 2 -> TRUE\n");
	else 
		printf("Test: 2 -> FALSE\n");
	if (isalpha(0) == ft_isalpha(0))
		printf("Test: NULL -> TRUE\n");
	else 
		printf("Test: NULL -> FALSE\n");

	printf("\nTESTING FT_ITOA...\n");
	printf("Testing 42 : %s\n", ft_itoa(42));
	printf("Testing -5 : %s\n", ft_itoa(-5));
	printf("Testing -2147483648 : %s\n", ft_itoa(-2147483648));
	printf("Testing 2147483647 : %s\n", ft_itoa(2147483647));
	printf("Testing 0 : %s\n", ft_itoa(0));


	return (0);
}
