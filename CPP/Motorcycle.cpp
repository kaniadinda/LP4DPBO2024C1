// import file header
#include "header.hh"

/* konstruktor */

// konstruktor tanpa parameter
Motorcycle::Motorcycle()
{
    // set isi atribut secara default
    this->jenis_motor = "";
    this->kapasitas_tangki = "";
}
// konstruktor dengan parameter
Motorcycle::Motorcycle(string plat, string merk, string tahun_produksi, string warna, string jenis_motor, string kapasitas_tangki) : Garage(plat, merk, tahun_produksi, warna, merk_garasi, luas_garasi)
{
    // set isi atribut berdasarkan isi parameter
    this->jenis_motor = jenis_motor;
    this->kapasitas_tangki = kapasitas_tangki;
}

/* Getter dan Setter*/

// Get jenis_motor
string Motorcycle::get_jenis_motor()
{
    return this->jenis_motor;
}

// Set jenis_motor
void Motorcycle::set_jenis_motor(string jenis_motor)
{
    this->jenis_motor = jenis_motor;
}

// Get kapasitas_tangki
string Motorcycle::get_kapasitas_tangki()
{
    return this->kapasitas_tangki;
}

// Set kapasitas_tangki
void Motorcycle::set_kapasitas_tangki(string kapasitas_tangki)
{
    this->kapasitas_tangki = kapasitas_tangki;
}

/* desktruktor */

// default
Motorcycle::~Motorcycle() // desktruktor
{
}
