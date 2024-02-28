# Saya Kania Dinda Fasya NIM 2102421 mengerjakan soal Latihan 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan
# seperti yang telah dispesifikasikan. Aamiin. 

# import class file
from Motorcycle import Motorcycle
from Car import Car
from Garage import Garage
from ParkingLot import ParkingLot

# instansiasi objek Motorcycle
motorsatu = Motorcycle("Yamaha", "7 liter")
motordua = Motorcycle("Suzuki", "8 liter")
motortiga = Motorcycle("Honda", "9 liter")

# instansiasi objek Car
mobilsatu = Car("6", "4")
mobildua = Car("2", "2")
mobiltiga = Car("4", "4")

# instansiasi objek Garage
garasisatu = Garage("Nexus", "4x5 meter", mobilsatu, [motorsatu, motordua])
garasidua = Garage("Sauber", "6x6 meter", mobildua, [motordua, motortiga])
garasitiga = Garage("Apex", "5x6 meter", mobiltiga, [motortiga, motorsatu])

# bikin list of object ParkingLot
list_ParkingLot = []

# instansiasi objek ParkingLot
parkirsatu = ParkingLot("10", "3", [garasisatu])
list_ParkingLot.append(parkirsatu)
parkirdua = ParkingLot("15", "6", [garasidua, garasitiga])
list_ParkingLot.append(parkirdua)

# menampilkan list ParkingLot
print("==>", "List Tempat Parkir".center(60), "<==\n")

# looping objek ParkingLot pada list_ParkingLot
for i, ParkingLot in enumerate(list_ParkingLot):
    # print ParkingLot
    print(f"""{i+1}.
Kapasitas        : {ParkingLot.get_kapasitas()}
Jumlah Kendaraan : {ParkingLot.get_jml_kendaraan()}
List Kendaraan   : """)
    # looping list objek garasi yang dimiliki ParkingLot tersebut
    for j, garasi in enumerate(ParkingLot.get_Garage()):
        print(f"""
    {j+1}.
    Nama Garasi   : {garasi.get_nama_garasi()}
    Data Car      :
    Jumlah Kursi  : {garasi.get_car().get_jml_kursi()}
    Jumlah Pintu  : {garasi.get_car().get_jml_pintu()}
    
    List Motorcycle {garasi.get_nama_garasi()} : """)
        # looping list objek Motorcycle yang mengontrak garasi tersebut
        # print profil Motorcycle
        for k, motor in enumerate(garasi.get_motor()):
            print(f"""
        {k+1}.
        {motor.get_jenis_motor()}
        Profil Motorcycle   :
        Jenis Motor         : {motor.get_jenis_motor()}
        Kapasitas Tangki    : {motor.get_kap_tangki()}""")
