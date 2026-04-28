/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:34:23 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:41:59 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }
void HumanB::attack() {
  std::cout << this->name << " attacks with their"
            << (this->weapon ? this->weapon->getType() : " BARE HANDS") << "\n";
}