/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:39:08 by esterna           #+#    #+#             */
/*   Updated: 2017/03/12 16:40:07 by esterna          ###   ########.fr       */
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

	int i = 47;
	printf("\nTESTING FT_ISALNUM...\n");
	while (i <= 91)
	{
		if (isalnum(i) != ft_isalnum(i))
			printf("Error for %c\n", (char)i);
		i++;
	}
	printf("Completed.\n");
	if (isalnum(0) == ft_isalnum(0))
		printf("Test: NULL -> TRUE\n");
	else 
		printf("Test: NULL -> FALSE\n");

	i = 47;
	printf("\nTESTING FT_ISALPHA...\n");
	while (i <= 91)
	{
		if (isalpha(i) != ft_isalpha(i))
			printf("Error for %c\n", (char)i);
		i++;
	}
	printf("Completed.\n");
	if (isalpha(0) == ft_isalpha(0))
		printf("Test: NULL -> TRUE\n");
	else 
		printf("Test: NULL -> FALSE\n");


	i = 0;
	printf("\nTESTING FT_ISASCII...\n");
	while (i <= 150)
	{
		if (isascii(i) != ft_isascii(i))
			printf("Error for %c\n", (char)i);
		i++;
	}
	printf("Completed.\n");

	i = 0;
	printf("\nTESTING FT_ISPRINT...\n");
	while (i <= 127)
	{
		if (isprint(i) != ft_isprint(i))
			printf("Error for %c\n", (char)i);
		i++;
	}
	printf("Completed.\n");

	i = 0;
	printf("\nTESTING FT_ISDIGIT...\n");
	while (i <= 127)
	{
		if (isdigit(i) != ft_isdigit(i))
			printf("Error for %c\n", (char)i);
		i++;
	}
	printf("Completed.\n");

	printf("\nTESTING FT_ITOA...\n");
	printf("Testing 42 : %s\n", ft_itoa(42));
	printf("Testing -5 : %s\n", ft_itoa(-5));
	printf("Testing -2147483648 : %s\n", ft_itoa(-2147483648));
	printf("Testing 2147483647 : %s\n", ft_itoa(2147483647));
	printf("Testing 0 : %s\n", ft_itoa(0));

	char *p1 = "giraffe";
	char *p2 = "giraffe";
	char *p3 = "";

	printf("\nTESTING FT_TOUPPER...\n");
	if (memcmp(toupper(p1), ft_toupper(p2), 8) == 0)
		printf("Test: giraffe -> TRUE");
	else
		printf("Test: giraffe -> FALSE");
	if (memcmp(toupper(p3), ft_toupper(p3), 1) == 0)
		printf("Test: NULL -> TRUE");
	else
		printf("Test: NULL -> FALSE");

	char *p4 = "GIRAFFE";
	char *p5 = "GIRAFFE";

	printf("\nTESTING FT_TOLOWER...\n");
	if (memcmp(tolower(p4), ft_tolower(p5), 8) == 0)
		printf("Test: GIRAFFE -> TRUE");
	else
		printf("Test: GIRAFFE -> FALSE");
	if (memcmp(tolower(p3), ft_tolower(p3), 1) == 0)
		printf("Test: NULL -> TRUE");
	else
		printf("Test: NULL -> FALSE");


	return (0);
}
