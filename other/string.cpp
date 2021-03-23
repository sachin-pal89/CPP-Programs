// here we will get into strings and various containers of it
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1="Sachin Pal";
    string s2,s3;

    cout<<"Enter a string value"<<endl;
    getline(cin,s2);

    cout<<"\nEnter another string value"<<endl;
    getline(cin,s3);

    cout<<"\nFirst string is "<<s1<<endl;
    cout<<"\nSecond string is "<<s2<<endl;
    cout<<"\nThird string is "<<s3<<endl;

    string s12=s1.append(s2);
    string s13=s1.append(s3);
    cout<<"\ns1+s2 by append is "<<s12<<" and s1+s3 by append is "<<s13<<endl;
    
    string a1="Sachin Pal";
    string a2,a3;

    cout<<"\nEnter a string "<<endl;
    getline(cin,a2);
    cout<<"\nEnter another string "<<endl;
    getline(cin,a3);
    string a12=a1+a2;
    string a13=a1+a3;
    cout<<"\ns1+s2 by concatenation is "<<a12<<" and s1+s3 by concatenation is "<<a13<<endl;

    cout<<"\nThe length of "<<s1<<" is "<<s1.length()<<endl;
    cout<<"\nThe length of "<<s2<<" is "<<s2.length()<<endl;

    cout<<"\nFirst element of "<<s3<<" is "<<s3[0]<<endl;
    cout<<"\nThird element of "<<a2<<" is "<<a2[2]<<endl;

  
    cout<<"\nAfter replacing fifth element of "<<a3<<" by l we have string "<<endl;
      a3[4]='l';
    cout<<a3<<endl;

   
    cout<<"\nAfter cleraing string "<<a2<<" we are left with "<<endl;
    a2.clear();
    cout<<a2<<endl;
    cout<<"\nIs the above string is empty "<<a2.empty()<<endl;

    cout<<"\nComparing "<<a3<<" with "<<s3<<endl;
    if(a3.compare(s3)>0)
    {
        cout<<"\n"<<a3<<" is greater than "<<s3<<endl;
    }
    else if(a3.compare(s3)==0)
    {
        cout<<"\n"<<a3<<" is equal to "<<s3<<endl;
    }
    else
    {
          cout<<"\n"<<a3<<" is smaller than "<<s3<<endl;
    }
    
    cout<<"\nRemoving some of letter from "<<s2<<" the remaing is "<<endl;
    s2.erase(3,5);
    cout<<s2<<endl;

    cout<<"\nFinding in in "<<a1<<" its position is "<<a1.find("in")<<endl;
    
    
    cout<<"\nInserting chandev in "<<a1<<" : "<<endl;
    a1.insert(6," Chandev ");
    cout<<a1<<endl;
    
   
    cout<<"\nSubstring of "<<a1<<" consisting of father name is "<<endl;
     string sub=a1.substr(7,7);
    cout<<sub<<endl;

    string num="334";
    int x=stoi(num);
    cout<<"\nConverting string value "<<num<<" to integer : "<<x<<endl;

    int a=234;
    string num2=to_string(a);
    cout<<"\nConverting integer "<<a<<" to string is : "<<num2<<endl;

    sort(a1.begin(),a1.end());
    cout<<"\n after sorting "<<a1<<endl;

    reverse(s1.begin(),s1.end());
    cout<<"\n after reversing "<<s2<<endl;
      
    return 0;
}