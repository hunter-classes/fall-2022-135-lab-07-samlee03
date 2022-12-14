// THIS COMMENT WAS ADDED FROM THE DEV BRANCH


// comments for lab pull request
#include <iostream>
#include "format.h"
int main()
{
  std::cout << "Ran main.cpp" << std::endl;
  std::string line;

  int numOfIndents = 0;
  //std::cout << numOfIndents << " " << removeLeadingSpaces(line) << "\n";
  while (getline(std::cin, line)){
    if (removeLeadingSpaces(line)[0] == '}'){
      numOfIndents--;
    }
    std::cout << addIndents(numOfIndents) << removeLeadingSpaces(line) << "\n";
    if (countChar(line, '{')){
      numOfIndents += countChar(line, '{');
    }
    if (countChar(line, '}')){
      numOfIndents -= countChar(line, '}');
    }    
    //numOfIndents += countChar(line, '{');
    //std::cout << numOfIndents << " " << removeLeadingSpaces(line) << "\n";
  }
  return 0;
}
