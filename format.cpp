#include <iostream>
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
  for (int i = 0; i < line.length(); i++){
    if (!isspace(line[i])){
      return line.substr(i);
    }
  }
  return "";
}

int countChar(std::string line, char c){
  int count = 0;
  for (int i = 0; i < line.length(); i++){
      if (c == line[i]){
	count++;
      }
  }
  return count;
}

std::string addIndents(int amount){
  std::string str = "";
  for (int i = 0; i < amount; i++){
    str += "\t";
  }
  return str;
}

// functions are easy to read and working perfectly
