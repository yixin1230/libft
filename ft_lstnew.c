/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 17:25:23 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/31 17:45:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

t_list *ft_lstnew(void *content)
{
    t_list  node;

    node->content = content;
    node->next = NULL;
    return (node);
}