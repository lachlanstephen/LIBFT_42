/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:54:02 by darkwater         #+#    #+#             */
/*   Updated: 2024/07/29 14:18:34 by lstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isalpha_tests(void)
{
	printf("Test: ft_isalpha\n");
	printf("My function: %d\n", ft_isalpha('c'));
	printf("Inbuilt function: %d\n", isalpha('c'));
	printf("My function: %d\n", ft_isalpha('.'));
	printf("Inbuilt function: %d\n", isalpha('.'));
	printf("My function: %d\n", ft_isalpha('2'));
	printf("Inbuilt function: %d\n", isalpha('2'));
	printf("My function: %d\n", ft_isalpha('A'));
	printf("Inbuilt function: %d\n", isalpha('A'));
}

void	ft_isdigit_tests(void)
{
	printf("\nTest: ft_isdigit\n");
	printf("My function: %d\n", ft_isdigit('c'));
	printf("Inbuilt function: %d\n", isdigit('c'));
	printf("My function: %d\n", ft_isdigit('.'));
	printf("Inbuilt function: %d\n", isdigit('.'));
	printf("My function: %d\n", ft_isdigit('2'));
	printf("Inbuilt function: %d\n", isdigit('2'));
	printf("My function: %d\n", ft_isdigit('A'));
	printf("Inbuilt function: %d\n", isdigit('A'));
}

void	ft_isalnum_tests(void)
{
	printf("\nTest: ft_isalnum\n");
	printf("My function: %d\n", ft_isalnum('c'));
	printf("Inbuilt function: %d\n", isalnum('c'));
	printf("My function: %d\n", ft_isalnum('.'));
	printf("Inbuilt function: %d\n", isalnum('.'));
	printf("My function: %d\n", ft_isalnum('2'));
	printf("Inbuilt function: %d\n", isalnum('2'));
	printf("My function: %d\n", ft_isalnum('A'));
	printf("Inbuilt function: %d\n", isalnum('A'));
	printf("My function: %d\n", ft_isalnum('%'));
	printf("Inbuilt function: %d\n", isalnum('%'));
}

void	ft_isascii_tests(void)
{
	printf("\nTest: ft_isascii\n");
	printf("My function: %d\n", ft_isascii('c'));
	printf("Inbuilt function: %d\n", isascii('c'));
	printf("My function: %d\n", ft_isascii(' '));
	printf("Inbuilt function: %d\n", isascii(' '));
	printf("My function: %d\n", ft_isascii(0x80));
	printf("Inbuilt function: %d\n", isascii(0x80));
	printf("My function: %d\n", ft_isascii('\n'));
	printf("Inbuilt function: %d\n", isascii('\n'));
}

void	ft_isprint_tests(void)
{
	printf("\nTest: ft_isprint\n");
	printf("My function: %d\n", ft_isprint('c'));
	printf("Inbuilt function: %d\n", isprint('c'));
	printf("My function: %d\n", ft_isprint('\n'));
	printf("Inbuilt function: %d\n", isprint('\n'));
	printf("My function: %d\n", ft_isprint(' '));
	printf("Inbuilt function: %d\n", isprint(' '));
	printf("My function: %d\n", ft_isprint('7'));
	printf("Inbuilt function: %d\n", isprint('7'));
}

void	ft_strlen_tests(void)
{
	printf("\nTest: ft_strlen\n");
	printf("My function: %ld\n", ft_strlen("charizard"));
	printf("Inbuilt function: %ld\n", strlen("charizard"));
	printf("My function: %ld\n", ft_strlen(""));
	printf("Inbuilt function: %ld\n", strlen(""));
	printf("My function: %ld\n", ft_strlen("potato"));
	printf("Inbuilt function: %ld\n", strlen("potato"));
	printf("My function: %ld\n",
		ft_strlen("Nicole\'s favourite colour is yellow"));
	printf("Inbuilt function: %ld\n",
		strlen("Nicole\'s favourite colour is yellow"));
}

void	ft_memset_tests(void)
{
	char	str1[15] = "This is a test";
	char	str3[60] = "Nicole loves the colour yellow, she wishes she was in astra";
	char	str2[15] = "This is a test";
	char	str4[60] = "Nicole loves the colour yellow, she wishes she was in astra";

	printf("\nTest: ft_memset\n");
	printf("String 1: %s\nString 2: %s\n", str1, str3);
	ft_memset(str1, '.', 10);
	ft_memset(str3, '.', 10);
	memset(str2, '.', 10);
	memset(str4, '.', 10);
	printf("My function: %s\n", str1);
	printf("Inbuilt function: %s\n", str2);
	printf("My function: %s\n", str3);
	printf("Inbuilt function: %s\n", str4);
}

void	ft_bzero_tests(void)
{
	char	str1[15] = "This is a test";
	char	str3[60] = "Nicole loves the colour yellow, she wishes she was in astra";
	char	str2[15] = "This is a test";
	char	str4[60] = "Nicole loves the colour yellow, she wishes she was in astra";

	printf("\nTest: ft_bzero\n");
	printf("String 1: %s\nString 2: %s\n", str1, str3);
	ft_bzero(str1, 10);
	ft_bzero(str3, 10);
	bzero(str2, 10);
	bzero(str4, 10);
	printf("My function: %s\n", str1);
	printf("Inbuilt function: %s\n", str2);
	printf("My function: %s\n", str3);
	printf("Inbuilt function: %s\n", str4);
}

void	ft_memcpy_tests(void)
{
	char	str1[] = "This is a test";
	char	str2[] = "How good!";
	char	str3[] = "This is a test";
	char	str4[] = "How good!";

	printf("\nTest: ft_memcpy\n");
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	ft_memcpy(str1, str2, 5);
	memcpy(str3, str4, 5);
	printf("My function: %s\n", str1);
	printf("Inbuilt function: %s\n", str3);
}

void	ft_memmove_tests(void)
{
	char	str1[] = "This is a test";
	char	str2[] = "How good!";
	char	str3[] = "This is a test";
	char	str4[] = "How good!";

	printf("\nTest: ft_memmove\n");
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	ft_memmove(str1 + 3, str1, 10);
	memmove(str3 + 3, str3, 10);
	ft_memmove(str2 + 3, str2, 7);
	memmove(str4 + 3, str4, 7);
	printf("My function: %s\n", str1);
	printf("Inbuilt function: %s\n", str3);
	printf("My function: %s\n", str2);
	printf("Inbuilt function: %s\n", str4);
}

void	ft_strlcpy_tests(void)
{
	printf("\nTest: ft_strlcpy\n");
}

void	ft_strlcat_tests(void)
{
	printf("\nTest: ft_strlcat\n");
}

void	ft_toupper_tests(void)
{
	printf("\nTest: ft_toupper\n");
	printf("My function: %c\n", ft_toupper('c'));
	printf("Inbuilt function: %c\n", toupper('c'));
	printf("My function: %c\n", ft_toupper('L'));
	printf("Inbuilt function: %c\n", toupper('L'));
	printf("My function: %c\n", ft_toupper('%'));
	printf("Inbuilt function: %c\n", toupper('%'));
	printf("My function: %c\n", ft_toupper('p'));
	printf("Inbuilt function: %c\n", toupper('p'));
}

void	ft_tolower_tests(void)
{
	printf("\nTest: ft_tolower\n");
	printf("My function: %c\n", ft_tolower('c'));
	printf("Inbuilt function: %c\n", tolower('c'));
	printf("My function: %c\n", ft_tolower('P'));
	printf("Inbuilt function: %c\n", tolower('P'));
	printf("My function: %c\n", ft_tolower('%'));
	printf("Inbuilt function: %c\n", tolower('%'));
	printf("My function: %c\n", ft_tolower('L'));
	printf("Inbuilt function: %c\n", tolower('L'));
}

void	ft_strchr_tests(void)
{
	printf("\nTest: ft_strchr\n");
	printf("My function: %s\n", ft_strchr("abcdefghijkl", 'd'));
	printf("Inbuilt function: %s\n", strchr("abcdefghijkl", 'd'));
	printf("My function: %s\n", ft_strchr("potato123", 'o'));
	printf("Inbuilt function: %s\n", strchr("potato123", 'o'));
	printf("My function: %s\n", ft_strchr("heythere!", '!'));
	printf("Inbuilt function: %s\n", strchr("heythere!", '!'));
	printf("My function: %s Pointer Location: %p\n", ft_strchr("heythere", '\0'), ft_strchr("heythere", '\0'));
	printf("Inbuilt function: %s Pointer Location: %p\n", strchr("heythere", '\0'), strchr("heythere", '\0'));
	printf("My function: %s Pointer Location: %p\n", ft_strchr("heythere", 0), ft_strchr("heythere", 0));
	printf("Inbuilt function: %s Pointer Location: %p\n", strchr("heythere", 0), strchr("heythere", 0));
	printf("My function: %s Pointer Location: %p\n", ft_strchr("heythere", 1024), ft_strchr("heythere", 1024));
	printf("Inbuilt function: %s Pointer Location: %p\n", strchr("heythere", 1024), strchr("heythere", 1024));
}

void	ft_strrchr_tests(void)
{
	printf("\nTest: ft_strrchr\n");
	printf("My function: %s\n", ft_strrchr("abcdefghijkl", 'd'));
	printf("Inbuilt function: %s\n", strrchr("abcdefghijkl", 'd'));
	printf("My function: %s\n", ft_strrchr("potato123", 'o'));
	printf("Inbuilt function: %s\n", strrchr("potato123", 'o'));
	printf("My function: %s\n", ft_strrchr("ahoythere", 'a'));
	printf("Inbuilt function: %s\n", strrchr("ahoythere", 'a'));
	printf("My function: %s\n", ft_strrchr("heythere", '\0'));
	printf("Inbuilt function: %s\n", strrchr("heythere", '\0'));
}

void	ft_strncmp_tests(void)
{
	printf("\nTest: ft_strncmp\n");
	printf("My function: %d\n", ft_strncmp("abcdefghijkl", "abcdefgh", 5));
	printf("Inbuilt function: %d\n", strncmp("abcdefghijkl", "abcdefgh", 5));
	printf("My function: %d\n", ft_strncmp("zyxwvuts", "jioefjoi", 5));
	printf("Inbuilt function: %d\n", strncmp("zyxwvuts", "jioefjoi", 5));
	printf("My function: %d\n", ft_strncmp("abcdefghijkl", "this is a test", 5));
	printf("Inbuilt function: %d\n", strncmp("abcdefghijkl", "this is a test", 5));
	printf("My function: %d\n", ft_strncmp("", "", 5));
	printf("Inbuilt function: %d\n", strncmp("", "", 5));
}

void	ft_memchr_tests(void)
{
	printf("\nTest: ft_memchr\n");
	printf("TO BE FINISHED\n");
}

void	ft_memcmp_tests(void)
{
	printf("\nTest: ft_memcmp\n");
	printf("TO BE FINISHED\n");
}

void	ft_strnstr_tests(void)
{
	printf("\nTest: ft_strnstr\n");
	printf("TO BE FINISHED\n");
}

void	ft_atoi_tests(void)
{
	printf("\nTest: ft_atoi\n");
	printf("My function: %d\n", ft_atoi("123456"));
	printf("Inbuilt function: %d\n", atoi("123456"));
	printf("My function: %d\n", ft_atoi("    ---2345"));
	printf("Inbuilt function: %d\n", atoi("    ---2345"));
	printf("My function: %d\n", ft_atoi("63hy9234"));
	printf("Inbuilt function: %d\n", atoi("63hy9234"));
	printf("My function: %d\n", ft_atoi("2147483647"));
	printf("Inbuilt function: %d\n", atoi("2147483647"));
	printf("My function: %d\n", ft_atoi("-2147483648"));
	printf("Inbuilt function: %d\n", atoi("-2147483648"));
	printf("My function: %d\n", ft_atoi("        +23487rt923    "));
	printf("Inbuilt function: %d\n", atoi("        +23487rt923    "));
	printf("My function: %d\n", ft_atoi("   --2399"));
	printf("Inbuilt function: %d\n", atoi("   --2399"));
	printf("My function: %d\n", ft_atoi("2147483690"));
	printf("Inbuilt function: %d\n", atoi("2147483690"));
	printf("My function: %d\n", ft_atoi("5148483690"));
	printf("Inbuilt function: %d\n", atoi("5148483690"));
}

void	ft_substr_tests(void)
{
	char	str[] = "This is the main string, for which we'll be getting a substring";
	
	printf("\nTest: ft_substr\n");
	printf("String: %s\n", str);
	printf("My function: %s\n", ft_substr(str, 23, 15));
	printf("Expected: , for which we'\n");
	printf("My function: %s\n", ft_substr(str, 10, 0));
	printf("Expected: \n");
	printf("My function: %s\n", ft_substr(str, 63, 15));
	printf("Expected: (null)\n");
	printf("My function: %s\n", ft_substr("", 0, 0));
	printf("Expected: (null)\n");
}

void	ft_strjoin_tests(void)
{
	char	str1[] = "This is the first, ";
	char	str2[] = "This is the second";

	printf("\nTest: ft_strjoin\n");
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	printf("My function: %s\n", ft_strjoin(str1, str2));
	printf("Expected: %s%s\n", str1, str2);
}

void	ft_strtrim_tests(void)
{
	char	str[] = "lorem ipsum de malor cat";

	printf("\nTest: ft_strtrim\n");
	printf("String: %s\n", str);
	printf("My function: %s\n", ft_strtrim(str, "locat"));
	printf("Expected: rem ipsum de malor\n");
	printf("My function: %s\n", ft_strtrim("           ", " "));
	printf("Expected: (null)\n");
}

void	ft_split_tests(void)
{
	//char	str[15] = "This is a test";
	char	str[] = "          This,is ,  a ,  test     ";
	//char	str[15] = "     test     ";
	//char	str[15] = "test          ";
	//char	str[15] = "          test";
	char	**arr1;
	
	printf("\nTest: ft_split\n");
	printf("String: %s\n", str);
	arr1 = ft_split(str, ',');
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", arr1[i]);
	}
}

/*
void	ft_lstnew_tests(void)
{
	char	str[] = "Hey there";
	int		num[1];
	t_list	*new_node;
	t_list	*node2;

	new_node = ft_lstnew(str);
	node2 = ft_lstnew(num);

	printf("\nTest: ft_lstnew\n");
	printf("Node 1 - Expected: %s, 0x0\nAddress: %p\nContent: %s\nNext Address: %p\n", str, new_node, new_node->content, new_node->next);
	printf("Node 2 - Expected: %p, 0x0\nAddress: %p\nContent: %p\nNext Address: %p\n", num, node2, node2->content, node2->next);
}

void	ft_lstadd_front_tests(void)
{
	t_list *new_node;
	t_list *to_add;

	new_node = ft_lstnew("Hey There");
	to_add = ft_lstnew("I have been added");
	printf("\nTest: ft_lstadd_front\n");
	printf("Original Address of List: %p\nAddress of To Be Node Added: %p\n", new_node, to_add);
	ft_lstadd_front(&new_node, to_add);
	printf("New Address of List: %p\nAddress of New Front Node's Next Pointer: %p\n", new_node, new_node->next);
}

void	*(*f)(void *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != 0)
	{
		if (ptr[i] >= '0' && ptr[i] <= '9')
			ptr[i] = ((ptr[i] - '0' + 7) % 10) + '0';
		else if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ((ptr[i] - 'a' + 7) % 26) + 'a';
		else if (ptr[i] >= 'A' && ptr[i] <= 'Z')
			ptr[i] = ((ptr[i] - 'A' + 7) % 26) + 'A';
		i++;
	}
	return (ptr);
}

void	ft_lstmap_tests(void)
{
	t_list *original; 
	t_list *ret;

	original = ft_lstnew(" 1 2 3 ");
	original->next = ft_lstnew("ss");
	original->next->next = ft_lstnew("-_-");
	ret = original;
	printf("\nTest: ft_lstmap\n");
	printf("%s\n%s\n%s\n", ret->content, ret->next->content, ret->next->next->content);
}
*/

int	main(void)
{
	ft_isalpha_tests();
	ft_isdigit_tests();
	ft_isalnum_tests();
	ft_isascii_tests();
	ft_isprint_tests();
	ft_strlen_tests();
	ft_memset_tests();
	ft_bzero_tests();
	ft_memcpy_tests();
	ft_memmove_tests();
	ft_strlcpy_tests();
	ft_strlcat_tests();
	ft_toupper_tests();
	ft_tolower_tests();
	ft_strchr_tests();
	ft_strrchr_tests();
	ft_strncmp_tests();
	ft_memchr_tests();
	ft_memcmp_tests();
	ft_strnstr_tests();
	ft_atoi_tests();
	ft_substr_tests();
	ft_strjoin_tests();
	ft_strtrim_tests();
	ft_split_tests();
//	ft_lstnew_tests();
//	ft_lstadd_front_tests();
//	ft_lstmap_tests();
	return (0);
}
