#include <stdio.h>

class Roman {
public:
	const char* titre;
	const char* auteur;
	int date_néssance_dauteur;
	int date_mort_dauteur;
	int siécle;
	int date_décriture;
	int date_de_parution;
	const char* genre;
	
	Roman(const char* Titre, const char* Auteur, int DateNessance, int DateMort , int Siécle, int DateEcrit, int DateParution, const char* Genre):
		titre(Titre), auteur(Auteur), date_néssance_dauteur(DateNessance), date_mort_dauteur(DateMort),
		siécle(Siécle), date_décriture(DateEcrit), date_de_parution(DateParution), genre(Genre){}

	~Roman(){
		//7tta idoz ljihawi o nsa dakchi
	}
};

int main (int argc, char** argv){

	Roman la_boite("la boite à merveilles", "Ahmed SEFRIOUI", 1915, 2004, 20, 1952, 1954, "Roman autobiographique");
	Roman antigone("Antigone", "Jean ANOUILH",1910 ,1987 ,20 , 1942, 1944, "Trajédie Moderne");
	Roman le_dernier_jour("le dernier jour d'un condamné", "Victor HUGO",1802 ,1885 , 19, 1827, 1829, "Roman à thése");

	printf("\n*******************************************\n||[\tFICHES DE LECTURE DES ROMANS\t]||\n*******************************************\n\n\n");

	Roman* oeuvre;

	for(unsigned char i = 0; (i*5) < (5*3); i++){
		if(!i)     oeuvre = &la_boite;
		if(i == 1) oeuvre = &antigone;
		if(i == 2) oeuvre = &le_dernier_jour;

		printf("FICHE DE LECTURE DE ROMAN : %s\n", oeuvre->titre);
		printf("\tnom de l'oeuvre est : %s\n\tà son auteur : %s (%i,%i)\n\tSiécle : %iéme siécle\n\tdate d'écriture : %i\n\tdate de publication : %i\n\tgenre : %s\n\n",
				oeuvre->titre, oeuvre->auteur, oeuvre->date_néssance_dauteur, oeuvre->date_mort_dauteur, oeuvre->siécle, oeuvre->date_décriture, oeuvre->date_de_parution, oeuvre->genre);
	}
	
	return false;
}
