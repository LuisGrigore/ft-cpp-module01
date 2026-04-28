/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:09:12 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:41:21 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {
 private:
  std::string name;

 public:
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif