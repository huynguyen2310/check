#include<iostream>
#include"candi.h"

using namespace std;

Candidate::Candidate(){
    Name="";
    ID=0;
    Math=Liter=Eng=0;
    GreaterThanOne = (Math+Liter+Eng>1)?true:false;
}

Candidate::Candidate(string name, int id, double liter, double math, double eng){
    Name = name;
    ID=id;
    Liter=liter;
    Math=math;
    Eng=eng;
    GreaterThanOne = (Math+Liter+Eng>1)?true:false;
}

void Candidate::output(){
    cout<<Name<<"--"<<ID;
    cout<<"Math:\t:"<<Math<<endl;
    cout<<"Liter:\t"<<Liter<<endl;
    cout<<"Eng:\t"<<Eng<<endl;
}

void Candidate::input(){
    cout<<"Upload your information:\n";
    cout<<"Enter your name:\t";
    cin>>Name;
    cout<<"Enter your id:\t";
    cin>>ID;
    cout<<"Enter your Math score:\t";
    cin>>Math;
    cout<<"Enter your Literature score:\t";
    cin>>Liter;
    cout<<"Enter your English score:\t";
    cin>>Eng;
    GreaterThanOne = (Math+Liter+Eng>1)?true:false;
}

double Candidate::showAvg(){
    return (Math+Liter+Eng)/3;
}

Candidate::~Candidate(){}
string Candidate::getName(){
    return Name;
}

int Candidate::getID(){
    return ID;
}

double Candidate::getMath(){
    return Math;
}

double Candidate::getLiter(){
    return Liter;
}

double Candidate::getEng(){
    return Eng;
}

bool Candidate::getGreaterThanOne(){
    return GreaterThanOne;
}

void Candidate::setName(string name){
    this->Name = name;
}

void Candidate::setID(int id){
    this->ID=id;
}

void Candidate::setLiter(double liter){
    this->Liter=liter;
}

void Candidate::setMatch(double math){
    this->Math=math;
}

void Candidate::setEng(double eng){
    this->Eng=eng;
}