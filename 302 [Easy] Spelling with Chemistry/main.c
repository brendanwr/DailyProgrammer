// [2017-02-06] Challenge #302 [Easy] Spelling with Chemistry
// https://www.reddit.com/r/dailyprogrammer/comments/5seexn/20170206_challenge_302_easy_spelling_with/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getElement(char *c, char *elements[], int elmlen){
	int x;
	for(x = 0; x < elmlen; x++) {

		if (strcasecmp(c, elements[x]) == 0){
			return x;

		}

	}
	return -1;
		
}

void search(char *s[],  char *elements[], char *n[], int len, int elmlen) {
	int j;
	char *c;
	for(j = 0; j < len; j++) {
		c = s[j];

		int l = getElement(c, elements, elmlen);
		if (l == -1) {
			c = (char *) malloc(1 + strlen(s[j])+ strlen(s[j+1]) );
			strcpy(c, s[j]);
			strcat(c, s[j+1]);
			j++;
			l = getElement(c, elements, elmlen);
			free(c);

		}
		printf("%s\n", elements[l]);
		printf("%s\n", n[l]);

	}

}



int main(int argc, char *argv[]) {
	char *string[6];
	string[0] = "g";
	string[1] = "e";
	string[2] = "n";
	string[3] = "i";
	string[4] = "u";
	string[5] = "s";

	char *a[104] = {"Ac","Al","Am","Sb","Ar","As","At","Ba","Bk","Be","Bi","B","Br","Cd","Ca","Cf","C","Ce","Cs","Cl","Cr","Co","Cu","Cm","Dy","Es","Er","Eu","Fm","F","Fr","Gd","Ga","Ge","Au","Hf","He","Ho","H","In","I","Ir","Fe","Kr","La","Lr","Pb","Li","Lu","Mg","Mn","Md","Hg","Mo","Nd","Ne","Np","Ni","Nb","N","No","Os","O","Pd","P","Pt","Pu","Po","K","Pr","Pm","Pa","Ra","Rn","Re","Rh","Rb","Ru","Rf","Sm","Sc","Se","Si","Ag","Na","Sr","S","Ta","Tc","Te","Tb","Tl","Th","Tm","Sn","Ti","W","U","V","Xe","Yb","Y","Zn","Zr" };

	char *name[104] = {"Actinium","Aluminum","Americium","Antimony","Argon","Arsenic","Astatine","Barium","Berkelium","Beryllium","Bismuth","Boron","Bromine","Cadmium","Calcium","Californium","Carbon","Cerium","Cesium","Chlorine","Chromium","Cobalt","Copper","Curium","Dysprosium","Einsteinium","Erbium","Europium","Fermium","Fluorine","Francium","Gadolinium","Gallium","Germanium","Gold","Hafnium","Helium","Holmium","Hydrogen","Indium","Iodine","Iridium","Iron","Krypton","Lanthanum","Lawrencium","Lead","Lithium","Lutetium","Magnesium","Manganese","Mendelevium","Mercury","Molybdenum","Neodymium","Neon","Neptunium","Nickel","Niobium","Nitrogen","Nobelium","Osmium","Oxygen","Palladium","Phosphorus","Platinum","Plutonium","Polonium","Potassium","Praseodymium","Promethium","Protactinium","Radium","Radon","Rhenium","Rhodium","Rubidium","Ruthenium","Rutherfordium","Samarium","Scandium","Selenium","Silicon","Silver","Sodium","Strontium","Sulfur","Tantalum","Technetium","Tellurium","Terbium","Thallium","Thorium","Thulium","Tin","Titanium","Tungsten","Uranium","Vanadium","Xenon","Ytterbium","Yttrium","Zinc", "Zirconium" };

	
	int strlen = sizeof(string)/sizeof(char**);
	int elemlen = sizeof(a)/sizeof(char**);

	search(string, a, name, strlen, elemlen);

}

