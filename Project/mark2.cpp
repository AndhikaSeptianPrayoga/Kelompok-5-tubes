#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
using namespace std;

void login();
void registration();


int main()
{
    int c,regc,regin,regin1,regin2;
    int input;
    int i;
  string data_login[2][3]={{"admin","admin","Admin"},{"user","user","User"}};  
  string username, password, level;
    char ch;
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "      Silahkah memilih opsi dibawah       \n";  
   cout << "==========================================\n\n";
   cout << "                     MENU                 \n\n";
   cout << " PRESS 1 FOR LOGIN                        \n";
   cout << " PRESS 2 FOR REGISTRASI                   \n";
   cout << " PRESS 3 FOR EXIT                         \n";
   cout << " Please enter your choice : ";
   cin >> c;
   switch (c)
   {
   case 1:
   system("cls");
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
 }
 else if(level=="User"){
    system("cls");
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "     ANDA LOGIN SEBAGAI MAHASISWA UPI     \n";  
   cout << "==========================================\n\n";
	cout << "\nProgram Validasi Mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tampilkan data mahasiswa" << endl;
	cout << "2. Ubah data mahasiswa" << endl;;
	cout << "3. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-3]? : ";
	cin >> input;

 }
 else;
  cout<<"Password & Username invalid" << endl;
  main();

    break;
       case 2:
          cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "    Silahkah Memasukan Data Diri Anda     \n";  
   cout << "==========================================\n\n";
   cout << "                     MENU                 \n\n";
   cout << " MASUKAN NAMA        :";
   cin  >> regin ; 
   cout << "\n MASUKAN NIM / NIP   :";
   cin  >> regin1 ; 
   cout << "\n MASUKAN PRODI       :";
   cin  >> regin2 ;
   cout << "\n OPSIH JENIS KELAMIN :";
   cin >> regc;


    break;
          case 3:
        cout <<"----------------"<< endl;  
        cout <<"|  thank you   |" << endl;
        cout <<"----------------"<< endl;  
        break; 
   default:
    system("cls");
    cout << " please select from the option given above"<<endl;
    main();
    break;
   }

    
        return 0;
}