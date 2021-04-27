#include <string>
#include <iostream>
#include <fstream>
using namespace std;

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
			cout << "ID > " << this->eczaneID  << " Isim > " << this->eczaneIsim << " Adres > " << this->eczaneAdres << endl;
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
		
		void input_Eczane();
		void eczaneOkuDosyadan();
};

/*
void input_Eczane()
{
	int ID1 = 1, ID2 = 2, ID3 = 3, ID4 = 4;
	char *name1 = "Cicek"; char *name2 = "Arapcesme"; char *name3 = "Baris"; char *name4 = "Sifa";
	char *adres1 = "MustafapasaMah."; char *adres2 = "ArapcesmeMah."; char *adres3 = "MustafapasaMah."; char *adres4 = "SifaMah";

	eczane e1, e2, e3, e4;
	e1.setEczaneID(ID1);			e2.setEczaneID(ID2); 			e3.setEczaneID(ID3); 			e4.setEczaneID(ID4);
	e1.setEczaneIsim(name1);		e2.setEczaneIsim(name2);		e3.setEczaneIsim(name3);		e4.setEczaneIsim(name4);
	e1.setEczaneAdres(adres1);		e2.setEczaneAdres(adres2);		e3.setEczaneAdres(adres3);		e4.setEczaneAdres(adres4);

	FILE *f = fopen("eczane_listesi.dat", "wb");
	fwrite((char*)&e1, sizeof(e1), 1, f);
	fwrite((char*)&e2, sizeof(e2), 1, f);
	fwrite((char*)&e3, sizeof(e3), 1, f);
	fwrite((char*)&e4, sizeof(e4), 1, f);
	fclose(f);
}

void eczaneOkuDosyadan()
{
	eczane e1,e2,e3,e4;
	
	dosyaIsim = "eczane_listesi.dat";
	FILE *f = fopen(dosyaIsim, "rb");
	
	fread((char*)&e1, sizeof(e1), 1, f);
	fread((char*)&e2, sizeof(e2), 1, f);
	fread((char*)&e3, sizeof(e3), 1, f);
	fread((char*)&e4, sizeof(e4), 1, f);

	e1.showInfos();
	e2.showInfos();
	e3.showInfos();
	e4.showInfos();
	fclose(f);
}
*/
void eczane::input_Eczane()
{
	int ID1 = 1, ID2 = 2, ID3 = 3, ID4 = 4;
	char *name1 = "Cicek"; char *name2 = "Arapcesme"; char *name3 = "Baris"; char *name4 = "Sifa";
	char *adres1 = "MustafapasaMah."; char *adres2 = "ArapcesmeMah."; char *adres3 = "MustafapasaMah."; char *adres4 = "SifaMah";

	eczane e1, e2, e3, e4;
	e1.setEczaneID(ID1);			e2.setEczaneID(ID2); 			e3.setEczaneID(ID3); 			e4.setEczaneID(ID4);
	e1.setEczaneIsim(name1);		e2.setEczaneIsim(name2);		e3.setEczaneIsim(name3);		e4.setEczaneIsim(name4);
	e1.setEczaneAdres(adres1);		e2.setEczaneAdres(adres2);		e3.setEczaneAdres(adres3);		e4.setEczaneAdres(adres4);

	fstream f;
	f.open("eczane.dat",ios::app|ios::binary);
	f.write((char*)&e1, sizeof(e1));
	f.write((char*)&e2, sizeof(e2));
	f.write((char*)&e3, sizeof(e3));
	f.write((char*)&e4, sizeof(e4));
	f.close();
}

void eczane::eczaneOkuDosyadan()
{
	eczane e1,e2,e3,e4;

    fstream f;
	f.open("eczane.dat", ios::in|ios::binary);	
	f.read( (char *) &e1, sizeof(e1));
	f.read( (char *) &e2, sizeof(e2));
	f.read( (char *) &e3, sizeof(e3));
	f.read( (char *) &e4, sizeof(e4));


	e1.showInfos();
	e2.showInfos();
	e3.showInfos();
	e4.showInfos();
	f.close();
}

int main()
{
	eczane e1;
//	e1.input_Eczane();

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
							e1.eczaneOkuDosyadan();
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
							cout << "Ilac ara islemi secildi" << endl;
							break;
						
						case 2:
							cout << "Eczane listele islemi secildi" << endl;
							
							break;
							
						case 3:
							cout << "Herhangi bir eczaneyi arama islemi secildi" << endl;
							break;
							
						case 4:
							cout << "Herhangi bir ilaci arama islemi secildi" << endl;
							break;					
					}
				break;
		}
	}
	return 0;
}
