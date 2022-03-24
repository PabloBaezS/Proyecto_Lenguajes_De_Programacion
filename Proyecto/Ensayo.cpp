//
// Created by pablo on 24/03/2022.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    std::string line_;
    ifstream file_("imprime15.txt");
    if(file_.is_open()){
         while(getline(file_,line_)){
             std::cout<<line_<<'\n';
         }
        file_.close();
    }else{
        std::cout<<"File is not open"<<'\n';
    }
}