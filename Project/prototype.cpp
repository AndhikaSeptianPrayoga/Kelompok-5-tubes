#include <iostream>
#include <string>

using namespace std;

int main(){
 string data_login[2][3]={{"1111","1111","Admin"},{"Dua","8888","Operator"}};
 string username, pass, level;
 char ch;
 login:
 cout<<"TUTOR-ALL PROGRAMMING"<<endl;
 cout<<"MULTILOGIN ARRAY 2 DIMENSI"<<endl;
 cout<<"\nUsername : "; cin>>username;
 cout<<"\nPassword : "; cin>>pass;
 for(int i =0; i<=1; i++){
  if(data_login[i][0]==username && data_login[i][1]==pass){
   level=data_login[i][2];
   break;
  }
 }
 cout<<"\n\n";
 if(level=="Admin")
  cout<<"Anda login sebagai Admin";
 else if(level=="Operator")
  cout<<"Anda login sebagi Operator";
 else
  cout<<"Level tidak ditemukan";
 
 return 0;
}