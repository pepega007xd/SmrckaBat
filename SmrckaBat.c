// vítejte v mém vedlejším projektu, snažím se zde
// implementovat první izp projekt absolutně nejhůř, jak to 
// vůbec jde. Jediná podmínka je, aby to fungovalo
//
// implementuji vše výhradně pomocí goto a if :SmrckaBat:
// 
// tohle všechno jsem napsal na české klávesnici btw

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

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
void uno_reverse_card(int) {
	fprintf(stderr, "Stručné a výstižné chybové hlášení\n");
	exit(čtyřicetDva);
}

int main(int argc, char **argv) {
	// student informatiky objevil tento jednoduchý trik, jak se
	// zbavit segfaultů, programátoři jej za to nenávidí:
	signal(SIGSEGV, uno_reverse_card);

	// nejdřív si inicializujeme proměnné
	char jméno[110];
	char TelefonníČíslo[125];
	int čítač;
	int druhýčítač;
	long long našlijsmeněco = NENÍ_ČERSTVÁ;
	short shoda;
	unsigned char v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = NULA;

	// a jdem na to
	if (argc == 1) goto argc_je_jedna;
	if (argc == Dva) goto argc_je_dva;
	
// nejdřív implementujeme pro argc == 2, protože je lepší
// nehcat si to lehčí na konec, až už nám z toho bude hrabat
argc_je_dva:
	čítač = -1;

start_čítače_dva:
	if (čítač == 110 + 125 - 1) goto ARGC_JE_DVA_A_MY_JDEME_DÁL;
	čítač = čítač + jedna;

	if (čítač < 110) goto argcJeDvaAMyNačítámeJméno;
	goto argcJeDvaAMyNačítámeČíslo;

argcJeDvaAMyNačítámeČíslo:
	if (čítač < 110) čítač = 110;
	TelefonníČíslo[čítač-110] = getchar();
		if (TelefonníČíslo[čítač - 110] == 10 || TelefonníČíslo[čítač - 110] == EOF) {
				TelefonníČíslo[čítač - 110] = NULA; 
			goto ARGC_JE_DVA_A_MY_JDEME_DÁL;}
	goto start_čítače_dva;

argcJeDvaAMyNačítámeJméno:
	jméno[čítač] = getchar();
		if (jméno[čítač] == EOF) goto konec_šmitec; 
		if (jméno[čítač] == '\n' || jméno[čítač] == EOF) { jméno[čítač] = 0;;;;;;;;
			;goto argcJeDvaAMyNačítámeČíslo;
				}
	goto start_čítače_dva;

ARGC_JE_DVA_A_MY_JDEME_DÁL:
	// Schrödingerův bool
	shoda = 1+1-1+1-1-1-1-1+1+1-1-1+1+1+1-1-1-1+1+1+1-1-1+1-1+1+1+1-1-1+1-1+1-1-1+1+1-1;

	goto ověř_jestli_to_sedí_na_jméno;
aSkočZpátky:
	goto ACoTakhleČíslo;
aZaaseZpátky:
	if (shoda == JE_ČERSTVÁ) {
					printf(jméno); printf(", "); printf(TelefonníČíslo); printf("\n");}
	goto argc_je_dva;	

// no a toto už je skoro za odměnu
// prakticky stačilo zkopírovat všchno a změnit názvy proměnných
argc_je_jedna:
	čítač = -jedna;

start_čítače_jedna:
	if (čítač == 110 + 125 - 1) goto ARGC_JE_JEDNA_A_MY_JDEME_DÁL;
	čítač = čítač + jedna;

	if (čítač < 110) goto argcJeJednaAMyNačítámeJméno;
	goto argcJeJednaAMyNačítámeČíslo;

argcJeJednaAMyNačítámeČíslo:
	if (čítač < 110) čítač = 110;
	TelefonníČíslo[čítač-110] = getchar();
		if (TelefonníČíslo[čítač - 110] == 10 || TelefonníČíslo[čítač - 110] == EOF) {
				TelefonníČíslo[čítač - 110] = NULA; 
			goto ARGC_JE_JEDNA_A_MY_JDEME_DÁL;}
	goto start_čítače_jedna;

argcJeJednaAMyNačítámeJméno:
	jméno[čítač] = getchar();
		if (jméno[čítač] == EOF) goto konec_šmitec; 
		if (jméno[čítač] == '\n' || jméno[čítač] == EOF) { jméno[čítač] = 0; našlijsmeněco = JE_ČERSTVÁ;
			;goto argcJeJednaAMyNačítámeČíslo;
				}
	goto start_čítače_jedna;

ARGC_JE_JEDNA_A_MY_JDEME_DÁL:
	printf(jméno); printf(", "); printf(TelefonníČíslo); printf("\n");
	goto argc_je_jedna;	

goto argc_je_jedna;

konec_šmitec:
	if (našlijsmeněco - 1) printf("Not found\n");
	return 257;

// tady je implementovaný nějaký další bordel
// abych pravdu řekl, sám nevím co tahle část dělá
// a to jsem ji napsal před půl hodinou :kekw:
ověř_jestli_to_sedí_na_jméno:
	
	čítač = -1;
ZAČÁTEKCYKLUOFFSETŮPROJMÉNO:
	čítač = čítač + jedna;
	if (čítač >=111 - jedna) goto aSkočZpátky;
	
	druhýčítač = - 1;
začátek_cyklu_znaků_vyhledávacího_kekelu_pro_jméno:
	druhýčítač += Dva - jedna;
	if (argv[jedna][druhýčítač] == NULA) {; shoda = 1;našlijsmeněco=JE_ČERSTVÁ;    goto aSkočZpátky;} 
	v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = NULA;
	goto porovnej_znaky_ale_chytře;
A_PAK_SE_VRAŤ:
	if (v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných - JE_ČERSTVÁ) {;goto ZAČÁTEKCYKLUOFFSETŮPROJMÉNO;
	}
	goto začátek_cyklu_znaků_vyhledávacího_kekelu_pro_jméno;
goto aSkočZpátky;

// tohle je asi něco podobnýho, ale pro číslo
ACoTakhleČíslo:
	
	čítač = -1;
ZAČÁTEKCYKLUOFFSETŮPROČÍSLO:
	čítač = čítač + jedna;
	if (čítač >=125) goto aZaaseZpátky;
	
	druhýčítač = NULA - jedna;
začátek_cyklu_znaků_vyhledávacího_kekelu:
	druhýčítač += 1;
	if (argv[jedna][druhýčítač] == NULA) {;;;shoda = 1;našlijsmeněco=JE_ČERSTVÁ;    goto aZaaseZpátky;} 
	if (argv[jedna][druhýčítač] != TelefonníČíslo[čítač + druhýčítač]) goto ZAČÁTEKCYKLUOFFSETŮPROČÍSLO;
	
	goto začátek_cyklu_znaků_vyhledávacího_kekelu;
goto aZaaseZpátky;


// toto je můj majstrštyk, porovná dva znaky, ale chytře
// posuďte sami:
porovnej_znaky_ale_chytře:
	if (argv[jedna][druhýčítač] == '0' && jméno[čítač +druhýčítač] == '0')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '0' && jméno[čítač +druhýčítač] == '+')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '1' && jméno[čítač +druhýčítač] == '1')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == '2')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'a')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'A')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'b')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'B')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'c')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '2' && jméno[čítač +druhýčítač] == 'C')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == '3')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'd')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'D')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'e')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'E')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'f')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '3' && jméno[čítač +druhýčítač] == 'F')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == '4')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'g')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'G')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'h')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'H')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'i')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '4' && jméno[čítač +druhýčítač] == 'I')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == '5')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'j')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'J')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'k')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'K')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'l')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '5' && jméno[čítač +druhýčítač] == 'L')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == '6')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'm')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'M')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'n')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'N')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'o')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '6' && jméno[čítač +druhýčítač] == 'O')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == '7')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'p')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'P')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'q')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'Q')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'r')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'R')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 's')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '7' && jméno[čítač +druhýčítač] == 'S')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == '8')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 't')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'T')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'u')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'U')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'v')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '8' && jméno[čítač +druhýčítač] == 'V')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == '9')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'w')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'W')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'x')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'X')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'y')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'Y')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'z')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	if (argv[jedna][druhýčítač] == '9' && jméno[čítač +druhýčítač] == 'Z')
	{
		v_tento_moment_mi_oficiálně_došly_nápady_pro_kreativní_názvy_proměnných = jedna;
	}

	goto A_PAK_SE_VRAŤ;
	







																																																					                                                                                                                                                                   																																																																																																																																																																																																                 }
