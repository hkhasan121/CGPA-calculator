#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num_of_sub;
    float totalGradePoint  = 0;
    float totalCredits = 0;

    cout<<"Enter the number of subjects: ";
    cin>>num_of_sub;
    cout<<endl;

    for(int i = 1; i<=num_of_sub; i++)
    {
        float marks, creditHour;
        cout<<"Enter the marks of subject "<<i<<" : ";
        cin>>marks;
        cout<<"Enter the credit hours of subject "<<i<<" : ";
        cin>>creditHour;
        cout<<endl;
        float gradePoint =  0;
        if(100>= marks && marks >=80)
        {
            gradePoint = 4.00;
        }
        else if(79>= marks && marks >= 75)
        {
            gradePoint  = 3.75;
        }
        else if(74>= marks && marks >= 70)
        {
            gradePoint  = 3.50;
        }
        else if(69>= marks && marks >= 65)
        {
            gradePoint  = 3.25;
        }
        else if(64>= marks && marks >= 60)
        {
            gradePoint  = 3.00;
        }
        else if(59>= marks && marks >= 55)
        {
            gradePoint  = 2.75;
        }
        else if(54>= marks && marks >= 50)
        {
            gradePoint  = 2.50;
        }
        else if(49>= marks && marks >= 45)
        {
            gradePoint  = 2.25;
        }
        else if(44>= marks && marks >= 40)
        {
            gradePoint  = 2.00;
        }
        else
        {
            gradePoint = 0.00;
        }

        totalGradePoint = totalGradePoint + (gradePoint * creditHour);

        totalCredits  = totalCredits + creditHour;

    }

    float CGPA = totalGradePoint / totalCredits;
    cout<<"CGPA  : "<<CGPA<<endl;

}
