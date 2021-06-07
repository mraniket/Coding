#include<iostream>
using namespace std;

struct ADT
{
   int total_size;
    int used_size;
    int *ptr;
};

class myArray
{
    int marks;

    public:

        void createArray(struct ADT * a, int tSize, int uSize){
            (*a).total_size = tSize;
            (*a).used_size = uSize;
            (*a).ptr = (int *)malloc(tSize * sizeof(int));
        }

        void show()
};

int main(){
    struct ADT marks;
    myArray adt;
    adt.createArray(&marks, 10, 3);

    return 0;
}