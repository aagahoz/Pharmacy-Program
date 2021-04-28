#include <string>
#include <iostream>
#include <fstream>
using namespace std;

inline void deneme()
{	cout << "deneme" << endl;	}

class eczane
{
	public:
		int eczaneID;
		char eczaneIsim[10];
		char eczaneAdres[100];
	
		eczane()
		{
			this->eczaneID = 0;
			strcpy(this->eczaneIsim, "NULL");
			strcpy(this->eczaneAdres, "NULL");
			//cout << "Obje Default Olusturuldu" << endl;
		}
		
		eczane(int eczaneID, char eczaneIsim[10], char eczaneAdres[100])
		{
			this->eczaneID = eczaneID;
			strcpy(this->eczaneIsim, eczaneIsim);
			strcpy(this->eczaneAdres, eczaneAdres);
			//cout << "Obje Argumanla Olusturuldu" << endl;
		}
		/*
		eczane(const eczane &ecz)
		{
			cout << "Obje Copy Constructor ile Olusturuldu" << endl;
		}
		eczane& operator = (const eczane &ecz)
		{
			cout << "Obje Assigment Operator ile Olusturuldu" << endl;
			return *this;
		}
		*/
		void showInfos()
		{
			cout << "	ID > " << this->eczaneID << endl << "	Isim > " << this->eczaneIsim << endl << "	Adres > " << this->eczaneAdres << endl << endl;
		}
		
		void setEczaneID(int eczaneID)
		{
			this->eczaneID = eczaneID;
		}
		void setEczaneIsim(char eczaneIsim[10])
		{
			strcpy(this->eczaneIsim, eczaneIsim);
		}
		void setEczaneAdres(char eczaneAdres[100])
		{
			strcpy(this->eczaneAdres, eczaneAdres);
		}
		
		int getEczaneID()
		{
			return this->eczaneID;
		}
		char *getEczaneIsim()
		{
			return this->eczaneIsim;
		}
		char *getEczaneAdres()
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
		/*
		void input_Eczane(int eczaneSayisi);
		eczane *eczaneOkuDosyadan(int eczaneSayisi);
		void eczaneleriBirlestir(int eczaneSayisi, eczane yeniEczane);
		void eczaneleriYazDosyaya(eczane *eskiEczaneler, eczane yeniEczane, int eczaneSayisi);
		void eczaneleriEkranaBas(eczane *eczaneler, int eczaneSayisi);
		*/
};

class ilac
{
	public:
		int ilacID;
		char ilacIsim[10];
		int ilacMiktar;
		double ilacFiyat;

		ilac()
		{
			this->ilacID = 0;
			strcpy(this->ilacIsim, "Null");
			this->ilacMiktar = 0;
			this->ilacFiyat = 0;
			//cout << "Obje Default Olusturuldu" << endl;
		}
		
		ilac(int ilacID, char ilacIsim[10], int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			strcpy(this->ilacIsim, "Null");
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
		void setIlacIsim(char *ilacIsim)
		{
			strcpy(this->ilacIsim, ilacIsim);
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
		char *getIlacIsim()
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
		void ilacEkle(int ilacID, char ilacIsim[10], int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			strcpy(this->ilacIsim, ilacIsim);
			this->ilacMiktar = ilacMiktar;
			this->ilacFiyat = ilacFiyat;
		}
		void ilacDuzenle()
		{
			cout << "Sirasiyla Giriiniz!" << endl;
			cout << "	ID > ";
			cin >> this->ilacID;
			cout << "	Isim > ";
			cin >> this->ilacIsim;
			cout << "	Miktar > ";
			cin >> this->ilacMiktar;
			cout << "	Fiyat > ";
			cin >> this->ilacFiyat;	
			cout << "Bilgiler Girildi!" << endl;
		}
		
};

void input_Eczane();
string datEkle(char *tempCharArray);
int bulEczaneSayisi();
int bulIlacSayisi(char *tempEczaneName);
void eczaneleriYazDosyaya(eczane *eskiEczaneler, eczane yeniEczane);
void eczaneleriEkranaBas();
void eczaneEkleDosyaya();
void birEczaneBilgiBul(char tempEczaneIsim[10]);
void eczaneOlustur();
void birEczaneIlacListesi(char tempEczaneIsim[20]);
int ilacAraTekEczanede(char ilacIsim[20], char tempEczaneIsim[20]);
void ilacAraGenel(char ilacIsim[20]);
void ilacEkleDosyaya(char tempEczaneIsim[20]);
void ilacDuzenleDosyadan(char tempEczaneIsim[20]);
//eczane *eczaneOkuDosyadan();

void input_Eczane()
{
	int eczaneSayisi = 2;
	int ID1 = 1; 
	int ID2 = 2;
	char *name1 = "Cicek"; 
	char *name2 = "Arapcesme";
	char *adres1 = "Mustafapasa Mah."; 
	char *adres2 = "Arapcesme Mah."; 

	
	eczane e[eczaneSayisi];
	e[0].setEczaneID(ID1);			e[1].setEczaneID(ID2);
	e[0].setEczaneIsim(name1);		e[1].setEczaneIsim(name2);
	e[0].setEczaneAdres(adres1);	e[1].setEczaneAdres(adres2);

	fstream f;
	f.open("eczane_listesi.dat",ios::out);

	int i = 0;
	while(i<eczaneSayisi)
	{
		f.write((char*)&e[i], sizeof(e[i]));
		i++;
	}
	f.close();
}

void eczaneleriYazDosyaya(eczane *eskiEczaneler, eczane yeniEczane)
{
	int eczaneSayisi = bulEczaneSayisi();
	
	fstream f;
	f.open("eczane_listesi1.dat",ios::app);
	int i = 0;

	eczane *tempPtr = eskiEczaneler;
	eczane tempE(1,"agah", "Osmanyilmaz");

	while(i<eczaneSayisi)
	{
		cout << "bitti" << endl;

		f.write((char*)&tempPtr[i], sizeof(tempPtr[i]));
		i++;
	}
	f.write((char*)&tempE, sizeof(tempE));
	f.close();
}

void eczaneleriEkranaBas()
{
	eczane e[4];
	
    fstream f;
	f.open("eczane_listesi.dat", ios::in);
	f.read((char *) &e[0], sizeof(e[0]));
	
	int i = 0;
	while(!f.eof())
	{
		i++;
		f.read((char *) &e[i], sizeof(e[i]));	
	}
	
	cout << "Eczane Sayisi > " << i << endl << endl;
	
	while(i - 1 >= 0)
	{
			e[i-1].showInfos();
			i--;
	}
	f.close();
}

int bulEczaneSayisi()
{
	eczane e[10];
	fstream f;
	f.open("eczane_listesi.dat", ios::in);
	
	f.read((char*)&e[0], sizeof(e[0]));
	
	int i = 0;
	while(!f.eof())
	{
		i++;
		f.read((char*)&e[i], sizeof(e[i]));
	}
	return i;
}

int bulIlacSayisi(char *tempEczaneName)
{
	ilac i[15];
	
	fstream f;	
	f.open(datEkle(tempEczaneName), ios::in);

	f.read((char*)&i[0], sizeof(i[0]));	
	int j = 0;
	while(!f.eof())
	{
		j++;
		f.read((char*)&i[j], sizeof(i[j]));
	}
	return j;
}

void eczaneEkleDosyaya()
{
	int eczaneSayisi = bulEczaneSayisi();
	fstream f;
	f.open("eczane_listesi.dat", ios::in);

	eczane e[eczaneSayisi + 1];

	int i = 0;
	while(i < eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		i++;
	}
	e[eczaneSayisi].eczaneEkle();
	f.close();	
	eczaneSayisi++;
	f.open("eczane_listesi.dat",ios::out);
	i = 0;
	while(i < eczaneSayisi)
	{
		f.write((char*)&e[i], sizeof(e[i]));
		i++;
	}
	f.close();
}

void birEczaneBilgiBul(char tempEczaneIsim[10])
{
	fstream f;
	f.open("eczane_listesi.dat", ios::in);

	int eczaneSayisi = bulEczaneSayisi();
	int i = 0;
	eczane e[eczaneSayisi + 1];
	
	while(i < eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		if(strcmp(tempEczaneIsim, e[i].eczaneIsim))
		{
			e[i].showInfos();
			break;
		}
		i++;	
	}
	f.close();
}

void eczaneOlustur()
{
	ilac i[5];
	i[0].ilacEkle(1,"Penisilin", 5, 23.99);
	i[1].ilacEkle(2,"Adrenalin ", 3, 12.54);
	i[2].ilacEkle(3,"Insulin", 1, 323.2);
	i[3].ilacEkle(4,"Eter", 0, 12.64);
	i[4].ilacEkle(5,"Kortizon", 12, 3.54);
	int ilacSayisi = 5;
	
	fstream f;
	f.open("Cicek.dat", ios::out);

	int j = 0;
	while(j < ilacSayisi)
	{
		f.write((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
	/*
	ilac ii[3];
	ii[0].ilacEkle(1,"Metotreksat", 5, 23.99);
	ii[1].ilacEkle(2,"Aspirin", 3, 12.54);
	ii[2].ilacEkle(3,"İnsüMorfin", 1, 323.2);

	f.open("Arapcesme.dat", ios::out);
	j = 0;
	while(j < 3)
	{
		f.write((char*)&ii[j], sizeof(ii[j]));
		j++;
	}
	f.close();
	*/
}

void birEczaneIlacListesi(char tempEczaneIsim[20])
{
	ilac i[15];
	
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	f.read((char*)&i[0], sizeof(i[0]));

	int j = 0;
	while(!f.eof())
	{
		j++;
		f.read((char*)&i[j], sizeof(i[j]));
	}
	
	while(j - 1 >= 0)
	{
		i[j - 1].showInfos();
		j--;
	}
	f.close();
}

int ilacAraTekEczanede(char ilacIsim[20], char tempEczaneIsim[20])
{
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	
	int ilacSayisi = bulIlacSayisi(tempEczaneIsim);
	ilac i[ilacSayisi];

	int varMi = 0;

	int j = 0;
	while(j < ilacSayisi)
	{
		j++;
		f.read((char *) &i[j], sizeof(i[j]));
		if(!strcmp(i[j].ilacIsim, ilacIsim))
		{
			if(i[j].ilacMiktar > 0)
			{
				cout << tempEczaneIsim << " eczanesinde " << i[j].ilacMiktar << " adet vardir " << endl;
				varMi = 1;
			}
		}
	}
	if(!varMi)
		cout << ilacIsim << " "<< tempEczaneIsim << " eczanesinde bulunmamaktadir " << endl;
	f.close();
	return varMi;
}

void ilacAraGenel(char ilacIsim[20])
{
	int eczaneSayisi = bulEczaneSayisi();
	
	eczane e[eczaneSayisi];
	char eczaneIsimleri[eczaneSayisi][20];
	
	int ilacBulunma = 0;
    
	fstream f;
	f.open("eczane_listesi.dat", ios::in);
	
	int i = 0;
	while(i < eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		strcpy(eczaneIsimleri[i], e[i].eczaneIsim);
		i++;
	}
	f.close();	
	
	while(i > 0 && !ilacBulunma)
	{
		i--;
		ilacBulunma = ilacAraTekEczanede(ilacIsim, eczaneIsimleri[i]);
	}
}

string datEkle(char *tempCharArray)
{
	string str = string(tempCharArray);
	str.append(".dat");
	return str;
}

void ilacEkleDosyaya(char tempEczaneIsim[20])
{
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	
	int ilacSayisi = bulIlacSayisi(tempEczaneIsim);
	
	ilac i[ilacSayisi + 1];
	
	int j = 0;
	while(j < ilacSayisi)
	{
		f.read((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
	
	i[j].ilacEkle(12, "Mannitol ", 5, 65.3);
	ilacSayisi++;
	
	f.open(datEkle(tempEczaneIsim), ios::out);
	
	j = 0;
	while(j < ilacSayisi)
	{
		f.write((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
}

void ilacDuzenleDosyadan(char tempEczaneIsim[20])
{
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	
	int ilacSayisi = bulIlacSayisi(tempEczaneIsim);
	
	ilac i[ilacSayisi];
	
	int j = 0;
	while(j < ilacSayisi)
	{
		f.read((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
	
	char tempIlacIsim[20];
	cout << "Bilgilerini degistirmek istediginiz ilacin adini giriniz > ";
	cin >> tempIlacIsim;
	int varMi = 0;
	for (j = 0; j < ilacSayisi; j++)
	{
		if (!strcmp(tempIlacIsim, i[j].ilacIsim))
		{
			cout << "Ilac Bulundu!" << endl;
			i[j].ilacDuzenle();
			varMi = 1;
		}
	}
	if (varMi == 0)
		cout << "Bilgilerini degistirmek istediginiz ilac bu eczanede yok!" << endl;
	
	f.open(datEkle(tempEczaneIsim), ios::out);
	j = 0;
	while(j < ilacSayisi)
	{
		f.write((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
}

/*
eczane *eczaneOkuDosyadan()
{
	int eczaneSayisi = bulEczaneSayisi();
	eczane e[eczaneSayisi];
	
    fstream f;
	f.open("eczane_listesi.dat", ios::in);
	
	int i = 0;
	while(i<eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		i++;
	}
	f.close();
	return e;
}
*/

int main()
{
	input_Eczane();
//	eczaneEkleDosyaya();
//	eczaneOkuDosyadan();
//	eczaneleriEkranaBas();
//	eczaneOlustur();
//	cout << bulEczaneSayisi();
	eczaneOlustur();
//	birEczaneIlacListesi("Cicek");
//	ilacAraTekEczanede("Eter", "Cicek");
//	ilacAraGenel("Aspirin");
//	ptr = eczaneOkuDosyadan();
//	ilacEkleDosyaya("Cicek");
//	birEczaneIlacListesi("Cicek");
//	cout << "Ilac Sayisi > " << bulIlacSayisi("Cicek");
//	ilacDuzenleDosyadan("Cicek");
//	birEczaneIlacListesi("Cicek");
	
	
	return 0;
	int altIslem;             
	int isAdmin;
	char tempEczaneIsim[10];
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
							input_Eczane();

							break;
						
						case 2:
								cout << "Eczane ekleme islemi secildi" << endl;
								eczaneEkleDosyaya();	
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
							cout << "Ilac ara islemi secildi" << endl;

							break;
						
						case 2:
							cout << "Eczane listele islemi secildi" << endl;
							eczaneleriEkranaBas();
							break;
							
						case 3:
							cout << "Herhangi bir eczaneyi arama islemi secildi" << endl;
							cout << "Eczane Adini Giriniz > ";
							cin >> tempEczaneIsim;
							birEczaneBilgiBul(tempEczaneIsim);
							break;
							
						case 4:
							cout << "Herhangi bir eczaneye ait ilaclari arama islemi secildi" << endl;
							birEczaneIlacListesi("eczane1.dat");
							break;					
					}
				break;
		}
	}
	return 0;
}
