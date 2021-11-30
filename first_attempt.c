
#include <stdlib.h>
#include <stdio.h>

int	letter_is_null_char(char letter)
{
	int	is_null;

	if (letter == '\0')
	{
		is_null = 1;
	}
	else
	{
		is_null = 0;
	}
	return (is_null);
}

int	check_string_is_empty(char *str)
{
	char	*read_ptr;
	char	first_letter;
	int		is_empty;

	read_ptr = (char *)&str[0];
	first_letter = *read_ptr;
	if (letter_is_null_char(first_letter))
	{
		is_empty = 1;
	}
	else
	{
		is_empty = 0;
	}
	return (is_empty);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;
	char	*read_ptr;
	size_t	i;
	char	letter;

	length = 0;
	if (str == NULL || check_string_is_empty((char *)str))
	{
		return (0);
	}
	i = -1;
	while (1)
	{
		i++;		
		read_ptr = (char *)&str[i];
		letter = *read_ptr;
		if (letter_is_null_char(letter))
		{
			break ;
		}
		else
		{
			length++;
			continue ;
		}
	}
	return (length);
}
