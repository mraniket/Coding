#include<iostream>
using namespace std;


int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}

//calculate valume of cube
int volume(int h){
    return(  h* h* h);
}
//calculet valume of cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}
int main(){
    cout<<"The sum of 3 & 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3 & 6 & 7 is "<<add(3,6,7)<<endl;
    cout<<"The volume of cuboid "<<volume(3)<<endl;
    cout<<"The volumeof cylinder :"<<volume(3, 6 )<<endl;

    return 0;
}