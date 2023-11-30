//------------------------------//
// Nom		: Stopa
// Prénom	: Karol
// Date		: 02.11.2023
//------------------------------//

// Librairies 
#include <stdio.h>	// Standard
#include "testQ4.h"	// Personelle

// Programme principale
void main(void)
{
	// Variables locales
	int InfoSigne = 0;
	int InfoValeur_Entier = 0;
	float InfoValeur_Demi = 0;
	int ValeurTemp = 0;
	int ValBrutCptDS1820 = 0;

	// -----Programme-----

	ValBrutCptDS1820 = VAL_BRUT_CPT_DS1820;

	InfoSigne = ValBrutCptDS1820 >> DECALAGE;	// Décalage de 8 bits

	if (InfoSigne == INFO_SING_COMP)
	{
		InfoSigne = INFO_SIGN_NEG;
	}
	else
	{
		InfoSigne = INFO_SING_POS;
	}

	InfoValeur_Demi = (ValBrutCptDS1820 & INFO_VALEUR_DEMI_MASK) * INFO_VALEUR_DEMI_MULTI;

	InfoValeur_Entier = ValBrutCptDS1820 & INFO_VALEUR_ENTIER_MASK >> 1;

	ValeurTemp = InfoSigne * InfoValeur_Demi * InfoValeur_Entier;
}