# import class ParkingLot file ParkingLot
from ParkingLot import ParkingLot

# deklarasi kelas

class Car (ParkingLot):

    # atribut private
    __jml_kursi = ""
    __jml_pintu = ""

   # konstruktor
    def __init__(self, jml_kursi="", jml_pintu=""):
        super().__init__(jml_kursi, jml_pintu)
        self.__jml_kursi = jml_kursi
        self.__jml_pintu = jml_pintu

    # Getter & Setter
    def get_jml_kursi(self):
        return self.__jml_kursi

    def set_jml_kursi(self, jml_kursi):
        self.__jml_kursi = jml_kursi

    def get_jml_pintu(self):
        return self.__jml_pintu

    def set_jml_pintu(self, jml_pintu):
        self.__jml_pintu = jml_pintu
