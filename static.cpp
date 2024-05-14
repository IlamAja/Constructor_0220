#include <iostream>
using namespace std;

class mahasiswa
{
    public:
        static int nim;
        int id;
        string nama;

        void setID();

        void printAll();

        mahasiswa(string pNama)
        {
            nama = pNama;
            setID();
        }
};

int mahasiswa::nim = 220;

void mahasiswa::setID()
{
    id = ++nim;
}

