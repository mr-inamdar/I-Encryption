#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<vector>
#include<cctype>
#include "values.cpp"
#include "print_roll.cpp"

using namespace std;

void rev(string&);
void revec(vector<string> &vec);
string toLowercase(string);
string make_code(string str_input);
string do_decode(string input_code); 
string slacer(string str,char command);
void setConsoleColor(int foreground, int background) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (background << 4) | foreground);
}
void resetConsoleColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0x07);
}
void print_tittel(){
    int foregroundColor = 0xE; // Yellow
    int backgroundColor = 0x1; // Blue
    setConsoleColor(foregroundColor,backgroundColor);
    cout<<"\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    setConsoleColor(0xA,0x0);
    cout<<"  _____       _________   __    _________  ____  ___________  ___  __    __ "<<endl;
    cout<<" |_____|     |  ___|   \\  | |  / ___|  _ \\|  _ \\|__  __|_  _|/ _ \\|  \\  | | "<<endl;
    cout<<"   | |   __  | |__ | |\\ \\ | | | |   | |_\\ | |_\\ |  ||    || | | | | | \\ | | "<<endl;
    cout<<"   | |  |__| |  __|| | \\ \\| | | |   |  __/|  __/   ||    || | | | | |\\ \\| | "<<endl;
    cout<<"  _|_|_      | |___| |  \\   | | |___| | \\ | |      ||   _||_| |_| | | \\   | "<<endl;
    cout<<" |_____|     |_____|_|   \\__|  \\____|_|\\_\\|_|      ||  |____|\\___/|_|  \\__| "<<endl<<endl;
    // cout<<"\t             Wellcome in my first AAP                    \n\n";
    setConsoleColor(foregroundColor,backgroundColor);
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    resetConsoleColor();
}
int main(){
    system("mode con: lines=37 cols=78");
    string input,modified_str;
    int choice;
    bool run = true;

    while(run){

        print_tittel();

        cout<<"----------------------------------| Home |------------------------------------\n\n";
        setConsoleColor(0xD,0x0);
        cout<<" Would you like to do ? \n\t 1. Encrypt\n\t 2. Decrypt \n\t 3. Learn technique \n\t 4. Abaut \n\t 5. Exit\n\t Enter your choice : ";
        resetConsoleColor();
        cin>>choice;
        cin.ignore();//ignore  the new line charectar
        if(choice == 1){
            system("cls");
            print_tittel();
            cout<<"--------------------------------| Encrypt |-----------------------------------\n\n";
            cout<<"\n\n"<<" Enter a string they you have : ";
            // cin>>input;
            std::getline(std::cin,input);
            modified_str = toLowercase(input);
            cout<<endl<<endl<<" Your Codes is : ";
            cout<<slacer(modified_str,'c');
            setConsoleColor(0x4,0x0);
            cout<<"\n\n Enter 1 for do again and 0 for exit : ";
            resetConsoleColor();
            cin>>run;
            if(run){
                system("cls");
            } else {
                run = false;
            }
            
        } else if(choice == 2){
            system("cls");
            print_tittel();
            cout<<"--------------------------------| Decrypt |-----------------------------------\n\n";
            cout<<"\n\n"<<" Enter an codes they you have : ";
            std::getline(std::cin,input);
            modified_str = toLowercase(input);
            // cin>>input;
            cout<<endl<<endl<<" Your decoded string is : ";
            cout<<slacer(modified_str,'d');
            setConsoleColor(0x4,0x0);
            cout<<"\n\n Enter 1 for do again and 0 for exit : ";
            resetConsoleColor();
            cin>>run;
            if(run){
                system("cls");
            } else {
                run = false;
            }
        } else if(choice == 3){
            system("cls");
            print_tittel();
            cout<<"-------------------------------| Technique |----------------------------------\n\n";
            print();
            setConsoleColor(0x4,0x0);
            cout<<"\n\n Enter 1 for do again and 0 for exit : ";
            resetConsoleColor();
            cin>>run;
            if(run){
                system("cls");
            } else {
                run = false;
            }
        }else if(choice == 4){
            system("cls");
            print_tittel();
            cout<<"----------------------------------| Abaut |-----------------------------------\n\n";
            print_abaut();
            setConsoleColor(0x4,0x0);
            cout<<"\n\n Enter 1 for do again and 0 for exit : ";
            resetConsoleColor();
            cin>>run;
            if(run){
                system("cls");
            } else {
                run = false;
            }
        } else if(choice == 5){
            exit(0);
        } else {
            cout<<" I THINK YOUR DON'T ENTRESTED TO DO EITHER SO THANKS AND BY..";
            Sleep(3000);
            break;
        }
    }
    return 0;
}
void rev(string &temp_str){
    int s = 0;
    int e = temp_str.length()-1;
    while(s<e){
        swap(temp_str[s],temp_str[e]);
        e--;
        s++;
    }

}
string make_code(string str_input){
    string output = "";
    for(int i = 0;i<str_input.size();++i){
        output += code(str_input[i]);
    }
    return output;
}
string do_decode(string input_code){
    string output = "";
    for(int i = 0;i<input_code.size();++i){
        output += decode(input_code[i]);
    }
    return output;
}
string slacer(string str,char command){
    vector<string> vec;
    string temp_str = "",ans_str = "";

    if(command == 'c'){
        for(int i =0;i<str.size();++i){
        
            if(str[i] == ' '){
                rev(temp_str);
                vec.push_back(temp_str);
                temp_str = "";
                continue;
            }
            temp_str += str[i];
        }
        rev(temp_str);
        vec.push_back(temp_str);
        revec(vec);
        
        for(string x : vec){
            ans_str = ans_str + make_code(x) + "0";
        }
        return ans_str;
    } else if(command == 'd'){
        for(int i =0;i<str.size();++i){
        
            if(str[i] == '0'){
                rev(temp_str);
                vec.push_back(temp_str);
                temp_str = "";
                continue;
            }
            temp_str += str[i];
        }
        rev(temp_str);
        vec.push_back(temp_str);
        revec(vec);

        for(string x : vec){
            ans_str = ans_str + do_decode(x) + " ";
        }
        return ans_str;
    }
}
string toLowercase(string input){
    string output;
    for(char c : input){
        output += tolower(c);
    }
    return output;
}
void revec(vector<string> &vec){
    int s = 0;
    int e = vec.size()-1;
    while(s<e){
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
}

