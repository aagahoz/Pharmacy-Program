#include <iostream>
using namespace std;

class eczane
{
		int eczaneID;
		string eczaneIsim;
		string eczaneAdres;
	public:
		eczane()
		{
			this->eczaneID = 0;
			this->eczaneIsim = "Null";
			this->eczaneAdres = "Null";
			cout << "Obje Default Olusturuldu" << endl;
		}
		
		eczane(int eczaneID, string eczaneIsim, string eczaneAdres)
		{
			this->eczaneID = eczaneID;
			this->eczaneIsim = eczaneIsim;
			this->eczaneAdres = eczaneAdres;
			cout << "Obje Argumanla Olusturuldu" << endl;
		}
		eczane(const eczane &ecz)
		{
			cout << "Obje Copy Constructor ile Olusturuldu" << endl;
		}
		eczane& operator = (const eczane &ecz)
		{
			cout << "Obje Assigment Operator ile Olusturuldu" << endl;
			return *this;
		}
		void showInfos()
		{
			cout << "ID > " << this->eczaneID << endl << "Isim > " << this->eczaneIsim << endl << "Adres > " << this->eczaneAdres << endl << endl;
		}
		
		void setEczaneID(int eczaneID)
		{
			this->eczaneID = eczaneID;
		}
		void setEczaneIsim(string eczaneIsim)
		{
			this->eczaneIsim = eczaneIsim;
		}
		void setEczaneAdres(string eczaneAdres)
		{
			this->eczaneAdres = eczaneAdres;
		}
		
		int getEczaneID()
		{
			return this->eczaneID;
		}
		string getEczaneIsim()
		{
			return this->eczaneIsim;
		}
		string getEczaneAdres()
		{
			return this->eczaneAdres;
		}
};
////////////////////////////////////////////////////////////////////////////


class ilac
{
		int ilacID;
		string ilacIsim;
		int ilacMiktar;
		double ilacFiyat;
	public:
		ilac()
		{
			this->ilacID = 0;
			this->ilacIsim = "Null";
			this->ilacMiktar = 0;
			this->ilacFiyat = 0;
			cout << "Obje Default Olusturuldu" << endl;
		}
		
		ilac(int ilacID, string ilacIsim, int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			this->ilacIsim = ilacIsim;
			this->ilacMiktar = ilacMiktar;
			this->ilacFiyat = ilacFiyat;
			cout << "Obje Argumanla Olusturuldu" << endl;
		}
		ilac(const ilac &ilc)
		{
			cout << "Obje Copy Constructor ile Olusturuldu" << endl;
		}
		ilac& operator = (const ilac &ilc)
		{
			cout << "Obje Assigment Operator ile Olusturuldu" << endl;
			return *this;
		}
		void showInfos()
		{
			cout << "ID > " << this->ilacID << endl << "Name > " << this->ilacIsim << endl << "Miktar > " << this->ilacMiktar <<  endl << "Fiyat > " << this->ilacFiyat << endl << endl;
		}
		
		void setIlacID(int ilacID)
		{
			this->ilacID = ilacID;
		}
		void setIlacIsim(string ilacIsim)
		{
			this->ilacIsim = ilacIsim;
		}
		void setIlacMiktar(int ilacMiktar)
		{
			this->ilacMiktar = ilacMiktar;
		}
		void setIlacFiyat(double ilacFiyat)
		{
			this->ilacFiyat = ilacFiyat;
		}
		
		int getIlacID()
		{
			return this->ilacID;
		}
		string getIlacIsim()
		{
			return this->ilacIsim;
		}
		int getIlacMiktar()
		{
			return this->ilacMiktar;
		}
		double getIlacFiyat()
		{
			return this->ilacFiyat;
		}
};

////////////////////////////////////////////////////////////////////////////


int main()
{
	int altIslem;
	int isAdmin;
	int password = 1234, tempPassword;
	cout << "Eczane otomasyonu baslatildi!" << endl << endl;
	while(1 == 1)
	{
		cout << "Yoneticiyseniz `1`\nDegilseniz `2`\nGiriniz > ";
		cin >> isAdmin;
		cout << endl;
		switch(isAdmin)
		{
			case 1:
				cout << "Yonetici islemleri secildi" << endl;
				cout << "Lutfen sifre giriniz > ";
				cin >> tempPassword;
				if(password == tempPassword)
				{
					system("cls");
					cout << "Giris Basarili!" << endl << endl;
					cout << "Eczane listesi olustur islemi icin `1`" << endl << "Eczane ekleme islemi icin `2`" << endl;
					cout << "Ilac ekleme islemi icin `3`" << endl << "Ilac duzenleme islemi icin `4`" << endl;
					cout << "Yapmak istediginiz islemi giriniz > ";
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							cout << "Eczane listesi olustur islemi secildi" << endl;
							break;
						
						case 2:
							cout << "Eczane ekleme islemi secildi" << endl;
							break;
							
						case 3:
							cout << "Ilac ekleme islemi secildi" << endl;
							break;
							
						case 4:
							cout << "Ilac duzenleme islemi secildi" << endl;
							break;					
					}
				}
				else
				{
					cout << "Giris Basarisiz" << endl;
				}
				break;
				
			case 2:
				cout << "Musteri islemleri secildi" << endl;
					cout << "Giris Basarili!" << endl << endl;
					cout << "Ilac arama islemi icin `1`" << endl << "Eczane listeleme islemi icin `2`" << endl;
					cout << "Herhangi bir eczameyi gosterme islemi icin `3`" << endl << "Herhangi bir eczaneye ait ilac listesi islemi icin `4`" << endl;
					cout << "Yapmak istediginiz islemi giriniz > ";
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							cout << "Eczane listesi olustur islemi secildi" << endl;
							break;
						
						case 2:
							cout << "Eczane ekleme islemi secildi" << endl;
							break;
							
						case 3:
							cout << "Ilac ekleme islemi secildi" << endl;
							break;
							
						case 4:
							cout << "Ilac duzenleme islemi secildi" << endl;
							break;					
					}
				break;
		}
	}
	return 0;
}