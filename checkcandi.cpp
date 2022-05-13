#include<iostream>
#include"checkcandi.h"

using namespace std;

int CheckCandi::GetNumberofStudent(){
    return number;
}
Candidate * CheckCandi::getCandidate(){
        return candi;
}

void CheckCandi::SetNUmberofStudent(int n){
    this->number=n;
} 
CheckCandi::CheckCandi(){
    this->number=0;
}

CheckCandi::~CheckCandi(){
    delete[] candi;
}

void CheckCandi::SetAllCandi(){
    for(int i=0;i<GetNumberofStudent();i++){
        cout<<"Input information student:"<<i+1<<endl;
        candi[i].input();
    }
}

void CheckCandi::ShowCandiGreaterThanOne(){
    for(int i=0;i<GetNumberofStudent();i++){
        if(candi[i].getGreaterThanOne()){
            candi[i].output();
        }
    }
}