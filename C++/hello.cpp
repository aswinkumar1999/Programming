#include<iostream>
#include<curses.h>
#include<string.h>

int main(){
std::string name;
std::cout<<"\nEnter your name :";
std::getline(std::cin,name);
std::cout<<"\nHello "<<name<<"\n";
getch();
return 0;
}

