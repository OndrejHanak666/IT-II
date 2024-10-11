// ukol 1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

double NajdiMedian(vector<int>& cisla)           // AI
{
	sort(cisla.begin(), cisla.end());         // seradi cisla podle velikosti
	int n = cisla.size();
	if (n % 2 != 0)
	{
		return cisla[n / 2];
	}

	else
		return (cisla[n / 2 - 1] + cisla[n / 2]) / 2.0;
}

int main()
{
	int n;
	double median;
	int soucet = 0;
	float soucin = 1;
	float prumernahodnota;

	cout << "Kolik cisel chcete zadat?" << endl;
	while (true)
	{
		cin >> n;
		if (cin.fail())
		{
			cout << "Neplatny vstup! Zadejte cislo!";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
		
	}
	
	
	cout << "Zadejte " << n << " cisel:" << endl;

	vector<int>cisla(n);
	

	for (int i = 0; i < n; i++)        // zadani cisel a ošetření vyjimek
	{

		while (true) 
		{
			cin >> cisla[i];
			if (cin.fail())
			{
				cout << "Neplatny vstup! Zadejte cislo!";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else
			{
				break;
			}
		}
		
	}
	sort(cisla.begin(), cisla.end());         // seradi cisla podle velikosti

	cout << "\n\n";
	cout << "Vase cisla: ";
	for (int i = 0; i < n; i++)       // zobrazeni zadanych cisel
	{
		cout << cisla[i] << " ";
	}

	for (int i = 0; i < n; i++)           // soucet zadanych cisel
	{
		soucet += cisla[i];
	}
	cout <<"\n" << "Soucet cisel je: " << soucet << endl;

	for (int i = 0; i < n; i++)           // soucin zadanych cisel
	{
		soucin *= cisla[i];
	}
	cout <<  "Soucin cisel je: " << soucin << endl;

	prumernahodnota = (float)soucet / n;            //prumerna hodnota
	cout << "Prumerna hodnota cisel je: " << prumernahodnota << endl;


	
	//median = NajdiMedian(cisla);               median funkci(AI)

	for (int i = 0; i < n; i++)           // median zadanych cisel
	{
		if (n % 2 != 0)
		{
			median = cisla[n / 2];
		}
		else
			median = (cisla[n / 2 - 1] + cisla[n / 2]) / 2.0;
	}
	
	cout << "Median cisel je: " << median << endl;
	return 0;

}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
