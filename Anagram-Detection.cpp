#include <string>


bool isAnagram(std::string test, std::string original){
  
  if( test.size() != original.size() ) // case base
    return false ;
  
  // I convert all characters to lowercase
  transform(test.begin(), test.end(), test.begin(), ::tolower);
  transform(original.begin(), original.end(), original.begin(), ::tolower);
  
  // rearrange the strings
  std::sort(test.begin(), test.end());
  std::sort(original.begin(), original.end());
  
  
  return test == original;
}
