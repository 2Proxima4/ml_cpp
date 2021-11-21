#ifndef ETL.h
#define ETL.h

#include <iostream>
#include <fstream>
#include <eigen3/Eigen/Dense>

using namespace std;

class ETL {
   string dataset;
   string delimiter;
   bool header;
  
   public :
   ETL(string data , string separator , bool head) : dataset(data) , delimiter(separator) , header(head)
   {}

};

 #endif
 
