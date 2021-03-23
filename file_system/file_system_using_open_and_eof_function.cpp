// we will see another method of opening file and also see how we can detect the end of files
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream write;
    write.open("open_file.txt");         // here we use open() function to open  file
    write<<"\nI am writing something in this files\n"<<endl;
    write<<"That's nice "<<endl;
    write.close();

    ifstream read;
    read.open("open_file.txt");
    string s;
    while(read.eof() == 0 )         // this says that read the file until it get ended by using eof() function
    {
        getline(read,s);
        cout<<s<<endl;
    }
    return 0;
}