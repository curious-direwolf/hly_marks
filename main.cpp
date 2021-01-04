#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFileStream("marks_HLY.csv");
    string name;
    string t, e, m, s, so, tot,rank1;

    string myString, line;

    while(getline(myFileStream, line))
    {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, t, ',');
        getline(ss, e, ',');
        getline(ss, m, ',');
        getline(ss, s, ',');
        getline(ss, so, ',');
        getline(ss, tot, ',');
        getline(ss, rank1, ',');
        cout<<"\t HALF-YEARLY EXAMINATION MARKS"<<endl;
        cout<<endl;
        cout<<"\t Name   : "<<name<<endl;
        cout<<"\t Tamil  : "<<t<<endl;
        cout<<"\t English: "<<e<<endl;
        cout<<"\t Maths  : "<<m<<endl;
        cout<<"\t Science: "<<s<<endl;
        cout<<"\t Social : "<<so<<endl;
        cout<<"\t Total  : "<<tot<<endl;
        cout<<"\t Rank   : "<<rank1<<endl;
        cout<<endl<<endl<<endl<<endl;
    }
    myFileStream.close();

    return 0;
}
