
#include <iostream>
#include <fstream>
using namespace std;



   int main(){

       string story;
       cout<<"enter sbout your day:"<<endl;
       getline(cin,story);

       ofstream myfile;
       myfile.open("story.txt",ios::out);

       if(myfile.is_open()){
        cout<<"file is opened successfully"<<endl;
       }
       else{cout<<"file is not open"<<endl;}

       myfile<<story<<endl;

       myfile.close();
    int count[26]={0};
    char ch;
    ifstream myfiles;
    myfiles.open("story.txt",ios::in);
    if(myfiles.is_open()){
        cout<<"file is opened successfully"<<endl;
    }  else{cout<<"unable to open the file"<<endl;}

     while(myfiles.get(ch)){
       if(ch>='a'&&ch<='z')  {
        count[ch-'a']++;
       }

}    cout<<"the occurence of the letters are:"<<endl;
       for (int i=0;i<26;i++){
       cout<<(char)('a'+i)<<" "<<count[i]<<endl;

}

   return 0;


   }
