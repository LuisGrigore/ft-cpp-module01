/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:16:09 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:59:44 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string& stringREF = str;

  std::cout << &str << "\n";
  std::cout << stringPTR << "\n";
  std::cout << &stringREF << "\n";

  std::cout << str << "\n";
  std::cout << *stringPTR << "\n";
  std::cout << stringREF << "\n";
  return 0;
}