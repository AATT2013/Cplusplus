/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   readData.h
 * Author: david
 *
 * Created on March 4, 2017, 4:52 PM
 */

#ifndef READDATA_H
#define READDATA_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <map>

//using daily_tick = double[5];

class readData {
public:
    
    std::set<std::string> symbols;
    std::map<std::string, std::vector<std::vector<double>>>data;
    
    readData();
    readData(const std::string& path, const std::string& histDataPath);
    readData(const readData& orig);
    void loadData(const std::string& histDataPath);
    std::string trim(const std::string& str);
    virtual ~readData();
    
private:

};

#endif /* READDATA_H */

