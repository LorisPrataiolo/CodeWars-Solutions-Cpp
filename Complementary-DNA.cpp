 
// personal solution
#include <string>

std::string DNAStrand(const std::string& dna)
{
  std :: string sol ;
  
  if (dna.size() == 0) return "ERROR";
   
  for( char c : dna) {

    switch (c){
        case 'A':
          sol += 'T'; break;
        case 'T':
          sol += 'A'; break;
        case 'C':
          sol += 'G'; break;
        case 'G':
          sol += 'C'; break;
    }
  }
  
  return sol ;
}
 
 
 // optimal solution
 #include <map>

const std::map<char, char> mapping =
{
  {'A', 'T'},
  {'T', 'A'},
  {'C', 'G'},
  {'G', 'C'},
};

std::string DNAStrand(std::string dna)
{
  for (char& c : dna)
  {
    c = mapping.at(c);
  }
  return dna;
}
