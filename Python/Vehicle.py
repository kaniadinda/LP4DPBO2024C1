# deklarasi class Vehicle
class Vehicle:

    # atribut private
    _plat = ""
    _merk = ""
    _tahun_produksi = ""
    _warna = ""

   # konstruktor
    def __init__(self, plat="", merk="", tahun_produksi="", warna=""):
        self._plat = plat
        self._merk = merk
        self._tahun_produksi = tahun_produksi
        self._warna = warna

    # Getter and Setter
    def get_plat(self):
        return self._plat

    def set_plat(self, plat):
        self._plat = plat

    def get_merk(self):
        return self._merk

    def set_merk(self, merk):
        self._merk = merk

    def get_tahun_produksi(self):
        return self._tahun_produksi

    def set_tahun_produksi(self, tahun_produksi):
        self._tahun_produksi = tahun_produksi

    def get_warna(self):
        return self._warna

    def set_warna(self, warna):
        self._warna = warna