/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:48:27 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 09:54:53 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_CYAN "\033[96m"
#define RESET "\033[39m"

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &cpy);
		~Brain(void);
		Brain &operator=(Brain const &other);

		std::string ideas[100];
};

#endif
