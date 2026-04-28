/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:09:12 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:41:57 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>

#include "Weapon.hpp"

class HumanA {
 private:
  std::string name;
  Weapon& weapon;

 public:
  HumanA(std::string name, Weapon& weapon);
  void setWeapon(Weapon& weapon);
  void attack();
};

#endif