// import file header
#include "header.hh"

// konstruktor tanpa parameter
Vehicle::Vehicle()
{
    // set isi atribut secara default
    this->plat = "";
    this->merk = "";
    this->tahun_produksi = "";
    this->warna = "";
}

// konstruktor dengan parameter
Vehicle::Vehicle(string plat, string merk, string tahun_produksi, string warna)
{
    // set isi atribut berdasarkan isi parameter
    this->plat = plat;
    this->merk = merk;
    this->tahun_produksi = tahun_produksi;
    this->warna = warna;
}

/* Getter dan Setter*/

// Get plat
string Vehicle::get_plat()
{
    return this->plat;
}

// Set plat
void Vehicle::set_plat(string plat)
{
    this->plat = plat;
}
// Get merk
string Vehicle::get_merk()
{
    return this->merk;
}

// Set merk
void Vehicle::set_merk(string merk)
{
    this->merk = merk;
}

// Get tahun_produksi
string Vehicle::get_tahun_produksi()
{
    return this->tahun_produksi;
}

// Set tahun_produksi
void Vehicle::set_tahun_produksi(string tahun_produksi)
{
    this->tahun_produksi = tahun_produksi;
}

// Get warna
string Vehicle::get_warna()
{
    return this->tahun_produksi;
}

// Set warna
void Vehicle::set_warna(string warna)
{
    this->warna = warna;
}

/* desktruktor */

// default
Vehicle::~Vehicle() // desktruktor
{
}
