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

readData::readData(const std::string& path){
    std::ifstream file (path);  
    std::string symbol;   
    std::string line;
    while (getline(file, line)) // read whole line into line
    {
        std::istringstream iss(line); // string stream
        getline(iss, symbol, ','); // read first part up to comma, ignore the comma
 
        symbols.insert(symbol);
    }   
}

readData::readData(const readData& orig) {
}

readData::~readData() {
}

void readData::download() {
    
}

