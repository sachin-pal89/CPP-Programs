// here we will learn how we can read the content of a file as well as write to that file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string content;
    string any_else;
    string see;
    cout<<"\nDescribe yourself in few words "<<endl;
    getline(cin,content);

    ofstream include("stream_file.txt");
    include<<content;
    include.close();

    ifstream change("stream_file.txt");
    getline(change,see);
    cout<<"\nYour given content is "<<endl<<see<<endl;
    change.close();

     cout<<"\nWrite something to make change in the file "<<endl;
    getline(cin,any_else);

    ofstream include2("stream_file.txt");
    include2<<any_else;
    include2.close();

    
    ifstream change2("stream_file.txt");
    getline(change2,see);
    cout<<"\nChanged content is "<<endl<<see<<endl;
    change2.close();

    return 0;   
}