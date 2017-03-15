/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   readData.cpp
 * Author: david
 * 
 * Created on March 4, 2017, 4:52 PM
 */

#include "readData.h"

readData::readData() {
}

readData::readData(const std::string& path, const std::string& histDataPath){
    std::ifstream file (path);  
    std::string symbol;   
    std::string line;
    while (getline(file, line)) // read whole line into line
    {
        std::istringstream iss(line); // string stream
        getline(iss, symbol, ','); // read first part up to comma, ignore the comma
 
        symbols.insert(symbol);
    }   
    
    loadData(histDataPath);
}

readData::readData(const readData& orig) {
}

readData::~readData() {
}

void readData::loadData(const std::string& histDataPath) 
{
    for(auto it = symbols.begin(); it != symbols.end(); it++)
    {
       
        std::string symbol = *it;
        std::ifstream file(histDataPath+symbol+".csv");  
        std::string line;     
        std::string entry;
        if(getline(file,line)) //skip the first row
        {
            std::vector<std::vector<double>> v{};
            int count =0;
            while (getline(file, line) && trim(line) !="") // read whole line into line
            {
         
                std::vector<double> tick{};
                count++;
                std::istringstream iss(line); // string stream
                
                getline(iss, entry, ','); // read first part up to comma, ignore the comma
               // std::cout<<"date "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
                //std::cout<<"open "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
              //  std::cout<<"high "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
               // std::cout<<"low "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
               // std::cout<<"close "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
               // std::cout<<"volume "<<entry<<std::endl;
                
                getline(iss, entry, ',');
                tick.push_back(std::stod(entry));
               // std::cout<<"adj close "<<entry<<std::endl;
                
            
                v.push_back(tick);
            }
                data[symbol] = v;   
        }
        else
        {
            std::cout<<" not found file symbol "<<symbol<<std::endl;
        }
        
  

    }
}


std::string readData:: trim(const std::string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}
