// declare library
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// deklarasi kelas Vehicle
class Vehicle
{
    // atribut private
private:
    string plat;
    string merk;
    string tahun_produksi;
    string warna;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Vehicle();

    // konstruktor dengan parameter
    Vehicle(string plat, string merk, string tahun_produksi, string warna);

    /* Getter dan Setter*/

    // Get plat
    string get_plat();

    // Set plat
    void set_plat(string plat);
    
    // Get merk
    string get_merk();

    // Set merk
    void set_merk(string merk);

    // Get tahun_produksi
    string get_tahun_produksi();

    // Set tahun_produksi
    void set_tahun_produksi(string tahun_produksi);

    // Get warna
    string get_warna();

    // Set warna
    void set_warna(string warna);

    /* desktruktor */

    // default
    ~Vehicle(); // desktruktor
};

// deklarasi kelas Garage, child kelas Vehicle
class Garage : public Vehicle
{
    // atribut private
private:
    string nama_garasi, luas_garasi;
    Motorcycle motorcycle;
    list<Car> crr;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Garage();
    // konstruktor dengan parameter
    Garage(string plat, string merk, string tahun_produksi, string warna, string nama_garasi, string luas_garasi, Motorcycle motorcycle, Car crr);
    /* Getter dan Setter*/

    // Get nama_garasi
    string get_nama_garasi();

    // Set nama_garasi
    void set_nama_garasi(string nama_garasi);

    // Get luas_garasi
    string get_luas_garasi();

    // Set luas_garasi
    void set_luas_garasi(string luas_garasi);

    // Get motorcycle
    Motorcycle get_motorcycle();

    // Set motorcycle
    void set_motorcycle(Motorcycle motorcycle);

    // Get Car
    list<Car> get_mhs();

    // Set Car
    void set_mhs(list<Car> mhs);
    // Add list objek Car
    void add_mhs(Car mhs);

    /* desktruktor */

    // default
    ~Garage(); // desktruktor
};
// deklarasi kelas Car, child kelas Garage
class Car : public Garage
{
    // atribut private
private:
    string jumlah_kursi, jumlah_pintu;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Car();
    // konstruktor dengan parameter
    Car(string plat, string merk, string tahun_produksi, string warna, string nama_garasi, string luas_garasi, string jumlah_kursi, string jumlah_pintu);

    /* Getter dan Setter*/

    // Get jumlah_kursi
    string get_jumlah_kursi();
    // Set jumlah_kursi
    void set_jumlah_kursi(string jumlah_kursi);

    // Get jumlah_pintu
    string get_jumlah_pintu();

    // Set jumlah_pintu
    void set_jumlah_pintu(string jumlah_pintu);

    /* desktruktor */

    ~Car();
};

// deklarasi kelas Motorcycle, child kelas Garage
class Motorcycle : public Garage
{
    // atribut private
private:
    string jenis_motor, kapasitas_tangki, pend_terakhir, keahlian;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Motorcycle();
    // konstruktor dengan parameter
    Motorcycle(string plat, string merk, string tahun_produksi, string warna, string nama_garasi, string luas_garasi, string jenis_motor, string kapasitas_tangki);

    /* Getter dan Setter*/

    // Get jenis_motor
    string get_jenis_motor();

    // Set jenis_motor
    void set_jenis_motor(string jenis_motor);

    // Get kapasitas_tangki
    string get_kapasitas_tangki();

    // Set kapasitas_tangki
    void set_kapasitas_tangki(string kapasitas_tangki);

    /* desktruktor */

    ~Motorcycle();
};

// deklarasi kelas ParkingLot
class ParkingLot
{
    // atribut private
private:
    string kapasitas, jumlah_kendaraan;
    // komposite kelas Garage
    list<Garage> garasi;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    ParkingLot();

    // konstruktor dengan parameter
    ParkingLot(string kapasitas, string jumlah_kendaraan, Garage garasi);

    /* Getter dan Setter*/

    // Get kapasitas
    string get_kapasitas();

    // Set kapasitas
    void set_kapasitas(string kapasitas);

    // Get jumlah_kendaraan
    string get_jumlah_kendaraan();
    // Set jumlah_kendaraan
    void set_jumlah_kendaraan(string jumlah_kendaraan);

    // Get MataKuliah
    list<Garage> get_garasi();

    // Set MataKuliah
    void set_garasi(list<Garage> garasi);
    // add list objek MataKuliah
    void add_garasi(Garage garasi);

    /* desktruktor */

    // default
    ~ParkingLot();
};
