#include<iostream>
#include<windows.h>
using namespace std;
void setConsoleColor1(int foreground, int background) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (background << 4) | foreground);
}
void resetConsoleColor1() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0x07);
}
void print(){
    setConsoleColor1(0xE,0x0);
    cout<<"\tgiven alphabet/digit's respective replacement values i.e. 7 have z."<<endl;
    cout<<"\tfor decrept first reverse the all indivitual word."<<endl;
    cout<<"\tin this tabel space charector is sc"<<endl<<endl;
    cout<<"\tEncreption roll tabel :-"<<endl;
    resetConsoleColor1();
    cout<<"\t --------------------------------------------------------------- "<<endl;
    cout<<"\t| a : 1 | b : p | c : k | d : b | e : 7 | f : 2 | g : 3 | h : l |"<<endl;
    cout<<"\t --------------------------------------------------------------- "<<endl;
    cout<<"\t| i : j | j : ^ | k : | | l : 4 | m : > | n : < | o : d | p : 5 |"<<endl;
    cout<<"\t --------------------------------------------------------------- "<<endl;
    cout<<"\t| q : 6 | r : x | s : 8 | t : ~ | u : $ | v : % | w : m | x : * |"<<endl;
    cout<<"\t --------------------------------------------------------------- "<<endl;
    cout<<"\t| y : 9 | z : ! | 0 : o | 1 : f | 3 : g | 4 : c | 6 : w | 7 : z |"<<endl;
    cout<<"\t --------------------------------------------------------------- "<<endl;
    cout<<"\t| 8 : n | 9 : r | sc: 0 |  other : self |       |       |       |"<<endl;
    cout<<"\t --------------------------------------------------------------- "<<endl;
    
    

}
void print_abaut(){
    
    cout<<" Program By "; 
    setConsoleColor1(0xB,0x0);
    cout<<"Zeeshan Inamdar";
    resetConsoleColor1();
    cout<<endl<<endl<<" E-mail    : ";
    setConsoleColor1(0x8,0x0);
    cout<<"zinamdar811@gmail.com";
    resetConsoleColor1();
    cout<<endl<<" Instagram : ";
    setConsoleColor1(0x8,0x0);
    cout<<"zavion_inamdar";
    resetConsoleColor1();
    cout<<endl;
}