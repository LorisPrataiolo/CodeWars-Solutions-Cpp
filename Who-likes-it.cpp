#include <string>

std::string likes(const std::vector<std::string> &names)
{  
  switch((int)names.size()){
      
      case 0 :
        return "no one likes this"; break ;
      case 1 :
        return names[0]+" likes this" ; break;
      case 2 :
        return names[0]+" and "+names[1]+" like this"; break ;
      case 3 :
        return names[0]+", "+names[1]+" and "+names[2] +" like this"; break ;
      default :
        return names[0]+", "+names[1]+" and "+ std::to_string(size-2) +" others like this"; break ;
  
  }
}
