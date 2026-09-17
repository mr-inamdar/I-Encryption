#include<iostream>
using namespace std;
char code(char x){

    char i = x;
    switch( i ){
        case('a'):
            i = '1';
            break;
        case('b'):
            i = 'p';
            break;
        case('c'):
            i = 'k';
            break;
        case('d'):
            i = 'b';
            break;
        case('e'):
            i = '7';
            break;
        case('f'):
            i = '2';
            break;
        case('g'):
            i = '3';
        case('h'):
            i = 'l';
            break;
        case('i'):
            i = 'j';
            break;
        case('j'):
            i = '^';
            break;
        case('k'):
            i = '|';
            break;
        case('l'):
            i = '4';
            break;
        case('m'):
            i = '>';
            break;
        case('n'):
            i = '<';
            break;
        case('o'):
            i = 'd';
            break;
        case('p'):
            i = '5';
            break;
        case('q'):
            i = '6';
            break;
        case('r'):
            i = 'x';
            break;
        case('s'):
            i = '8';
            break;
        case('t'):
            i = '~';
            break;
        case('u'):
            i = '$';
            break;
        case('v'):
            i = '%';
            break;
        case('w'):
            i = 'm';
            break;
        case('x'):
            i = '*';
            break;
        case('y'):
            i = '9';
            break;
        case('z'):
            i = '!';
            break;
        case('1'):
            i = 'f';
            break;
        case('2'):
            i = 'v';
            break;
        case('3'):
            i = 'g';
            break;
        case('4'):
            i = 'c';
            break;
        case('5'):
            i = 'w';
            break;
        case('6'):
            i = 's';
            break;
        case('7'):
            i = 'z';
            break;
        case('8'):
            i = 'n';
            break;
        case('9'):
            i = 'r';
            break;
        case('0'):
            i = 'o';
            break;
        case(' '):
            i = '0';
            break;
        default:
            i = i;
            break;
    }
    return i;
}
char decode(char x){
    // vector<char> lst1;
    // for i in x:

    char i = x;
    switch( i ){
        case('1'):
            i = 'a';
            break;
        case('p'):
            i = 'b';
            break;
        case('k'):
            i = 'c';
            break;
        case('b'):
            i = 'd';
            break;
        case('7'):
            i = 'e';
            break;
        case('2'):
            i = 'f';
            break;
        case('3'):
            i = 'g';
        case('-'):
            i = 'h';
            break;
        case('j'):
            i = 'i';
            break;
        case('^'):
            i = 'j';
            break;
        case('|'):
            i = 'k';
            break;
        case('4'):
            i = 'l';
            break;
        case('>'):
            i = 'm';
            break;
        case('<'):
            i = 'n';
            break;
        case('d'):
            i = 'o';
            break;
        case('5'):
            i = 'p';
            break;
        case('6'):
            i = 'q';
            break;
        case('x'):
            i = 'r';
            break;
        case('8'):
            i = 's';
        case('~'):
            i = 't';
            break;
        case('$'):
            i = 'u';
            break;
        case('%'):
            i = 'v';
            break;
        case('m'):
            i = 'w';
            break;
        case('*'):
            i = 'x';
            break;
        case('9'):
            i = 'y';
            break;
        case('!'):
            i = 'z';
            break;
        case('f'):
            i = '1';
            break;
        case('v'):
            i = '2';
            break;
        case('g'):
            i = '3';
            break;
        case('c'):
            i = '4';
            break;
        case('w'):
            i = '5';
            break;
        case('s'):
            i = '6';
            break;
        case('z'):
            i = '7';
            break;
        case('n'):
            i = '8';
            break;
        case('r'):
            i = '9';
            break;
        case('o'):
            i = '0';
            break;
        case('0'):
            i = ' ';
            break;
        default:
            i = i;
            break;
    }
    return i;
}
    //     lst1.extend(i)
    // n = lst1[0]
    // for cx in lst1:
    //     if cx == lst1[0]:
    //         continue
    //     n +=cx
    // return n[::-1]

            

            
