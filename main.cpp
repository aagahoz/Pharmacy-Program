#include <string>
#include <iostream>
#include <fstream>
using namespace std;

inline void deneme()
{	cout << "deneme" << endl;	}

class eczane
{
		int eczaneID;
		char eczaneIsim[10];
		char eczaneAdres[100];
		
	public:
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
};

class ilac
{
		int ilacID;
		char ilacIsim[10];
		int ilacMiktar;
		double ilacFiyat;
		
	public:
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
		
		void ilacOlustur(int ilacID, char ilacIsim[10], int ilacMiktar, double ilacFiyat)
		{
			this->ilacID = ilacID;
			strcpy(this->ilacIsim, ilacIsim);
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


string datEkle(char *tempCharArray);
void eczaneIsimListesiOlustur();
void eczaneleriDosyadanAlEkranaBas();
int bulEczaneSayisiDosyadan();
int bulIlacSayisiDosyadan(char *tempEczaneName);
void eczaneEkleDosyaya();
void birEczaneBilgiBul(char tempEczaneIsim[10]);
void eczaneOlusturDosyaya();
void birEczaneBilgiBulEczaneDosyasindan(char tempEczaneIsim[20]);
int ilacAraTekEczanedeDosyadan(char ilacIsim[20], char tempEczaneIsim[20]);
void ilacAraGenelEczaneListesiDosyasindan(char ilacIsim[20]);
void ilacEkleDosyaya(char tempEczaneIsim[20]);
void ilacDuzenleDosyadan(char tempEczaneIsim[20]);
int eczaneVarMiEczaneDosyasinda(char tempEczaneIsim[20]);
void ilacIsimleriniBastirMenuIcin(char tempEczaneIsim[20]);
void eczaneIsimleriniBastirMenuIcin(char tempEczaneIsim[20]);
//eczane *eczaneOkuDosyadan();
//void eczaneleriYazDosyaya(eczane *eskiEczaneler, eczane yeniEczane);


string datEkle(char *tempCharArray)
{
	string str = string(tempCharArray);
	str.append(".dat");
	return str;
}

void eczaneIsimListesiOlustur() 
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

void eczaneleriDosyadanAlEkranaBas()
{
	eczane e[10];
	
    fstream f;
	f.open("eczane_listesi.dat", ios::in);
	f.read((char *) &e[0], sizeof(e[0]));
	
	int i = 0;
	while(!f.eof())
	{
		i++;
		f.read((char *) &e[i], sizeof(e[i]));	
	}
		
	int j = 0;
	while(j <= i - 1)
	{
			e[j].showInfos();
			j++;
	}
	f.close();
}

int bulEczaneSayisiDosyadan()
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

int bulIlacSayisiDosyadan(char *tempEczaneName)
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
	int eczaneSayisi = bulEczaneSayisiDosyadan();
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

void birEczaneBilgiBulEczaneDosyasindan(char tempEczaneIsim[10])
{
	fstream f;
	f.open("eczane_listesi.dat", ios::in);

	int eczaneSayisi = bulEczaneSayisiDosyadan();
	int i = 0;
	eczane e[eczaneSayisi + 1];
	
	while(i < eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		if(!strcmp(tempEczaneIsim, e[i].getEczaneIsim()))
		{
			e[i].showInfos();
			break;
		}
		i++;	
	}
	f.close();
}

void eczaneOlusturDosyaya()
{
	ilac i[5];
	i[0].ilacOlustur(1,"Penisilin", 5, 23.99);
	i[1].ilacOlustur(2,"Adrenalin ", 3, 12.54);
	i[2].ilacOlustur(3,"Insulin", 1, 323.2);
	i[3].ilacOlustur(4,"Eter", 0, 12.64);
	i[4].ilacOlustur(5,"Kortizon", 12, 3.54);
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
	
	ilac ii[3];
	ii[0].ilacOlustur(1,"Metotreksat", 5, 23.99);
	ii[1].ilacOlustur(2,"Aspirin", 3, 12.54);
	ii[2].ilacOlustur(3,"İnsüMorfin", 1, 323.2);
	f.open("Arapcesme.dat", ios::out);
	j = 0;
	while(j < 3)
	{
		f.write((char*)&ii[j], sizeof(ii[j]));
		j++;
	}
	f.close();
}

void birEczaneIlacListesiDosyadan(char tempEczaneIsim[20])
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
	
	int k = 0;
	while(k <= j - 1)
	{
		i[k].showInfos();
		k++;
	}
	f.close();
}

int ilacAraTekEczanedeDosyadan(char ilacIsim[20], char tempEczaneIsim[20])
{
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	
	int ilacSayisi = bulIlacSayisiDosyadan(tempEczaneIsim);
	ilac i[ilacSayisi];

	int varMi = 0;

	int j = 0;
	while(j < ilacSayisi)
	{
		j++;
		f.read((char *) &i[j], sizeof(i[j]));
		if(!strcmp(i[j].getIlacIsim(), ilacIsim))
		{
			if(i[j].getIlacMiktar() > 0)
			{
				cout << tempEczaneIsim << " eczanesinde " << i[j].getIlacMiktar() << " adet vardir " << endl;
				varMi = 1;
			}
		}
	}
	if(!varMi)
		cout << ilacIsim << " "<< tempEczaneIsim << " eczanesinde bulunmamaktadir " << endl;
	f.close();
	return varMi;
}

void ilacAraGenelEczaneListesiDosyasindan()
{
	char ilacIsim[20];
	cout << "Aradiginiz ilacin ismini giriniz > ";
	cin >> ilacIsim;
	
	int eczaneSayisi = bulEczaneSayisiDosyadan();
	
	eczane e[eczaneSayisi];
	char eczaneIsimleri[eczaneSayisi][20];
	
	int ilacBulunma = 0;
    
	fstream f;
	f.open("eczane_listesi.dat", ios::in);
	
	int i = 0;
	while(i < eczaneSayisi)
	{
		f.read((char *) &e[i], sizeof(e[i]));
		strcpy(eczaneIsimleri[i], e[i].getEczaneIsim());
		i++;
	}
	f.close();	
	
	while(i > 0 && !ilacBulunma)
	{
		i--;
		ilacBulunma = ilacAraTekEczanedeDosyadan(ilacIsim, eczaneIsimleri[i]);
	}
}

void ilacEkleDosyaya(char tempEczaneIsim[20])
{
	fstream f;
	f.open(datEkle(tempEczaneIsim), ios::in);
	
	int ilacSayisi = bulIlacSayisiDosyadan(tempEczaneIsim);
	
	ilac i[ilacSayisi + 1];
	
	int j = 0;
	while(j < ilacSayisi)
	{
		f.read((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
	
	i[j].ilacEkle();
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
	
	int ilacSayisi = bulIlacSayisiDosyadan(tempEczaneIsim);
	
	ilac i[ilacSayisi];
	
	int j = 0;
	while(j < ilacSayisi)
	{
		f.read((char*)&i[j], sizeof(i[j]));
		j++;
	}
	f.close();
	
	ilacIsimleriniBastirMenuIcin(tempEczaneIsim);
	char tempIlacIsim[20];
	cout << "Bilgilerini degistirmek istediginiz ilacin adini giriniz > ";
	cin >> tempIlacIsim;
	
	int varMi = 0;
	for (j = 0; j < ilacSayisi; j++)
	{
		if (!strcmp(tempIlacIsim, i[j].getIlacIsim()))
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

int eczaneVarMiEczaneDosyasinda(char tempEczaneIsim[20])
{
	int eczaneSayisi = bulEczaneSayisiDosyadan();
	eczane e[eczaneSayisi];
	
	int varMi = 0;
	
	fstream f;
	f.open("eczane_listesi.dat", ios::in);
	
	f.read((char *) &e[0], sizeof(e[0]));
	if(!strcmp(e[0].getEczaneIsim(), tempEczaneIsim))
	{
		varMi = 1;
	}

	int i = 0;
	while(!f.eof())
	{
		i++;
		f.read((char *) &e[i], sizeof(e[i]));
		if(!strcmp(e[i].getEczaneIsim(), tempEczaneIsim))			
			varMi = 1;	
	}
	f.close();
	return varMi;	
}

void ilacIsimleriniBastirMenuIcin(char tempEczaneIsim[20])
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
	
	cout << endl << "Ilac Isimlari" << endl;
	while(j - 1 >= 0)
	{
		cout <<" * " << i[j - 1].getIlacIsim() << endl;
		j--;
	}
	f.close();
}

void eczaneIsimleriniBastirMenuIcin()
{
	eczane e[10];
	
    fstream f;
	f.open("eczane_listesi.dat", ios::in);
	f.read((char *) &e[0], sizeof(e[0]));
	
	int i = 0;
	while(!f.eof())
	{
		i++;
		f.read((char *) &e[i], sizeof(e[i]));	
	}
	
	cout << endl << "Eczane Isimlari" << endl;
	int j = 0;
	while(j <= i - 1)
	{
			cout << " * " << e[j].getEczaneIsim() << endl;
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

/*
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
*/


int main()
{
	/*
	Eczanenin ilacin olmadigi durumlardaki olusan hatalar giderilecek
	*/
	
	
	int altIslem;             
	int isAdmin;
	int islemSayisi;
	char tempEczaneIsim[10];
	int password = 1234, tempPassword;
	eczaneIsimListesiOlustur();
	eczaneOlusturDosyaya();	
	cout << endl << "Eczane otomasyonu baslatildi!" << endl << endl;
	while(1 == 1)
	{
		cout << "Yoneticiyseniz `1`\nDegilseniz `2`\nGiriniz > ";
		cin >> isAdmin;
		cout << endl;
		switch(isAdmin)
		{
			case 1:
				cout << "Yonetici islemleri secildi!" << endl;
				cout << "Lutfen sifre giriniz > ";
				cin >> tempPassword;
				if(password == tempPassword)
				{
					system("cls");
					cout << "Giris Basarili!" << endl << endl;
					
					cout << ">> Eczane listesi olustur islemi icin	`1`" << endl << ">> Eczane ekleme islemi icin		`2`" << endl;
					cout << ">> Ilac ekleme islemi icin		`3`" << endl << ">> Ilac duzenleme islemi icin		`4`" << endl;
					
					cout << endl << "Yapmak istediginiz islemi giriniz > ";
					cin >> altIslem;
					cout << endl;
					system("cls");
					
					switch(altIslem)
					{
						case 1:
							cout << endl << ">> Eczane listesi dosyasi olustur islemi secildi!" << endl << endl;
							eczaneIsimListesiOlustur();
							cout << ">> Eczane listesi dosyasi basariyla olusturuldu!" << endl << endl;
							cout << endl;
							break;
						
						case 2:
							cout << ">> Eczane ekleme islemi secildi" << endl;
							cout << "Lutfen eklenicek eczane sayisini giriniz > ";
							cin >> islemSayisi;
							while(islemSayisi)
							{
								cout << endl << ">> Yeni Eczane" << endl;
								eczaneEkleDosyaya();
								islemSayisi--;
							}
							cout << endl << ">> Dosyaya eczaneler basariyla eklendi!" << endl << endl;
							break;
								
						case 3:
							cout << ">> Ilac ekleme islemi secildi" << endl << endl;
							eczaneIsimleriniBastirMenuIcin();
							cout << "Ilac eklenicek eczanenin adini giriniz > ";
							cin >> tempEczaneIsim;
							if(eczaneVarMiEczaneDosyasinda(tempEczaneIsim))
							{
								cout << "Lutfen eklenicek ilac sayisini giriniz > ";
								cin >> islemSayisi;
								while(islemSayisi)
								{
									ilacEkleDosyaya(tempEczaneIsim);
									islemSayisi--;
								}
							}
							else
							{
								cout << "> Aradiginiz eczane bulunamadi, ilac ekleme islemi iptal edildi!";
							}
							break;
							
						case 4:
							cout << ">> Ilac duzenleme islemi secildi" << endl;
							eczaneIsimleriniBastirMenuIcin();
							cout << "Ilaci aradiginiz eczanenin ismini giriniz > ";
							cin >> tempEczaneIsim;
							
							ilacDuzenleDosyadan(tempEczaneIsim);
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
				
				cout << ">> Ilac arama islemi icin				`1`" << endl << ">> Eczane listeleme islemi icin				`2`" << endl;
				cout << ">> Herhangi bir eczaneyi gosterme islemi icin		`3`" << endl << ">> Herhangi bir eczaneye ait ilac listesi islemi icin	`4`" << endl;
				
				cout << "Yapmak istediginiz islemi giriniz > ";
				cin >> altIslem;
				system("cls");
			
				switch(altIslem)
				{
					case 1:
						cout << ">> Ilac ara islemi secildi" << endl;
						ilacAraGenelEczaneListesiDosyasindan();
						break;
					
					case 2:
						cout << ">> Eczane listele islemi secildi" << endl;
						eczaneleriDosyadanAlEkranaBas();
						break;
							
					case 3:
						cout << ">> Herhangi bir eczaneyi arama islemi secildi" << endl;
						
						eczaneIsimleriniBastirMenuIcin();
						cout << "Eczanenin adini giriniz > ";
						cin >> tempEczaneIsim;
						
						birEczaneBilgiBulEczaneDosyasindan(tempEczaneIsim);
						break;
							
					case 4:
						cout << ">> Herhangi bir eczaneye ait ilaclari arama islemi secildi" << endl;
						cout << ">> Herhangi bir eczaneyi arama islemi secildi" << endl;
						
						eczaneIsimleriniBastirMenuIcin();
						cout << "Eczanenin adini giriniz > ";
						cin >> tempEczaneIsim;
						
						birEczaneIlacListesiDosyadan(tempEczaneIsim);
						break;								
				}
				break;
		}
	}
	return 0;
}
