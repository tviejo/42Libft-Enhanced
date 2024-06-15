/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:49 by tviejo            #+#    #+#             */
/*   Updated: 2024/06/15 18:41:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_realloc(char *ptr, char *buffer, int n)
{
	void	*temp;

	temp = malloc((ft_strlen(ptr) + 1) * sizeof(char));
	if (temp == NULL)
		return (temp);
	ft_copy(temp, ptr, ft_strlen(ptr) + 1);
	free(ptr);
	ptr = malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	ft_copy(ptr, temp, ft_strlen(temp) + 1);
	ft_copy(ptr + ft_strlen(temp), buffer, ft_strlen(buffer) + 1);
	free(temp);
	ptr[n] = '\0';
	return (ptr);
}

static char	*ft_remove_buffer(char *output)
{
	int	i;

	i = 0;
	while (output[i] != '\0' && output[i] != '\n')
		i++;
	if (output[i] == '\n')
	{
		i++;
		while (output[i] != '\0')
		{
			output[i] = '\0';
			i++;
		}
	}
	return (output);
}


char	*ft_read(char *buffer, int fd)
{
	int		byte;
	int		byte_read;
	char	*output;

	byte_read = ft_strlen(buffer);
	byte = 1;
	output = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (output == NULL)
		return (output);
	ft_copy(output, buffer, BUFFER_SIZE + 1);
	while (ft_is_new_line(buffer) == 0 && byte > 0 && output != NULL)
	{
		ft_bzero(buffer, BUFFER_SIZE + 1);
		byte = read(fd, buffer, BUFFER_SIZE);
		if (byte == -1)
			return (ft_bzero(buffer, BUFFER_SIZE + 1), free(output), NULL);
		if (byte > 0)
		{
			buffer[byte] = '\0';
			byte_read += byte;
			output = ft_realloc(output, buffer, byte_read + 1);
		}
	}
	return (output);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = "\0";
	char		*output;

	if (fd < 0 || fd > 1023)
		return (NULL);
	output = ft_read(buffer, fd);
	if (output == NULL)
		return (ft_bzero(buffer, BUFFER_SIZE + 1), NULL);
	ft_remove_returned(buffer);
	output = ft_remove_buffer(output);
	if (output[0] == '\0')
		return (ft_bzero(buffer, BUFFER_SIZE + 1), free(output), NULL);
	return (output);
}
