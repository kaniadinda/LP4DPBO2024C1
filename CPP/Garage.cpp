// import file header
#include "header.hh"

// konstruktor tanpa parameter
Garage::Garage() : Vehicle()
{
    // set isi atribut secara default
    this->nama_garasi = "";
    this->luas_garasi = "";
}
// konstruktor dengan parameter
Garage::Garage(string plat, string merk, string tahun_produksi, string warna, string nama_garasi, string luas_garasi, Motorcycle motorcycle, Car crr) : Vehicle(plat, merk, tahun_produksi, warna)
{
    // set isi atribut berdasarkan isi parameter
    this->nama_garasi = nama_garasi;
    this->luas_garasi = luas_garasi;
    this->motorcycle = motorcycle;
    this->crr.push_back(crr);
}

/* Getter dan Setter*/

// Get nama_garasi
string Garage::get_nama_garasi()
{
    return this->nama_garasi;
}

// Set nama_garasi
void Garage::set_nama_garasi(string nama_garasi)
{
    this->nama_garasi = nama_garasi;
}

// Get luas_garasi
string Garage::get_luas_garasi()
{
    return this->luas_garasi;
}

// Set luas_garasi
void Garage::set_luas_garasi(string luas_garasi)
{
    this->luas_garasi = luas_garasi;
}

// Get motorcycle
Motorcycle Garage::get_motorcycle()
{
    return this->motorcycle;
}

// Set motorcycle
void Garage::set_motorcycle(Motorcycle motorcycle)
{
    this->motorcycle = motorcycle;
}
// Get Car
list<Car> Garage::get_crr()
{
    return this->crr;
}

// Set Car
void Garage::set_crr(list<Car> crr)
{
    this->crr = crr;
}
// Add list objek Car
void Garage::add_crr(Car crr)
{
    this->crr.push_back(crr);
}


/* desktruktor */

// default
Garage::~Garage() // desktruktor
{
}
