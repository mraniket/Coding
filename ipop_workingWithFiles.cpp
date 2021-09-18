#include<iostream>
#include<fstream>

// The useful ckasse for working with files in c++
// 1. fstreambase
// 2. ifstream  -- > Derived from fstreambase
// 3. ofstyream  --> Derived from fstreambase

/*

 in order to work with files in cpp , 
you will have to open it
There are two ways to open the files
1.. Using the constructor
2.. Using the member function open() of the class

 */

using namespace std;
 
int main(){
    string st = "Aniket Sheth";
    string st2;
    //Opening files using constructor  and writing it  
    ofstream put("sample1.txt"); //write operation
    put<<st;


    //opening and reading
    ifstream get("sample2.txt"); //read operation
    //in>>st2;  //This will get only first word
    getline(get, st2); //to get all content
    cout<<st2;
    return 0;
}