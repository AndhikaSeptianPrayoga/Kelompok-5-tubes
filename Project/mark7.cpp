#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
using namespace std;
class STUDENT
{
 int STU_NIM;
 char STU_NAMA[20];
 char STU_KEL[20];
 char STU_PROD[20];
 public:
 	int Insert(STUDENT *p,int n)
	{
	 cout<<"MASUKAN NIM  : ";
	cin>>p[n].STU_NIM;
	cout<<"MASUKAN NAMA  : ";
	cin>> p[n].STU_NAMA;
	cout<<"MASUKAN KELAS : ";
	cin>> p[n].STU_KEL;
	cout<<"MASUKAN PRODI : ";
	cin>> p[n].STU_PROD;
	cout<<"\nRECORD INSERTED...\n";
	n++;
	return n;
	}
	void Search(STUDENT *p,int NIM,int n)
	{
	int i=0;
	for( i=0;i<n;i++)
	{
	   if(p[i].STU_NIM==NIM)
    		{
		cout<<"NIM\tNAMA\tKEL\tPROD\n==============================================\n";
	    	cout<<STU_NIM<<"\t"<<STU_NAMA<<"\t"<<STU_KEL<<"\t"<<STU_PROD<<"\n";
		break;
    		}
	}
	if(p[i].STU_NIM!=NIM)
	{
	cout<<"\nRECORD NOT FOUND.\n";
	}

    }

	void Display(){
	cout<<STU_NIM<<"\t"<<STU_NAMA<<"\t"<<STU_KEL<<"\t"<<STU_PROD<<"\n";
	}
	int Del(STUDENT *p,int n,int NIM)
	{
		int j=0,k,flag=0;
		for(j=0;j<n;j++)
		{
			if(p[j].STU_NIM==NIM)
            {
                flag=1;
                break;
            }
		}
        if(flag==1)
        {
            for(k=j;k<n;k++)
            {
            p[k]=p[k+1];
            }
            cout<<"\nRECORD DELETED.\n";
            return n-1;
        }
			else
			{
				cout<<"\nRecord Not Found\n";
				return n;
			}
	}
	int Update(STUDENT *p,int NIM,int n)
	{
		int i,ch1;
		for(i=0;i<n;i++)
		{
		if(p[i].STU_NIM==NIM)
    		{
    			while(1){
                cout << "==========================================\n";    
                cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
                cout << "==========================================\n";  
                cout << "      Silahkah memilih opsi dibawah       \n";  
                cout << "==========================================\n\n";
                cout << "          MENU UPDATE MAHASISWA           \n\n";
                cout << "==========================================\n\n";
    			cout<<"\n 1. UPDATE KELAS";
    			cout<<"\n 2. UPDATE PRODI";
   				cout<<"\n 3. UPDATE KEDUANYA";
   				cout<<"\n 4. KEMBALI KE MENU AWAL";
   				cout<<"\n\n MASUKAN INPUT :";
   				cin>>ch1;    				
				switch(ch1){
    				case 1: cout<<"KELAS:";
    						cin>>p[i].STU_KEL;
    						cout<<"Record Updated...\n";
    						break;
   					case 2: cout<<"PROD:\t";
   							cin>>p[i].STU_PROD;
   							cout<<"Record Updated...\n";
   							break; 					
					case 3: cout<<"KELAS:";
							cin>>p[i].STU_KEL;
							cout<<"PROD:\t";
							cin>>p[i].STU_PROD;
							cout<<"Record Updated...\n";
							break;
					case 4: return n;
					default: cout<<"!! Wrong Key !!";
							break;
					}
				}
			break;
    		}
		}
    		if(p[i].STU_NIM!=NIM)
		{
    		cout<<"\nRecord Not Found\n\n";
		}
	}
};
int main()
{
  string data_login[2][3]={{"admin","admin","Admin"},{"mahasiswa","mahasiswa","mahasiswa"}};  
  string username, password, level;
     STUDENT o[10];
 int i=0,ch,j,NIM;

   system("cls");
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "      Silahkan Login Terlebih dahulu      \n";  
   cout << "==========================================\n\n";
   cout<<"Username : "; cin>>username;
   cout<<"Password : "; cin>>password;
    for(int x =0; x<=1; x++){
  if(data_login[x][0]==username && data_login[x][1]==password){
   level=data_login[x][2];
   break;
  }
 }
 cout<<"\n\n";
 
 if(level=="Admin"){
while(1)
  {
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "      Silahkah memilih opsi dibawah       \n";  
   cout << "==========================================\n\n";
   cout << "          MENU DATA  MAHASISWA           \n\n";
   cout << "==========================================\n\n";
   cout << "         ANDA MASUK SEBAGAI ADMIN         \n\n";
   cout << "==========================================\n\n";
   cout<<"\n";
   cout<< "\n 1. MENAMBAH DATA MAHASISWA";
   cout<< "\n 2. MENCARI DATA MAHASISWA";
   cout<< "\n 3. MENAMPILKAN DATA MAHASISWA";
   cout<< "\n 4. MENGHAPUS DATA MAHASISWA";
   cout<< "\n 5. MENGUBAH DATA MAHASISWA";
   cout<< "\n 6. SELESAI";
   cout<< "\n\n  MASUKAN INPUT :";
   cin>> ch;
   switch(ch){
     case 1: i=o[0].Insert(o,i);
               break;
     case 3: cout<<"NIM\tNAMA\tKEL\tPROD\n======================================\n";
		for(j=0;j<i;j++){
		o[j].Display();
		}
		break;
     case 2:
		cout<<"Cari Berdasarkan NIM:";
		cin>> NIM;

		o[0].Search(o,NIM,i);

		break;
	 case 4:
		cout<<"Cari Berdasarkan NIM:";
		cin>> NIM;
		i=o[0].Del(o,i,NIM);
		break;
	 case 5:
	 	cout<<"Masukan NIM untuk Update:";
		cin>> NIM;
		i=o[0].Update(o,NIM,i);
		break;
	 default: cout<<"Salah Input !!";
	 		break;
     case 6: exit(0);
    }
  }
 }
 else if(level=="mahasiswa"){
    system("cls");
while(1)
  {
   cout << "==========================================\n";    
   cout << "P R O G R A M   P E N D A T A A N   M H W \n";    
   cout << "==========================================\n";  
   cout << "      Silahkah memilih opsi dibawah       \n";  
   cout << "==========================================\n\n";
   cout << "          MENU DATA  MAHASISWA           \n\n";
   cout << "==========================================\n\n";
   cout << "      ANDA MASUK SEBAGAI MAHASISWA        \n\n";
   cout << "==========================================\n\n";
   cout<<"\n";
   cout<< "\n 1. MENCARI DATA MAHASISWA";
   cout<< "\n 2. MENGHAPUS DATA MAHASISWA";
   cout<< "\n 3. MENGUBAH DATA MAHASISWA";
   cout<< "\n 4. SELESAI";
   cout<< "\n\n  MASUKAN INPUT :";
   cin>> ch;
   switch(ch){
     case 1:
		cout<<"Masukan NIM untuk Mencari:";
		cin>> NIM;

		o[0].Search(o,NIM,i);

		break;
	 case 2:
		cout<<"Masukan NIM untuk Menghapus :";
		cin>> NIM;
		i=o[0].Del(o,i,NIM);
		break;
	 case 3:
	 	cout<<"Masukan NIM untuk Mengubah :";
		cin>> NIM;
		i=o[0].Update(o,NIM,i);
		break;
	 default: cout<<"Wrong Key!!";
	 		break;
     case 4: exit(0);
    }
  }
 }
 else;
  cout<<"Password & Username invalid" << endl;
  main();

    
        return 0;
}