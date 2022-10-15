#include <iostream>
#include <fstream>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
using namespace std;
void r(){
  printf("\033[0;31m");
}
void y(){
  printf("\033[0;33m");
}
void w(){
  printf("\033[0;37m");
}
void g(){
  printf("\033[0;32m");
}
void banner(){
  cout << "Powered by ";
  g();
  cout << "xm4nxp";
  w();
  cout << "\ntelegram : @xm4nxp" << endl;
}
void baca(){
   while(true){
     string x;
     y();
     cout << "Dir : ";
     w();
     int file;
     getline(cin,x);
     DIR *baca;
     struct dirent *all;
     baca = opendir(x.c_str());
     if(baca == NULL){
       r();
       cout << x;
       w();
       cout << " : Not Found" << endl;
     }else{
       file ++;
       while((all=readdir(baca))){
         printf("\tFile %3d : %s\n",file,all->d_name);
       }
     }
   }
}
int main(){
  banner();
  cout << endl;
  baca();
  cout << endl;
  return 0;
}
