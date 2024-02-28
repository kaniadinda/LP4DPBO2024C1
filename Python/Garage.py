# import class car dari file Car
from Car import Car

# deklarasi kelas

class Garage:

    # atribut private
    __nama_garasi = ""
    __luas_garasi = ""
    # composite kelas Car dan motorcycle
    __car = Car()
    __motor = []  # array of object motorcycle

   # konstruktor
    def __init__(self, nama_garasi="", luas_garasi="", car=Car(), motor=[]):
        self.__nama_garasi = nama_garasi
        self.__luas_garasi = luas_garasi
        self._car = car
        self.__motor = motor

    # Getter & Setter

    def get_nama_garasi(self):
        return self.__nama_garasi

    def set_nama_garasi(self, nama_garasi):
        self.__nama_garasi = nama_garasi

    def get_luas_garasi(self):
        return self.__luas_garasi

    def set_luas_garasi(self, luas_garasi):
        self.__luas_garasi = luas_garasi

    def get_car(self):
        return self.__car

    def set_car(self, car):
        self.__car = car

    def get_motor(self):
        return self.__motor

    def set_motor(self, motor):
        self.__motor = motor
