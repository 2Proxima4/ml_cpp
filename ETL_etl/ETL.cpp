#include "ETL.h"
#include <iostream>
#include <string>
#include <cmath>
#include <boost/algorithms/string.hpp>
#include <stdlib.h>
using namespace std;

vector<vector<string>> ETL::readCSV(){
    fstream file(dataset);
    vector<vector<string>> dataString;

    string line = ""
    while( getline(file,line)){
         vector<string> vec;
         boost::algorithm::split(vec,line,boost:is_of_any(delimiter));
         dataString.push_back(vec);

    }
    file.close();
    return dataString;




    
}
