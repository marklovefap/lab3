#include<iostream>
int main()
{
float x=6, y=0;
while(x<=19)
{  
x = x+1;
y = 1/x+y;
}
std::cout<< y;
}
