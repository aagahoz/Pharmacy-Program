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
		}
		
		eczane(int eczaneID, string eczaneIsim, string eczaneAdres)
		{
			this->eczaneID = eczaneID;
			this->eczaneIsim = eczaneIsim;
			this->eczaneAdres = eczaneAdres;
		}
		eczane (const eczane &ecz)
		{
			this->eczaneID = ecz.eczaneID;
			this->eczaneIsim = ecz.eczaneIsim;
			this->eczaneAdres = ecz.eczaneAdres;
		}
		eczane& operator = (const eczane &ecz)
		{
			this->eczaneID = ecz.eczaneID;
			this->eczaneIsim = ecz.eczaneIsim;
			this->eczaneAdres = ecz.eczaneAdres;
			return *this;
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
		}
		
		ilac(int ilacID, string ilacIsim, int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			this->ilacIsim = "Null";
			this->ilacMiktar = ilacMiktar;
			this->ilacFiyat = ilacFiyat;
		}
		
		ilac(const ilac &ilc)
		{
			this->ilacIsim = ilc.ilacIsim;
			this->ilacID = ilc.ilacID;
			this->ilacMiktar = ilc.ilacMiktar;
			this->ilacFiyat = ilc.ilacFiyat;
		}
		ilac& operator = (const ilac &ilc)
		{
			this->ilacIsim = ilc.ilacIsim;
			this->ilacID = ilc.ilacID;
			this->ilacMiktar = ilc.ilacMiktar;
			this->ilacFiyat = ilc.ilacFiyat;
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


void eczaneListesiOlustur();
void eczaneListesiOku();
void eczaneGosterAdaGore(string tempEczaneIsim);
void eczaneEkle();
void ilacListesiOlusturEczaneIcin();
void ilacListesiOkuDosyadanEczaneIcin(string tempEczaneIsim);
void ilacEkleEczaneye(string tempEczaneIsim);
void ilacDuzenle(string tempEczaneIsim);
int ilacAraBirEczanede(string tempEczaneIsim, string tempIlacIsim);
void ilacAraTumEczanelerde(string tempIlacIsim);
void ilacIsimListesi(string tempEczaneIsim);
void eczaneIsimListesi();

void eczaneListesiOlustur()
{
	eczane e[5];
	e[0].eczaneDuzenle(1, "Merkez", "Gebze");
	e[1].eczaneDuzenle(2, "Kadikoy", "Kadikoy");
	
	ofstream myfile("eczane_listesi.dat");
	if (myfile.is_open())
	{		
		myfile << e[0].getEczaneID() << " "<< e[0].getEczaneIsim() << " " << e[0].getEczaneAdres() << endl;
		myfile << e[1].getEczaneID() << " "<< e[1].getEczaneIsim() << " " << e[1].getEczaneAdres();
	
		myfile.close();
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void eczaneListesiOku()
{
	int tempID;
	int islemBasarili = 0;
	int i;
	string tempIsim, tempAdres;
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");
	if (myfile.is_open())
	{
		i = 0;
		while(!myfile.eof())
		{
			myfile >> tempID  >> tempIsim >> tempAdres;
			e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
			i++;
		}
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		int j = 0;
		while(j < i)
		{
			e[j].showInfos();
			j++;
		}
		myfile.close();
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void eczaneGosterAdaGore(string tempEczaneIsim)
{
	int tempID;
	char tempIsim[100], tempAdres[100];
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");
	if (myfile.is_open())
	{
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
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void eczaneEkle()
{
	int islemBasarili = 0;
	int tempID;
	char tempIsim[100], tempAdres[100];
	eczane e[5];
	int i=0;
	ifstream myfile1("eczane_listesi.dat");
	if(myfile1.is_open())
	{
		i=0;
		while(!myfile1.eof())
		{
			myfile1 >> tempID  >> tempIsim >> tempAdres;
			e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
			i++;
		}
		myfile1.close();
		e[i+1].eczaneEkle();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		ofstream myfile2("eczane_listesi.dat");
		if(myfile2.is_open())
		{
			int j=0;
			while(j<i)
			{
				myfile2 << e[j].getEczaneID() << " "<< e[j].getEczaneIsim() << " " << e[j].getEczaneAdres() << endl;
				j++;
			}
			myfile2 << e[i+1].getEczaneID() << " "<< e[i+1].getEczaneIsim() << " " << e[i+1].getEczaneAdres();
		
			myfile2.close();
		}
		ofstream myfile3(e[i + 1].getEczaneIsim() + ".dat");
		myfile3.close();
		cout << "--> Eczane basariyla eklendi!" << endl;
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void ilacListesiOlusturEczaneIcin()
{
	
	ilac i[10];
	i[0].ilacOlustur(1, "Ates-Dusurucu", 43, 23.3);
	i[1].ilacOlustur(2, "Kan-Sulandirici", 23, 12.4);
	i[2].ilacOlustur(3, "Sivilce-Kremi", 4, 54.2);

	ofstream myfile1("Merkez.dat");
	if(myfile1.is_open())
	{
		myfile1 << i[0].getIlacID() << " "<< i[0].getIlacIsim() << " " << i[0].getIlacMiktar() << " " << i[0].getIlacFiyat() << endl;
		myfile1 << i[1].getIlacID() << " "<< i[1].getIlacIsim() << " " << i[1].getIlacMiktar() << " " << i[1].getIlacFiyat() << endl;
		myfile1 << i[2].getIlacID() << " "<< i[2].getIlacIsim() << " " << i[2].getIlacMiktar() << " " << i[2].getIlacFiyat();
		myfile1.close();
	}
	
	ofstream myfile2("Kadikoy.dat");
	if(myfile2.is_open())
	{
		ilac j[10];
		j[0].ilacOlustur(1, "Ates-Dusurucu", 43, 23.3);
		j[1].ilacOlustur(2, "Covid-Asisi", 23, 12.4);
	
		myfile2 << j[0].getIlacID() << " "<< j[0].getIlacIsim() << " " << j[0].getIlacMiktar() << " " << j[0].getIlacFiyat() << endl;
		myfile2 << j[1].getIlacID() << " "<< j[1].getIlacIsim() << " " << j[1].getIlacMiktar() << " " << j[1].getIlacFiyat();
	
		myfile2.close();
	}
}

void ilacListesiOkuDosyadanEczaneIcin(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	int islemBasarili = 0;
	int i=1;
	ilac ilaclar[10];
	ifstream myfile(tempEczaneIsim + ".dat");
	if(myfile.is_open())
	{
		i = 0;
		while(!myfile.eof())
		{
			myfile >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
			ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
			i++;
		}
		myfile.close();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		int j = 0;
		while(j < i)
		{
			ilaclar[j].showInfos();
			j++;
		}
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void ilacEkleEczaneye(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	int islemBasarili = 0;
	ilac ilaclar[10];
	int i=0;
	ifstream myfile1(tempEczaneIsim + ".dat");
	if(myfile1.is_open())
	{
		i = 0;
		while(!myfile1.eof())
		{
			myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
			ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
			i++;
		}
		myfile1.close();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		ilaclar[i+1].ilacEkle();

		ofstream myfile2(tempEczaneIsim + ".dat");
		if(myfile2.is_open())
		{
			int j=0;
			while(j<i)
			{
				myfile2 << ilaclar[j].getIlacID() << " "<< ilaclar[j].getIlacIsim() << " " << ilaclar[j].getIlacMiktar() << " " << ilaclar[j].getIlacFiyat() << endl;
				j++;
			}
			myfile2 << ilaclar[i+1].getIlacID() << " "<< ilaclar[i+1].getIlacIsim() << " " << ilaclar[i+1].getIlacMiktar() << " " << ilaclar[i+1].getIlacFiyat();
			myfile2.close();
		}
		cout << "Ilac basariyla eklendi!" << endl;
	}
	else
		cout << "--> Dosya Acilamadi!" << endl;
}

void ilacDuzenle(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	int islemBasarili = 0;
	int i = 0;
	ilac ilaclar[10];
	ifstream myfile1(tempEczaneIsim + ".dat");
	if(myfile1.is_open())
	{
	
		i = 0;
		while(!myfile1.eof())
		{
			myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
			ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
			i++;
		}
		myfile1.close();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
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
	else
		cout << "--> Dosya acilamadi!" << endl;
}

int ilacAraBirEczanede(string tempEczaneIsim, string tempIlacIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	int islemBasarili = 0;
	int i=0;
	int ilacVar = 0;
	ilac ilaclar[10];
	ifstream myfile1(tempEczaneIsim + ".dat");
	if(myfile1.is_open())
	{
		i = 0;
		while(!myfile1.eof())
		{
			myfile1 >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
			ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
			i++;
		}
		myfile1.close();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
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
	}
	return ilacVar;
}

void ilacAraTumEczanelerde(string tempIlacIsim)
{
	int tempID;
	string tempIsim, tempAdres;
	eczane e[5];
	int islemBasarili = 0;
	int i = 0;
	ifstream myfile("eczane_listesi.dat");
	if(myfile.is_open())
	{
		i = 0;
		while(!myfile.eof())
		{
			myfile >> tempID  >> tempIsim >> tempAdres;
			e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
			i++;
		}
		myfile.close();
		islemBasarili = 1;
	}	
	int j=0;
	while(j<i)
	{
		ilacAraBirEczanede(e[j].getEczaneIsim(), tempIlacIsim);
		j++;
	}
}

void ilacIsimListesi(string tempEczaneIsim)
{
	int tempID, tempMiktar;
	double tempFiyat;
	string tempIsim;
	int islemBasarili = 0;
	int i=1;
	ilac ilaclar[10];
	ifstream myfile(tempEczaneIsim + ".dat");
	if(myfile.is_open())
	{
		i = 0;
		while(!myfile.eof())
		{
			myfile >> tempID  >> tempIsim >> tempMiktar >> tempFiyat;
			ilaclar[i].ilacOlustur(tempID, tempIsim, tempMiktar, tempFiyat);
			i++;
		}
		myfile.close();
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		cout << endl << " -- Ilaclar -- " << endl;
		int j = 0;
		while(j < i)
		{
			cout << "+  " << ilaclar[j].getIlacIsim() << endl;
			j++;
		}
		cout << endl;
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

void eczaneIsimListesi()
{
	int tempID;
	int islemBasarili = 0;
	int i;
	string tempIsim, tempAdres;
	eczane e[5];
	ifstream myfile("eczane_listesi.dat");
	if (myfile.is_open())
	{
		i = 0;
		while(!myfile.eof())
		{
			myfile >> tempID  >> tempIsim >> tempAdres;
			e[i].eczaneDuzenle(tempID, tempIsim, tempAdres);
			i++;
		}
		islemBasarili = 1;
	}
	if(islemBasarili)
	{
		cout << endl << " -- Eczaneler -- " << endl;
		int j = 0;
		while(j < i)
		{
			cout << "+  " << e[j].getEczaneIsim() << endl;
			j++;
		}
		myfile.close();
		cout << endl;
	}
	else
		cout << "--> Dosya acilamadi!" << endl;
}

int main()
{	
	int altIslem;
	int isAdmin;
	int password = 1234, tempPassword;
	string tempEczaneIsim, tempIlacIsim;
	int islemSayisi;
	cout << "Eczane otomasyonu baslatildi!" << endl << endl;
	eczaneListesiOlustur();
	ilacListesiOlusturEczaneIcin();
	while(1 == 1)
	{
		cout << endl  <<"Yoneticiyseniz		`1`\nDegilseniz		`2`\nGiriniz > ";
		cin >> isAdmin;
		cout << endl;
		switch(isAdmin)
		{
			case 1:
				cout << "---> Yonetici islemleri secildi" << endl;
				cout << "Lutfen sifre giriniz > ";
				cin >> tempPassword;
				if(password == tempPassword)
				{
					system("cls");
					cout << "Giris Basarili!" << endl << endl;
					cout << "Eczane listesi olustur islemi icin	`1`" << endl << "Eczane ekleme islemi icin		`2`" << endl;
					cout << "Ilac ekleme islemi icin			`3`" << endl << "Ilac duzenleme islemi icin		`4`" << endl;
					cout << "Yapmak istediginiz islemi giriniz > ";
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							cout << "--> Eczane listesi olustur islemi secildi" << endl << endl;
							eczaneListesiOlustur();
							ilacListesiOlusturEczaneIcin();
							cout << "--> Eczaneler ve Ilaclar listesi basariyla olusturuldu!" << endl << endl;
							break;

						case 2:
							cout << "--> Eczane ekleme islemi secildi" << endl << endl;
							cout << "Lutfen eklenicek eczane sayisini giriniz > ";
							cin >> islemSayisi;
							while(islemSayisi)
							{
								cout << endl << ">> Yeni Eczane" << endl;
								eczaneEkle();
								islemSayisi--;
							}
							break;

						case 3:
							cout << "--> Ilac ekleme islemi secildi" << endl << endl;
							eczaneIsimListesi();
							cout << "Ilacin eklenecegi eczaneyi giriniz > " << endl;
							cin >> tempEczaneIsim;
							cout << "Lutfen eklenicek ilac sayisini giriniz > ";
							cin >> islemSayisi;
							while(islemSayisi)
							{
								ilacEkleEczaneye(tempEczaneIsim);
								islemSayisi--;
							}							
							break;

						case 4:
							cout << "Ilac duzenleme islemi secildi" << endl << endl;
							eczaneIsimListesi();
							cout << "Bilgileri guncellenecek ilacin bulundugu eczanenin adini giriniz > ";
							cin >> tempEczaneIsim;
							ilacDuzenle(tempEczaneIsim);
							break;					
					}
				}
				else
				{
					cout << "Giris Basarisiz" << endl;
				}
				break;

			case 2:
				cout << "---> Musteri islemleri secildi" << endl;
					cout << "Giris Basarili!" << endl << endl;				
					cout << "Ilac arama islemi icin					`1`" << endl << "Eczane listeleme islemi icin				`2`" << endl;
					cout << "Herhangi bir eczaneyi gosterme islemi icin		`3`" << endl << "Herhangi bir eczaneye ait ilac listesi islemi icin	`4`" << endl;
					cout << "Yapmak istediginiz islemi giriniz > ";
					cin >> altIslem;
					cout << endl;
					switch(altIslem)
					{
						case 1:
							cout << "--> Ilac arama islemi secildi" << endl << endl;
							cout << "Aranacak ilacin adini giriniz > ";
							cin >> tempIlacIsim;
							ilacAraTumEczanelerde(tempIlacIsim);
							break;

						case 2:
							cout << "--> Eczane listeleme islemi secildi" << endl << endl;
							eczaneListesiOku();	
							break;

						case 3:
							cout << "--> Isme gore eczane bilgisi bastirma islemi secildi" << endl << endl;
							eczaneIsimListesi();
							cout << "Eczanenin adini giriniz >" << endl;
							cin >> tempEczaneIsim;
							eczaneGosterAdaGore(tempEczaneIsim);
							break;

						case 4:
							cout << "--> Eczane ismine gore ilac listesi bastirma islemi secildi" << endl << endl;
							eczaneIsimListesi();
							cout << "Eczanenin adini giriniz >" << endl;
							cin >> tempEczaneIsim;
							ilacListesiOkuDosyadanEczaneIcin(tempEczaneIsim);
							break;					
					}
				break;
		}
	}
	return 0;
} 
