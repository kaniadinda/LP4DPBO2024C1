# import class ParkingLot dari file ParkingLot
from ParkingLot import ParkingLot

# deklarasi kelas

class Motorcycle (ParkingLot):
    # atribut private
    __jenis_motor = ""
    __kap_tangki = ""

   # konstruktor
    def __init__(self, jenis_motor="", kap_tangki=""):
        super().__init__(jenis_motor, kap_tangki)
        self.__jenis_motor = jenis_motor
        self.__kap_tangki = kap_tangki

    # Getter & Setter
    
    def get_jenis_motor(self):
        return self.__jenis_motor

    def set_jenis_motor(self, jenis_motor):
        self.__jenis_motor = jenis_motor

    def get_kap_tangki(self):
        return self.__kap_tangki

    def set_kap_tangki(self, kap_tangki):
        self.__kap_tangki = kap_tangki
