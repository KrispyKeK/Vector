//
//  Controller.cpp
//  Vector
//
//  Created by Dela Cruz, Juan on 1/29/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

Controller :: Controller(){
    
}
void Controller :: start(){
    setupVector();
    cout << printOutVector();
}
void Controller :: setupVector(){
    for (int index = 1; index < 6;index++){
        intExample.push_back(index);
    }
    for (int index = 6; index < 11; index++){
        stringExample.push_back(std::to_string(index));
    }
    stringExample.push_back("Life");
}
string Controller :: printOutVector(){
    string output = "";
    for (int index = 0; index != intExample.size(); index++){
        output += std::to_string(intExample[index]) + " ";
    }
    for (int index = 0; index != stringExample.size(); index++){
        output += stringExample[index] + " ";
    }
    return output;
}
