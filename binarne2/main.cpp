#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in("liczby.txt");

    if(in.is_open())
    {


        string number, minimum, maximum;


        int nrmin = 1, nrmax = 1;

        in>>number;

        minimum = maximum = number;

        for(int i=2; i<1001; i++)
        {
            in>>number;

            if(number.size() > maximum.size())
            {
                maximum = number;
                nrmax = i;
            }
            else

                if(number.size()==maximum.size())
                    if(number > maximum)
                    {

                        maximum = number;

                        nrmax = i;
                    }
            if(number.size() < minimum.size())
            {
                minimum = number;
                nrmin = i;
            }
            else

                if(number.size()==minimum.size())
                    if(number < minimum)
                    {

                        minimum = number;
                        nrmin = i;
                    }
        }

        cout<<"Najmniejsza liczba znajduje sie we wierszu: "<<nrmin<<endl;
        cout<<"Najwieksza liczba znajduje sie we wierszu: "<<nrmax<<endl;

    }


    return 0;
}
