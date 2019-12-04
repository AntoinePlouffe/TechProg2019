/// <summary> 
/// Ce programme calcul les pairs ou impairs se trouvant avant la valeur entree.
/// Author: Maxime Lavergne
/// Date: 09/2017
/// </summary>

#include <istream>
#include <iostream>
using namespace std;

using std::cin;
using std::endl;

int main()
{
	cout << "+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl;
	cout << "Ce programme calcul les pairs ou impairs se trouvant avant la valeur entree." << endl;
	cout << "+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl << endl;

	do
	{
		cout << "Entrer un nombre: ";
		int chiffre = 0;
		cin >> chiffre;

		// Valeur sentinelle entree, quittons la boucle do-while
		if (chiffre == -1) 
		{
			break;
		}

		int resultat = 0;

		// Le chiffre est pair 
		if (chiffre % 2 == 0)
			for (int i = 0; i < chiffre; i++)
			{
				if (i % 2 == 0)
				{
					resultat += i;
				}
				
			}
		// Le chiffre est impair
		else
		{
			for (int i = 0; i < chiffre; i++)
			{
				if (i % 2 == 0)
				{

				}
				else
				{
					resultat += i;
				}
			}
		}

		// Affichage du resultat
		cout << "Le resultat est: " << resultat << endl << endl;

	} while (true);
}