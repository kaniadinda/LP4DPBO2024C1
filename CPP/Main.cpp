/* Saya Kania Dinda Fasya NIM 2102421 mengerjakan soal Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin. */

// import file header

#include "header.hh"

int main()
{
    // instansiasi objek Car
    Car mobil1("111", "Honda", "2000", "Hitam", "4", "4");
    Car mobil2("222", "Yamaha", "2005", "Merah", "2", "2");
    Car mobil3("333", "Daihatsu", "2003", "Putih", "4", "4");
    Car mobil4("444", "Toyota", "2009", "Biru", "2", "2");

    // instansiasi objek Motorcycle
    Motorcycle motor1("555", "Honda", "2000", "Hitam", "Scooter", "4 liter");
    Motorcycle motor2("666", "Yamaha", "2005", "Merah", "Cub", "3 liter");
    Motorcycle motor3("777", "Daihatsu", "2003", "Putih", "Classic", "4 liter");
    Motorcycle motor4("888", "Toyota", "2009", "Biru", "Sports", "5 liter");

    // instansiasi objek garasi
    Garage garasi1(mobil3, "Lapangan Bebas", "5x5");
    Garage garasi2(mobil1, "Lapangan Bebas", "5x6");
    Garage garasi3(mobil2, "Lapangan Bebas", "6x5");
    Garage garasi4(mobil4, "Lapangan Bebas", "6x6");

    // instansiasi objek ParkingLot
    list<ParkingLot> list_ParkingLot;
    ParkingLot lapangan1("5", "1", garasi1);
    // menambah garasi pada list garasi di objek ParkingLot
    lapangan1.add_garasi(garasi2);
    list_ParkingLot.push_back(lapangan1);
    ParkingLot lapangan2("5", "1", garasi3);
    lapangan2.add_garasi(garasi4);
    list_ParkingLot.push_back(lapangan2);

    // menampilkan list objek ParkingLot
    cout << "            ==== List Parkiran ====" << endl;

    int no_i = 1;
    // looping objek ParkingLot pada list_ParkingLot
    for (list<ParkingLot>::iterator i = list_ParkingLot.begin(); i != list_ParkingLot.end(); i++)
    {
        cout << no_i << ". " << i->get_jumlah_kendaran() << endl;
        no_i++;
        // print kapasitas dan nama ParkingLot
        cout << "Kapasitas          : " << i->get_kapasitas() << endl;
        cout << "Jumlah Kendaraan   : " << i->get_jumlah_kendaran() << endl;
        // membuat list garasi yang dimiliki ParkingLot
        list<Garage> list_garasi = i->get_garasi();
        int no_j = 1;
        cout << "\nList Garasi pada Parking Lot " << i->get_jumlah_kendaran() << endl;
        // looping list garasi yang dimiliki ParkingLot tersebut
        for (list<Garage>::iterator j = list_garasi.begin(); j != list_garasi.end(); j++)
        {
            cout << "\n   " << no_j << ". " << j->get_nama_garasi() << endl;
            no_j++;
            // print nama garasi, dan profil Motorcycle pengampu dari garasi tersebut
            cout << "   Nama Garasi :" << j->get_nama_garasi() << endl;
            cout << "   Profil Motorcycle   :" << endl;
            cout << "       Plat              :" << j->get_motorcycle().get_plat() << endl;
            cout << "       Merk              :" << j->get_motorcycle().get_merk() << endl;
            cout << "       Tahun Produksi    :" << j->get_motorcycle().get_tahun_produksi() << endl;
            cout << "       Warna             :" << j->get_motorcycle().get_warna() << endl;
            cout << "       Jenis Motor       :" << j->get_motorcycle().get_jenis_motor() << endl;
            cout << "       Kapasitas Tangki  :" << j->get_motorcycle().get_kapasitas_tangki() << endl;
            // membuat list Car yang mengontrak garasi
            list<Car> list_crr = j->get_crr();
            int no_k = 1;
            cout << "\n   List Car " << j->get_nama_garasi() << endl;
            // looping list Car yang mengontrak garasi tersebut
            for (list<Car>::iterator k = list_crr.begin(); k != list_crr.end(); k++)
            // {
            // cout << "\n       " << no_k << ". " << k->get_nama() << endl;
            // no_k++;
            //     // print profil Car
            // cout << "       Profil Car :" << endl;
            // cout << "       Plat              :" << j->get_car().get_plat() << endl;
            // cout << "       Merk              :" << j->get_car().get_merk() << endl;
            // cout << "       Tahun Produksi    :" << j->get_car().get_tahun_produksi() << endl;
            // cout << "       Warna             :" << j->get_car().get_warna() << endl;
            // cout << "       Jumlah Kursi      :" << j->get_car().get_jumlah_kursi() << endl;
            // cout << "       Jumlah Pintu      :" << j->get_car().get_jumlah_pintu() << endl;
            // }
        }
    }

    return 0;
}