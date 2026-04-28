/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:34:23 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:41:54 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}
void HumanA::setWeapon(Weapon& weapon) { this->weapon = weapon; }
void HumanA::attack() {
  std::cout << this->name << " attacks with their" << this->weapon.getType()
            << "\n";
}