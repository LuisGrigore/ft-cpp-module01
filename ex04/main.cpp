/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:29:12 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/23 20:07:02 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

std::string replace(std::string line, std::string toReplace, std::string replacement)
{
    if (toReplace == "")
        return line;
        
    std::string newLine = "";

    for (size_t i = 0; i < line.length(); i++)
    {
        std::string currentSubstring = line.substr(i, toReplace.length());
        if (currentSubstring == toReplace)
        {
            newLine.append(replacement);
            i += toReplace.length() - 1;
        }
        else
            newLine.append(line.substr(i, 1));
    }
    return newLine;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage:   ...";
        return (1);
    }

    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream srcFile(fileName.c_str());
    if (!srcFile.is_open())
    {
        std::cerr << "Cant open file: " << fileName;
        return 1;
    }

    std::ofstream dstFile((fileName + ".replace").c_str());
    std::string currentLine;
    while (std::getline(srcFile, currentLine))
    {
        dstFile << replace(currentLine, s1, s2) << "\n";
    }
}