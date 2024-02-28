# import class Vehicle dari file Vehicle
from Vehicle import Vehicle

# deklarasi kelas

class ParkingLot (Vehicle):

    # atribut private
    __kapasitas = ""
    __jml_kendaraan = ""
    # composite kelas Garage
    __Garage = []  # array of object Garage

   # konstruktor
    def __init__(self, kapasitas="", jml_kendaraan="",  Garage=[]):
        self.__kapasitas = kapasitas
        self.__jml_kendaraan = jml_kendaraan
        self.__Garage = Garage

    # Getter and Setter
    def get_kapasitas(self):
        return self.__kapasitas

    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def get_jml_kendaraan(self):
        return self.__jml_kendaraan

    def set_jml_kendaraan(self, jml_kendaraan):
        self.__jml_kendaraan = jml_kendaraan

    def get_Garage(self):
        return self.__Garage

    def set_Garage(self, Garage):
        self.__Garage = Garage
