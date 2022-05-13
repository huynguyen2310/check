#include "candi.h"

class CheckCandi{
    private:
        int number; //number of student
        Candidate *candi = new Candidate [number];
    public:
        int GetNumberofStudent();
        Candidate * getCandidate();
        void SetNUmberofStudent(int n);
        CheckCandi();
        ~CheckCandi();
        void SetAllCandi();
        void ShowCandiGreaterThanOne();
};