/*                                                                     #include <iostream>
                                                                    using namespace std;

                                                                    template <class T>
                                                                    class vector
                                                                    {
                                                                    public:
                                                                        T *arr;
                                                                        int size;
                                                                        vector(T m)
                                                                        {
                                                                            size = m;
                                                                            arr = new T[size];
                                                                        }

                                                                        T dotProduct(vector &v)
                                                                        {
                                                                            T d = 0;
                                                                            for (int i = 0; i < size; i++)
                                                                            {
                                                                                d += this->arr[i] * v.arr[i];
                                                                            }
                                                                            return d;
                                                                        }
                                                                    };


                                                                    int main()
                                                                    {
                                                                        //my code here
                                                                        vector<float> v1(3);
                                                                        v1.arr[0] = 4.1;
                                                                        v1.arr[1] = 1.0;
                                                                        v1.arr[2] = 3;
                                                                        vector<float> v2(3);
                                                                        v2.arr[0] = 4.3;
                                                                        v2.arr[1] = 1;
                                                                        v2.arr[2] = 3.0;

                                                                        float a = v1.dotProduct(v2);
                                                                        cout << a << endl;

                                                                        return 0;
                                                                    }


                                                                     */
                                           ////////// Code is same as above but Below code is little bit simple

                                                                    #include<iostream>
                                                                    using namespace std;
                                                                     
                                                                     template <class T>

                                                                     class Addition
                                                                     {
                                                                         public:
                                                                        T sum(T x, T y)
                                                                            {
                                                                                return x+y;
                                                                            }
                                                                     };
                                                                    
                                                                                                                                          
                                                                    int main(){
                                                                        Addition<int> a1;
                                                                        Addition<double> a2;
                                                                         cout<<a1.sum(10,20)<<endl;
                                                                         cout<<a2.sum(10.5,20.5)<<endl;
                                                                                                                                             
                                                                        return 0;
                                                                    }