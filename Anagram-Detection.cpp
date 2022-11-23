#include <string>
#include <algorithm>


bool isAnagram(std::string test, std::string original){
  
  // convert all chars to lower case
  transform(test.begin(), test.end(), test.begin(), ::tolower);
  transform(original.begin(), original.end(), original.begin(), ::tolower);
  
  // rearrange the strings
  std::sort(test.begin(), test.end());
  std::sort(original.begin(), original.end());
  
  
  return test == original;
}
