/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:00:51 by potero-d          #+#    #+#             */
/*   Updated: 2022/01/18 11:53:06 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <errno.h>

int		main(int argc, char **argv, char **envp);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_find_path(char **envp);
char	*ft_path(char **path, char *arg);
int		ft_addarg(char **new_path, char *path, char *arg);
int		ft_pipex(char **argv, char **envp, char **path);
void	first_child(int *fd1, char **argv, char **envp, char *path);
void	second_child(int fd1, char **argv, char **envp, char *path);
void	ft_not_cmd(char *str);
void	ft_fd_error(char *str);
void	ft_valid_direction(char **direction, char **argv);
void	ft_argc(int argc);

#endif
