// import file header
#include "header.hh"

/* konstruktor */

// konstruktor tanpa parameter
ParkingLot::ParkingLot()
{
    // set isi atribut secara default

    this->kapasitas = "";
    this->jumlah_kendaraan = "";
}

// konstruktor dengan parameter
ParkingLot::ParkingLot(string kapasitas, string jumlah_kendaraan, Garage garasi)
{
    // set isi atribut berdasarkan isi parameter
    this->kapasitas = kapasitas;
    this->jumlah_kendaraan = jumlah_kendaraan;
    this->garasi.push_back(garasi);
}

/* Getter dan Setter*/

// Get kapasitas
string ParkingLot::get_kapasitas()
{
    return this->kapasitas;
}

// Set kapasitas
void ParkingLot::set_kapasitas(string kapasitas)
{
    this->kapasitas = kapasitas;
}
// Get jumlah_kendaraan
string ParkingLot::get_jumlah_kendaraan()
{
    return this->jumlah_kendaraan;
}

// Set jumlah_kendaraan
void ParkingLot::set_jumlah_kendaraan(string jumlah_kendaraan)
{
    this->jumlah_kendaraan = jumlah_kendaraan;
}

// Get MataKuliah
list<Garage> ParkingLot::get_garasi()
{
    return this->garasi;
}

// Set MataKuliah
void ParkingLot::set_garasi(list<Garage> garasi)
{
    this->garasi = garasi;
}
// add list objek MataKuliah
void ParkingLot::add_garasi(Garage garasi)
{
    this->garasi.push_back(garasi);
}

/* desktruktor */

// default
ParkingLot::~ParkingLot() // desktruktor
{
}
