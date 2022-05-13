#include<string>
#include<iostream>
using namespace std;

class Candidate{
    private:
        string Name;
        int ID;
        double Math;
        double Liter;
        double Eng;
        bool GreaterThanOne;
    public:
        string getName();
        int getID();
        double getMath();
        double getLiter();
        double getEng();
        bool getGreaterThanOne();
        void setName(string name);
        void setID(int id);
        void setLiter(double liter);
        void setMatch(double math);
        void setEng(double eng);
        double showAvg();
        Candidate();
        Candidate(string name, int id, double liter, double math, double eng);
        void input();
        void output();
        ~Candidate();
};