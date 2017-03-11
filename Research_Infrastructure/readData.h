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


class readData {
public:
    std::set<std::string> symbols;
    readData();
    readData(const std::string& path);
    readData(const readData& orig);
    void download();
    virtual ~readData();
private:

};

#endif /* READDATA_H */

