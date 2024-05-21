// vítejte v mém vedlejším projektu, snažím se zde
// implementovat první izp projekt absolutně nejhůř, jak to 
// vůbec jde. Jediná podmínka je, aby to fungovalo
//
// implementuji vše výhradně pomocí jdido a jestliže :SmrckaBat:
// 
// tohle všechno jsem napsal na české klávesnici btw

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include "czech.h"

#define NULA 0
#define jedna 1
#define Dva 2
#define čtyřicetDva 42

// toto slouží jako true/false
#define JE_ČERSTVÁ 1
#define NENÍ_ČERSTVÁ 0

// můžeme prostě chytit náš vlastní segfault
// a místo něj napsat "stručné a výstižné chybové hlášení",
// přesně jak je uvedeno v zadání, čímž jsme de facto 
// vyřešili všechen error-checking na pěti řádcích
// :vutEZ:
prázdná uno_reverse_card(číslo kentus) {
	stisknif(stanchyb, "Stručné a výstižné chybové hlášení\n");
	ukonči(čtyřicetDva);
}

číslo hlavní(číslo početArgumentů, znak **HODNOTY_ARGUMENTŮ) {
	// student informatiky objevil tento jednoduchý trik, jak se
	// zbavit segfaultů, programátoři jej za to nenávidí:
	signál(SIGSEGV, uno_reverse_card);

	// nejdřív si inicializujeme proměnné
	znak jméno[110];
	znak TelefonníČíslo[125];
	číslo čítač;
	číslo druhýčítač;
	dlouhé dlouhý našlijsmeněco = NENÍ_ČERSTVÁ;
	krátký shoda;
	bezznaménkový znak v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = NULA;

	// a jdem na to
	jestliže (početArgumentů == 1) jdido argc_je_jedna;
	pokud (početArgumentů == Dva) jdido argc_je_dva;
	
// nejdřív implementujeme pro argc == 2, protože je lepší
// nehcat si to lehčí na konec, až už nám z toho bude hrabat
argc_je_dva:
	čítač = -1;

start_čítače_dva:
	když (čítač == 110 + 125 - 1) jdido ARGC_JE_DVA_A_MY_JDEME_DÁL;
	čítač = čítač + jedna;

	jestliže (čítač < 110) jdido argcJeDvaAMyNačítámeJméno;
	jdido argcJeDvaAMyNačítámeČíslo;

argcJeDvaAMyNačítámeČíslo:
	pokud (čítač < 110) čítač = 110;
	TelefonníČíslo[čítač-110] = dostaňznak();
		když (TelefonníČíslo[čítač - 110] == 10 || TelefonníČíslo[čítač - 110] == KS) {
				TelefonníČíslo[čítač - 110] = NULA; 
			jdido ARGC_JE_DVA_A_MY_JDEME_DÁL;}
	jdido start_čítače_dva;

argcJeDvaAMyNačítámeJméno:
	jméno[čítač] = dostaňznak();
		jestliže (jméno[čítač] == KS) jdido konec_šmitec; 
		pokud (jméno[čítač] == '\n' || jméno[čítač] == KS) { jméno[čítač] = 0;;;;;;;;
			;jdido argcJeDvaAMyNačítámeČíslo;
				}
	jdido start_čítače_dva;

ARGC_JE_DVA_A_MY_JDEME_DÁL:
	// Schrödingerův bool
	shoda = 1+1-1+1-1-1-1-1+1+1-1-1+1+1+1-1-1-1+1+1+1-1-1+1-1+1+1+1-1-1+1-1+1-1-1+1+1-1;

	jdido ověř_jestli_to_sedí_na_jméno;
aSkočZpátky:
	jdido ACoTakhleČíslo;
aZaaseZpátky:
	jestliže (shoda == JE_ČERSTVÁ) {
					tisknif(jméno); tisknif(", "); tisknif(TelefonníČíslo); tisknif("\n");}
	jdido argc_je_dva;	

// no a toto už je skoro za odměnu
// prakticky stačilo zkopírovat všchno a změnit názvy proměnných
argc_je_jedna:
	čítač = -jedna;

start_čítače_jedna:
	jestliže (čítač == 110 + 125 - 1) jdido ARGC_JE_JEDNA_A_MY_JDEME_DÁL;
	čítač = čítač + jedna;

	pokud (čítač < 110) jdido argcJeJednaAMyNačítámeJméno;
	jdido argcJeJednaAMyNačítámeČíslo;

argcJeJednaAMyNačítámeČíslo:
	když (čítač < 110) čítač = 110;
	TelefonníČíslo[čítač-110] = dostaňznak();
		jestliže (TelefonníČíslo[čítač - 110] == 10 || TelefonníČíslo[čítač - 110] == KS) {
				TelefonníČíslo[čítač - 110] = NULA; 
			jdido ARGC_JE_JEDNA_A_MY_JDEME_DÁL;}
	jdido start_čítače_jedna;

argcJeJednaAMyNačítámeJméno:
	jméno[čítač] = dostaňznak();
		jestliže (jméno[čítač] == KS) jdido konec_šmitec; 
		pokud (jméno[čítač] == '\n' || jméno[čítač] == KS) { jméno[čítač] = 0; našlijsmeněco = JE_ČERSTVÁ;
			;jdido argcJeJednaAMyNačítámeČíslo;
				}
	jdido start_čítače_jedna;

ARGC_JE_JEDNA_A_MY_JDEME_DÁL:
	tisknif(jméno); tisknif(", "); tisknif(TelefonníČíslo); tisknif("\n");
	jdido argc_je_jedna;	

jdido argc_je_jedna;

konec_šmitec:
	pokud (našlijsmeněco - 1) tisknif("Not found\n");
	navrať 257;

// tady je implementovaný nějaký další bordel
// abych pravdu řekl, sám nevím co tahle část dělá
// a to jsem ji napsal před půl hodinou :kekw:
ověř_jestli_to_sedí_na_jméno:
	
	čítač = -1;
ZAČÁTEKCYKLUOFFSETŮPROJMÉNO:
	čítač = čítač + jedna;
	jestliže (čítač >=111 - jedna) jdido aSkočZpátky;
	
	druhýčítač = - 1;
začátek_cyklu_znaků_vyhledávacího_kekelu_pro_jméno:
	druhýčítač += Dva - jedna;
	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == NULA) {; shoda = 1;našlijsmeněco=JE_ČERSTVÁ;    jdido aSkočZpátky;} 
	v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = NULA;
	jdido porovnej_znaky_ale_chytře;
A_PAK_SE_VRAŤ:
	jestliže (v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných - JE_ČERSTVÁ) {;jdido ZAČÁTEKCYKLUOFFSETŮPROJMÉNO;
	}
	jdido začátek_cyklu_znaků_vyhledávacího_kekelu_pro_jméno;
jdido aSkočZpátky;

// tohle je asi něco podobnýho, ale pro číslo
ACoTakhleČíslo:
	
	čítač = -1;
ZAČÁTEKCYKLUOFFSETŮPROČÍSLO:
	čítač = čítač + jedna;
	když (čítač >=125) jdido aZaaseZpátky;
	
	druhýčítač = NULA - jedna;
začátek_cyklu_znaků_vyhledávacího_kekelu:
	druhýčítač += 1;
	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == NULA) {;;;shoda = 1;našlijsmeněco=JE_ČERSTVÁ;    jdido aZaaseZpátky;} 
	když (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] != TelefonníČíslo[čítač + druhýčítač]) jdido ZAČÁTEKCYKLUOFFSETŮPROČÍSLO;
	
	jdido začátek_cyklu_znaků_vyhledávacího_kekelu;
jdido aZaaseZpátky;


// toto je můj majstrštyk, porovná dva znaky, ale chytře
// posuďte sami:
porovnej_znaky_ale_chytře:
	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '0' && jméno[čítač +druhýčítač] == '0')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '0' && jméno[čítač +druhýčítač] == '+')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '1' && jméno[čítač +druhýčítač] == '1')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == '2')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'a')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'A')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'b')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'B')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'c')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'C')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == '3')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'd')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'D')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'e')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'E')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'f')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'F')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == '4')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'g')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'G')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'h')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'H')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'i')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'I')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestli (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == '5')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'j')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'J')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'k')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'K')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'l')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'L')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == '6')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'm')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'M')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'n')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'N')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'o')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'O')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == '7')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'p')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'P')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'q')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'Q')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'r')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'R')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 's')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'S')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == '8')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 't')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'T')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'u')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'U')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'v')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'V')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == '9')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'w')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'W')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'x')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'X')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'y')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'Y')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'z')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jestliže (HODNOTY_ARGUMENTŮ[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'Z')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	jdido A_PAK_SE_VRAŤ;
	







																																																					                                                                                                                                                                   																																																																																																																																																																																																                 }
