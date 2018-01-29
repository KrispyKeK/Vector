//
//  Controller.hpp
//  Vector
//
//  Created by Dela Cruz, Juan on 1/29/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Controller{
public:
    Controller();
    void start();
    vector<int> intExample;
    vector<string> stringExample;
private:
    void setupVector();
    string printOutVector();
};


#endif /* Controller_hpp */
