// import file header
#include "header.hh"

// konstruktor tanpa parameter
Car::Car()
{
    // set isi atribut secara default
    this->jumlah_kursi = "";
    this->jumlah_pintu = "";
}
// konstruktor dengan parameter
Car::Car(string plat, string merk, string tahun_produksi, string warna, string jumlah_kursi, string jumlah_pintu) : Garage(plat, merk, tahun_produksi, warna, merk_garasi, luas_garasi)
{
    // set isi atribut berdasarkan isi parameter
    this->jumlah_kursi = jumlah_kursi;
    this->jumlah_pintu = jumlah_pintu;
}

/* Getter dan Setter*/

// Get jumlah_kursi
string Car::get_jumlah_kursi()
{
    return this->jumlah_kursi;
}

// Set jumlah_kursi
void Car::set_jumlah_kursi(string jumlah_kursi)
{
    this->jumlah_kursi = jumlah_kursi;
}

// Get jumlah_pintu
string Car::get_jumlah_pintu()
{
    return this->jumlah_pintu;
}

// Set jumlah_pintu
void Car::set_jumlah_pintu(string jumlah_pintu)
{
    this->jumlah_pintu = jumlah_pintu;
}

/* desktruktor */

// default
Car::~Car() // desktruktor
{
}
