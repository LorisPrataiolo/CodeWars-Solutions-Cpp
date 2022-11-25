// personal solution
#include <map>
#include <string>


std::map<char, unsigned> count(const std::string& string) {
  
  std:: map <char, unsigned > sol ;
  int count ;
  bool check_key;
  
  if(string.size() == 0)
    return {};
  
  
  for( auto& i : string){ 
    count = 0 ;
    for(auto& j : string){ 
      
      check_key = (bool)(sol.find(i) != sol.end()) ;
      
      if(check_key == false){  // let's verify that key is not present in map
        if( i == j){ 
          count++ ;
       }
      }
    }
      sol.insert({i , count});
  }
  return sol;
}


// better solution
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> r;
  for (const char& c: string) ++r[c];
  return r;
}
