#include <iostream>
#include "checkcandi.h"

using namespace std;

int main(){
        CheckCandi checkCan;
        cout<<"Input member of student:\t";
        int n;
        cin>>n;
        checkCan.SetNUmberofStudent(n);
        checkCan.SetAllCandi();
        cout<<"All student have sum of score greater than 1"<<endl;
        checkCan.ShowCandiGreaterThanOne();
        return 0;
}