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

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Ilam Ganteng");
    mahasiswa mhs2("Farhad 15");
    mahasiswa mhs3("Panji Newbelens");
    mahasiswa mhs4("Dika Gohom");

    mhs1.printAll();
    
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}