#include "ETL.h"
using namespace std;
#include <iostream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>

int main( int argc , char *argc[]){
     ETL etl(argc[1] , argc[2] , argc[3]);
     

     vector<vector<string>> dataset = etl.readCSV();
     return EXIT_SUCCESS ;

     
} 
