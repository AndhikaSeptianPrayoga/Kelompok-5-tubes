#include <iostream>
using namespace std;
int Admin(){
  	int input;
	cout << "\nProgram Validasi Mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Ubah data mahasiswa" << endl;
	cout << "4. Hapus data mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	return input;
}
int User(){
  	int input;
	cout << "\nProgram Validasi Mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tampilkan data mahasiswa" << endl;
	cout << "2. Ubah data mahasiswa" << endl;;
	cout << "3. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	return input;
}

int main()
{
  int i;
  string data_login[2][3]={{"admin","admin","Admin"},{"user","user","User"}};  
  string username, password, level;
    char ch;
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "      Silahkan Login Terlebih dahulu      \n";  
   cout << "==========================================\n\n";
   cout<<"Username : "; cin>>username;
   cout<<"Password : "; cin>>password;
    for(int i =0; i<=1; i++){
  if(data_login[i][0]==username && data_login[i][1]==password){
   level=data_login[i][2];
   break;
  }
 }
 cout<<"\n\n";
 
 if(level=="Admin"){
  	system("cls");
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "     ANDA LOGIN SEBAGAI ADMIN PROGRAM     \n";  
   cout << "==========================================\n\n";
  Admin();
 }
 else if(level=="User"){
    system("cls");
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "     ANDA LOGIN SEBAGAI MAHASISWA UPI     \n";  
   cout << "==========================================\n\n";
  User();

 }
 else;
  cout<<"Password & Username invalid";
  return 0;
 
    

    return 0;
}
