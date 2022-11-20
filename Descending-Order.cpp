// personal solution
#include <cinttypes>
#include <vector>

uint64_t descendingOrder(uint64_t a)
{
  // case base 
  if ( a < 10 )
    return a ;
  
  // we have to partitoning a's digits and store them in to vector
  // than sorting them DESC
  // return a number
  
  std:: vector <uint64_t> aux ;
  int i = 0 ;
  while ( a > 0 ){
    aux.push_back( a % 10);
    a = a / 10 ;
    i++;
  }
  
  

  std::sort(aux.begin(), aux.end(),std:: greater <>());

  
  uint64_t  result = 0;
  for (auto d : aux)  
  {
      result = result * 10 + d;
  }

  return result;
}


//optimal solution
#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}
