#include <iostream>
#include <string>

bool is_palindrome(std::string text){

  int stringLength= text.length(); 
  std::string backwards;
  for(int i=stringLength-1; i>=0;i--){
    char oneChar = text.at(i);
    backwards+=oneChar;
  }
  if(backwards==text){
   return true;
  }
  else{
    return false;
  }

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}