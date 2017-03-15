/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: david
 *
 * Created on March 4, 2017, 3:43 PM
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include "readData.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::string symbolsFilePath = "/home/david/AATT/russell_3000_2011-06-27.csv";
    std::string histDataPath = "/home/david/AATT/historical/";
 
    readData read(symbolsFilePath, histDataPath);
   // for(auto it=read.symbols.begin(); it != read.symbols.end(); it++ )
    {
       // cout<<*it<<endl;
    }
    
    for(int j =0;j<read.data["IBM"].size();j++)
    {
        for(int i=0;i<6; i++)
        {
            std::cout<<read.data["IBM"][j][i]<<" ";
        }
        std::cout<<std::endl;
    }
    cout<<"number of files been read "<<read.data.size()<<endl;
    return 0;
}

