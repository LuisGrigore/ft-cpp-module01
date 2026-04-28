/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:35:09 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:59:27 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int main(void) {
  randomChump("Stackie");
  Zombie* heapZombie = newZombie("Heapie");
  heapZombie->announce();
  delete heapZombie;
  return 0;
}