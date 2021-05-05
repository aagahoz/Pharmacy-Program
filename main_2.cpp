#include <string>
#include <iostream>
#include <fstream>
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
			this->eczaneIsim = "NULL";
			this->eczaneAdres = "NULL";
			//cout << "Obje Default Olusturuldu" << endl;
		}
		
		eczane(int eczaneID, string eczaneIsim, string eczaneAdres)
		{
			this->eczaneID = eczaneID;
			this->eczaneIsim = eczaneIsim;
			this->eczaneAdres = eczaneAdres;
			//cout << "Obje Argumanla Olusturuldu" << endl;
		}
		void showInfos()
		{
			cout << "	ID > " << this->eczaneID << endl << "	Isim > " << this->eczaneIsim << endl << "	Adres > " << this->eczaneAdres << endl << endl;
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
		
		void eczaneEkle()
		{
			cout << "Bilgileri Giriniz!" << endl;
			cout << "ID > ";
			cin >> this->eczaneID;
			cout << "Isim > ";
			cin >> this->eczaneIsim;
			cout << "Adres > ";
			cin >> this->eczaneAdres;
			cout << "Bilgiler Basariyla Kaydedildi!" << endl;
		}	
		void eczaneDuzenle(int eczaneID, string eczaneIsim, string eczaneAdres)
		{
			this->eczaneID = eczaneID;
			this->eczaneIsim = eczaneIsim;
			this->eczaneAdres = eczaneAdres;
		}
};

class ilac
{
		int ilacID;
		string  ilacIsim;
		int ilacMiktar;
		double ilacFiyat;
		
	public:
		ilac()
		{
			this->ilacID = 0;
			this->ilacIsim = "Null";
			this->ilacMiktar = 0;
			this->ilacFiyat = 0;
			//cout << "Obje Default Olusturuldu" << endl;
		}
		
		ilac(int ilacID, string ilacIsim, int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			this->ilacIsim = "Null";
			this->ilacMiktar = ilacMiktar;
			this->ilacFiyat = ilacFiyat;
			//cout << "Obje Argumanla Olusturuldu" << endl;
		}
		/*
		ilac(const ilac &ilc)
		{
			cout << "Obje Copy Constructor ile Olusturuldu" << endl;
		}
		ilac& operator = (const ilac &ilc)
		{
			cout << "Obje Assigment Operator ile Olusturuldu" << endl;
			return *this;
		}
		*/
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
		
		void ilacOlustur(int ilacID, string ilacIsim, int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			this->ilacIsim = ilacIsim;
			this->ilacMiktar = ilacMiktar;
			this->ilacFiyat = ilacFiyat;
		}
		
		void ilacDuzenle()
		{
			cout << endl;
			cout << "Sirasiyla Giriiniz!" << endl;
			cout << "	ID > ";
			cin >> this->ilacID;
			cout << "	Isim > ";
			cin >> this->ilacIsim;
			cout << "	Miktar > ";
			cin >> this->ilacMiktar;
			cout << "	Fiyat > ";
			cin >> this->ilacFiyat;	
			cout << "Bilgiler Girildi!" << endl << endl;
		}
		
		void ilacEkle()
		{
			cout << endl;
			cout << "Sirasiyla Giriniz!" << endl;
			cout << "	ID > ";
			cin >> this->ilacID;
			cout << "	Isim > ";
			cin >> this->ilacIsim;
			cout << "	Miktar > ";
			cin >> this->ilacMiktar;
			cout << "	Fiyat > ";
			cin >> this->ilacFiyat;	
			cout << "Bilgiler Girildi!" << endl<< endl;
		}
};

void eczaneListesiOlustur()
{
	
	eczane e[5];
	e[0].eczaneDuzenle(1, "Agah", "Kadikoy");
	e[1].eczaneDuzenle(2, "Merve", "Kartal");
	e[2].eczaneDuzenle(3, "Enes", "Gebze");
	
	ofstream myfile("eczane_listesi.dat");
	
	myfile << e[0].getEczaneID() << " "<< e[0].getEczaneIsim() << " " << e[0].getEczaneAdres() << endl;
	myfile << e[1].getEczaneID() << " "<< e[1].getEczaneIsim() << " " << e[1].getEczaneAdres();

	myfile.close();
}

void eczaneListesiOku()
{
	int tempID;
	string tempIsim, tempAdres;
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");

	int i = 0;
	while(!myfile.eof())
	{
		myfile >> tempID  >> tempIsim >> tempAdres;
		e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
		i++;
	}
	
	cout << "eczane sayisi > " << i << endl;
	int j = 0;
	while(j < i)
	{
		e[j].showInfos();
		j++;
	}
	myfile.close();
}

void eczaneGosterAdaGore(string tempEczaneIsim)
{
	int tempID;
	char tempIsim[100], tempAdres[100];
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");
	
	int i=0;
	while(!myfile.eof())
	{
		myfile >> tempID  >> tempIsim >> tempAdres;
		e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
		i++;
	}
	myfile.close();
	
	int j = 0;
	while(j < i)
	{
		if(e[j].getEczaneIsim() == tempEczaneIsim)
		{
			e[j].showInfos();
		}
		j++;
	}
}

void eczaneEkle()
{
	int tempID;
	char tempIsim[100], tempAdres[100];
	eczane e[5];
	ifstream myfile1("eczane_listesi.dat");
	
	int i=0;
	while(!myfile1.eof())
	{
		myfile1 >> tempID  >> tempIsim >> tempAdres;
		e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
		i++;
	}
	myfile1.close();
	e[i+1].eczaneEkle();
	
	ofstream myfile2("eczane_listesi.dat");
	
	int j=0;
	while(j<i)
	{
		myfile2 << e[j].getEczaneID() << " "<< e[j].getEczaneIsim() << " " << e[j].getEczaneAdres() << endl;
		j++;
	}
	myfile2 << e[i+1].getEczaneID() << " "<< e[i+1].getEczaneIsim() << " " << e[i+1].getEczaneAdres();

	myfile2.close();
}

void ilacListesiOlusturEczaneIcin()
{
	
	ilac i[10];
	i[0].ilacOlustur(1, "Ates-Dusurucu", 43, 23.3);
	i[1].ilacOlustur(2, "Kan-Sulandirici", 23, 12.4);
	i[2].ilacOlustur(3, "Sivilce-Kremi", 4, 54.2);

	ofstream myfile1("Merve.dat");
	
	myfile1 << i[0].getIlacID() << " "<< i[0].getIlacIsim() << " " << i[0].getIlacMiktar() << " " << i[0].getIlacFiyat() << endl;
	myfile1 << i[1].getIlacID() << " "<< i[1].getIlacIsim() << " " << i[1].getIlacMiktar() << " " << i[1].getIlacFiyat() << endl;
	myfile1 << i[2].getIlacID() << " "<< i[2].getIlacIsim() << " " << i[2].getIlacMiktar() << " " << i[2].getIlacFiyat();

	myfile1.close();
	
	
	ofstream myfile2("Agah.dat");
	ilac j[10];
	j[0].ilacOlustur(1, "Ates-Dusurucu", 43, 23.3);
	j[1].ilacOlustur(2, "Covid-Asisi", 23, 12.4);

	myfile2 << j[0].getIlacID() << " "<< j[0].getIlacIsim() << " " << j[0].getIlacMiktar() << " " << j[0].getIlacFiyat() << endl;
	myfile2 << j[1].getIlacID() << " "<< j[1].getIlacIsim() << " " << j[1].getIlacMiktar() << " " << j[1].getIlacFiyat();

	myfile2.close();
}

void ilacListesiOkuDosyadanEczaneIcin(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	
	ilac ilaclar[10];
	ifstream myfile(tempEczaneIsim + ".dat");

	int i = 0;
	while(!myfile.eof())
	{
		myfile >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
		ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
		i++;
	}

	cout << "ilac sayisi > " << i << endl;
	int j = 0;
	while(j < i)
	{
		ilaclar[j].showInfos();
		j++;
	}
	myfile.close();
}

void ilacEkleEczaneye(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	
	ilac ilaclar[10];
	ifstream myfile1(tempEczaneIsim + ".dat");

	int i = 0;
	while(!myfile1.eof())
	{
		myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
		ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
		i++;
	}
	myfile1.close();
	
	ilaclar[i+1].ilacEkle();
	
	ofstream myfile2(tempEczaneIsim + ".dat");
	int j=0;
	while(j<i)
	{
		myfile2 << ilaclar[j].getIlacID() << " "<< ilaclar[j].getIlacIsim() << " " << ilaclar[j].getIlacMiktar() << " " << ilaclar[j].getIlacFiyat() << endl;
		j++;
	}
	myfile2 << ilaclar[i+1].getIlacID() << " "<< ilaclar[i+1].getIlacIsim() << " " << ilaclar[i+1].getIlacMiktar() << " " << ilaclar[i+1].getIlacFiyat();
	myfile2.close();
}

void ilacDuzenle(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	
	ilac ilaclar[10];
	ifstream myfile1(tempEczaneIsim + ".dat");

	int i = 0;
	while(!myfile1.eof())
	{
		myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
		ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
		i++;
	}
	myfile1.close();
	
	cout << "Bilgileri degistirilecek ilacin adini giriniz > ";
	cin >> tempIsim;
	
	int ilacVar = 0;
	int j=0;
	while(j<i)
	{
		if(ilaclar[j].getIlacIsim() == tempIsim)
		{
			ilaclar[j].ilacDuzenle();
			ilacVar = 1;
		}
	j++;
	}
	if(!ilacVar)
	{
		cout << "Ilac sistemde bulunumadi, islem iptal edildi!" << endl;
	}
	
	if(ilacVar)
	{
		ofstream myfile2(tempEczaneIsim + ".dat");
		j=0;
		while(j<i)
		{
			myfile2 << ilaclar[j].getIlacID() << " "<< ilaclar[j].getIlacIsim() << " " << ilaclar[j].getIlacMiktar() << " " << ilaclar[j].getIlacFiyat() << endl;
			j++;
		}
		myfile2.close();	
	}
}

int ilacAraBirEczanede(string tempEczaneIsim, string tempIlacIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	
	ilac ilaclar[10];
	ifstream myfile1(tempEczaneIsim + ".dat");

	int i = 0;
	while(!myfile1.eof())
	{
		myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
		ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
		i++;
	}
	myfile1.close();
	
	
	int ilacVar = 0;
	int j=0;
	while(j<i)
	{
		if(ilaclar[j].getIlacIsim() == tempIlacIsim)
		{
			ilacVar = 1;
			tempMiktar = ilaclar[j].getIlacMiktar();
		}
	j++;
	}
	if(!ilacVar)
	{
		cout << "Ilac " << tempEczaneIsim << " eczanesinde bulunmamaktadir!" << endl;
	}
	if(ilacVar)
	{
		cout << "Ilac " << tempEczaneIsim << " eczanesinde " << tempMiktar << " adet bulunmaktadir." << endl;
	}
	
	return ilacVar;
}

void ilacAraTumEczanelerde(string tempIlacIsim)
{
	int tempID;
	string tempIsim, tempAdres;
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");

	int i = 0;
	while(!myfile.eof())
	{
		myfile >> tempID  >> tempIsim >> tempAdres;
		e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
		i++;
	}
	
	int varMi = 0;
	int var = 0;
	int olanEczaneNumaralari[5] = {0};
	int j=0;
	int k = 0;
	while(j<i)
	{
		varMi = ilacAraBirEczanede(e[j].getEczaneIsim(), tempIlacIsim);
		if(varMi)
		{
			var = 1;
			olanEczaneNumaralari[k] = j;
			k++;
		}
		j++;
	}
	
	j=0;
	while(j<k)
	{
		e[j].showInfos();
		j++;
	}
}


int main()
{
	eczaneListesiOlustur();
//	eczaneListesiOku();	
//	eczaneGosterAdaGore("Agah");
	
	ilacListesiOlusturEczaneIcin();
//	ilacListesiOkuDosyadanEczaneIcin("Agah");
//	eczaneEkle();
//	eczaneListesiOku();

//	ilacEkleEczaneye("Merve");
//	ilacListesiOkuDosyadanEczaneIcin("Merve");	
//	ilacEkleEczaneye("Merve");
//	ilacListesiOkuDosyadanEczaneIcin("Merve");
	
//	ilacListesiOkuDosyadanEczaneIcin("Merve");
//	ilacDuzenle("Merve");
//	ilacAraBirEczanede("Merve", "Kan-Sulandirici");
//	ilacAraTumEczanelerde("Kan-Sulandirici");
	
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
