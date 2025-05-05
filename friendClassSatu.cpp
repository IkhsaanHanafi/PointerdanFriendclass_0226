#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang 
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};

void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id =pId;
}

void siswa::displayAll(orang &a)
{
    cout << id << endl
         << a.nama;
}
int main()
{
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
};

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}

class pelajar;
class manusia 
{
public:
    void showNilaiPelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x)
{
    cout << x.nilai;
}
int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}