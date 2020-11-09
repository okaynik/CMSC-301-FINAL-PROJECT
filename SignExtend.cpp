#include <iostream>
#include "SignExtend.h"

SignExtend::SignExtend(string in){input = in;}

//sign extends input by 16b according to most significant byte
void SignExtend::extend(){
  string first = input.substr(0,1);
  if (first == "1"){
    output = "1111111111111111" + input;
  }else{
    output = "0000000000000000" + input;
  }
}

//get method returns the extended input
string SignExtend::get(){return output;}

//toString method prints out input and output of sign extend
void SignExtend::toString(){
  cout << "Input to SignExtend is: " << input << endl;
  cout << "Output of SignExtend is: " << output << endl;
}
