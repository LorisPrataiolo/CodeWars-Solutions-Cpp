#include <string>
#include <set>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  
  std::set<char>volwes_set = {'a','e','i','o','u'};

  // if the letter belonging to the string is in the set of vowels, 
  // it increases num_vowels 
  for(auto& i : inputStr)
    for (auto& j : volwes_set)
      if(i == j)
         num_vowels++ ;
      
  
  
  // solution
  return num_vowels;
}
