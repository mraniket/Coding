#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
     CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display()
    {
        
    }
};

class CWHVideo : public CWH
{

    float videolenght;

public:
    CWHVideo(string s, float r, float vl): CWH(s, r){
        videolenght = vl;

    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings : "<<rating<<"/5 stars"<<endl;
        cout<<"Length of video : "<<videolenght<<" min"<<endl;
    }

};


class CWHText : public CWH
{

    int words;

public:
    CWHText(string s, float r, int wc): CWH(s, r){
        words = wc;

    }

    void display(){
        cout<<"This is an amazing documentrry with title "<<title<<endl;
        cout<<"Ratings "<<rating<<"out of five stars"<<endl;
        cout<<"Number of words in this text tutorial :"<<words<<endl;
    }
};


int main()
{
    string title;
    float rating , vlen;
    int words;
    // for CWH video
    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title , rating, vlen);
    // djvideo.display(); //here we displayed directly a function og that class 
                            // We have to display it with the pointers

    // For CWH Text
    title = "django tutorial Text";
    words = 1000;
    rating = 4.89;
    CWHText djtext(title , rating, words);
    djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    
    tuts[0]->display();
    tuts[1]->display(); 
    return 0;
}