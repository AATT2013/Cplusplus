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
    /*
    ifstream file ( "/home/david/AATT/sp500.csv" ); // declare file stream: http://www.cplusplus.com/reference/iostream/ifstream/
    string symbol;
    set<string> symbols;
    
    std::string line;
    while (getline(file, line)) // read whole line into line
    {
        istringstream iss(line); // string stream
        getline(iss, symbol, ','); // read first part up to comma, ignore the comma
//        cout<<symbol<<endl;
        symbols.insert(symbol);
    }
     
    for(auto it=symbols.begin(); it != symbols.end(); it++ )
    {
        cout<<*it<<endl;
    }
    cout<<"total symbol number: "<<symbols.size()<<endl;
    
    */
    std::string path("/home/david/AATT/sp500.csv");
    readData read(path);
    for(auto it=read.symbols.begin(); it != read.symbols.end(); it++ )
    {
        cout<<*it<<endl;
    }
    
    return 0;
}

