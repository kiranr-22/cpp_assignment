#include <iostream>
using namespace std;


void findMinMax(int a, int b, int c, int &Minvalue, int &Maxvalue);


    int main(){

        int a,b,c,lo,hi;
        a=10;
        b=25;
        c=5;

        findMinMax(a,b,c,lo,hi);
         cout <<"minimun:"<<lo<<endl;
         cout <<"maximum:"<<hi<<endl;

         return 0;


    }



        void findMinMax(int a, int b, int c, int &Minvalue, int &Maxvalue){

            Minvalue = a;
            Maxvalue = a;

            if(b < Minvalue)
                Minvalue = b;


            if (c < Minvalue)
                Minvalue = c;

            if (b > Maxvalue)
                Maxvalue = b;

            if (c > Maxvalue)
                Maxvalue = c;




        }


        