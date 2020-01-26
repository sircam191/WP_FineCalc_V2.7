/*
WaCKPaCK FineCalc Version 3.0
www.thewackpackrp.com
Release: 01/26/2020
Devoloped by P_O_G. (Discord: P_O_G#2222)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>

#define CALC_VERSION 3.0 //not used


#define MAX_JAIL_TIME 90
#define MAX_FINE_AMOUNT 150000

//Moving Violations
#define ILLEGAL_PARKING_FINE 100
#define ILLEGAL_UTURN_FINE 150
#define IMPROPER_LANE_CHANGE_FINE 150
#define DRIVING_WITH_NO_HEADLIGHTS_FINE 150
#define UNROADWORTHY_VEHICLE_FINE 500
#define BROKEN_HEADLIGHTS_TAIL_LIGHT_FINE 500 //removed
#define BROKEN_WINDSHIELD_FINE 500 //removed
#define FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE 1000
#define IMPEDING_THE_FLOW_OF_TRAFFIC_FINE 300
#define SPEEDING_FINE 1000
#define HABITUAL_SPEEDING_FINE 3000 //removed
#define HABITUAL_SPEEDING_JAIL 10   //removed
#define RUNNING_RED_LIGHT_STOP_SIGN_FINE 150
#define HABITUAL_RUNNING_RED_LIGHT_STOP_SIGN_FINE 4000  //removed
#define HABITUAL_RUNNING_RED_LIGHT_STOP_SIGN_JAIL 15  //removed
#define DRIVING_UNDER_THE_INFLUENCE_FINE 2000
#define DRIVING_UNDER_THE_INFLUENCE_JAIL 20
#define STUNT_DRAG_STREET_RACING_FINE 2000
#define STUNT_DRAG_STREET_RACING_JAIL 0 //removed
#define DRIVING_WITHOUT_A_LICENSE_FINE 500
#define DRIVING_WITHOUT_A_LICENSE_JAIL 7 //removed
#define DRIVING_THE_WRONG_WAY_FINE 500
#define HIT_AND_RUN_FINE 2000
#define HIT_AND_RUN_JAIL 5
#define CARELESS_DRIVING_FINE 5000
#define CARELESS_DRIVING_JAIL 10


//Misdemeanors
#define HARRASMENT_FINE 250
#define HARRASMENT_JAIL 7 //removed
#define PUBLIC_DAMAGE_FINE 1500
#define PUBLIC_DAMAGE_JAIL 5
#define PRIVATE_DAMAGE_FINE 1000
#define PRIVATE_DAMAGE_JAIL 5
#define GOVERNMENT_DAMAGE_FINE 2500
#define GOVERNMENT_DAMAGE_JAIL 7
#define PUBLIC_INTOXICATION_FINE 50
#define PUBLIC_INTOXICATION_JAIL 10
#define OBSTRUCTION_FINE 500
#define OBSTRUCTION_JAIL 15
#define DISTURBING_THE_PEACE_FINE 1000
#define DISTURBING_THE_PEACE_JAIL 10
#define DISCHARGE_OF_A_FIREARM_FINE 1500
#define DISCHARGE_OF_A_FIREARM_JAIL 15
#define ATTEMPTED_ROBBERY_FINE 1000
#define ATTEMPTED_ROBBERY_JAIL 10
#define ATTEMPTED_GTA_FINE 500
#define ATTEMPTED_GTA_JAIL 10
#define BOOTLEG_ALCOHOL_FINE 1500
#define BOOTLEG_ALCOHOL_JAIL 10
#define POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE 750
#define POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL 5
#define LOITERING_FINE 250
#define LOITERING_JAIL 3 //removed
#define ACCESSORY_TO_A_CRIME_FINE 1000
#define ACCESSORY_TO_A_CRIME_JAIL 10
#define ASSAULT_FINE 1500
#define ASSAULT_JAIL 20
#define ELUDING_POLICE_ON_FOOT_FINE 500 //removed
#define ELUDING_POLICE_ON_FOOT_JAIL 10 //removed
#define RESISTING_ARREST_FINE 500
#define RESISTING_ARREST_JAIL 10
#define ANIMAL_ABUSE_FINE 2000
#define ANIMAL_ABUSE_JAIL 30
#define MISUSE_OF_911_FINE 500
#define MISUSE_OF_911_JAIL 3 //removed
#define BRIBERY_FINE 500
#define BRIBERY_JAIL 5
#define CONTEMPT_OF_COURT_FINE 1000
#define CONTEMPT_OF_COURT_JAIL 10
#define TAMPERING_WITH_EVIDENCE_FINE 500
#define TAMPERING_WITH_EVIDENCE_JAIL 5
#define EXTORTION_FINE 5000
#define EXTORTION_JAIL 5
#define FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE 750
#define FAILURE_TO_PROVIDE_DRIVERS_LICENSE_JAIL 2 //removed
#define LEVEL_1_ILLEGAL_WEAPON_FINE 1000
#define LEVEL_1_ILLEGAL_WEAPON_JAIL 10
#define LEVEL_2_ILLEGAL_WEAPON_FINE 2000
#define LEVEL_2_ILLEGAL_WEAPON_JAIL 15
#define INTENT_TO_MANUFACTURER_FINE 1000 //removed
#define INTENT_TO_MANUFACTURER_JAIL 5 //removed
#define GANG_ENHANCEMENT_ONE 5000

//Felonys
#define STALKING_FINE 2000
#define STALKING_JAIL 10
#define FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE 5000
#define FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL 15
#define FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE 10000
#define FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL 30
#define RECKLESS_DRIVING_WHILE_EVADING_FINE 10000 //change to felony evading DONE
#define RECKLESS_DRIVING_WHILE_EVADING_JAIL 30
#define POSSESSION_OF_A_STOLEN_VEHICLE_FINE 1500
#define POSSESSION_OF_A_STOLEN_VEHICLE_JAIL 15
#define AGGRAVATED_ASSAULT_FINE 2500
#define AGGRAVATED_ASSAULT_JAIL 20
#define ASSUALT_ON_A_CITY_WORKER_FINE 3000
#define ASSUALT_ON_A_CITY_WORKER_JAIL 30
#define ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE 10000
#define ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL 30
#define ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE 25000
#define ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL 60
#define MANSLAUGHTER_FINE 3000
#define MANSLAUGHTER_JAIL 25
#define UNARMED_ROBBERY_FINE 2000
#define UNARMED_ROBBERY_JAIL 15
#define ARMED_ROBBERY_FINE 4500
#define ARMED_ROBBERY_JAIL 30
#define DRUG_TRAFFICKING_FINE 1250 //removed
#define DRUG_TRAFFICKING_JAIL 10 //removed
#define INTENT_TO_DISTRIBUTE_FINE 750
#define INTENT_TO_DISTRIBUTE_JAIL 5
#define FAILURE_TO_APPEAR_FINE 1000 //removed
#define FAILURE_TO_APPEAR_JAIL 25 //removed
#define LEVEL_3_ILLEGAL_WEAPON_FINE 12500
#define LEVEL_3_ILLEGAL_WEAPON_JAIL 20
#define UNARMED_GTA_FINE 1000
#define UNARMED_GTA_JAIL 20
#define ARMED_GTA_FINE 2000
#define ARMED_GTA_JAIL 20
#define CONTRABAND_TRAFFICKING_FINE 1250
#define CONTRABAND_TRAFFICKING_JAIL 10
#define RECKLESS_DRIVING_FINE 7500
#define RECKLESS_DRIVING_JAIL 20
#define GANG_ENHANCEMENT_TWO 10000
#define DRIVING_WITH_SUSPENDED_LICENSE_FINE 2500 //check
#define DRIVING_WITH_SUSPENDED_LICENSE_JAIL 20 //check


void movingViolations(int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*);
void misdemeanors(int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*);
void felonys(int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*, int*);
void jailCell(int*);
void manuallySet(int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*);
void removeCharge(int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*, int*, int*);
void dojPicker(int*, int*, int*, int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*, int*);
void printCodes(int*, int*, int*, int*, int*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int*, int*, int*, int*, int*);

int main()
{
	system("MODE 95,45");

	char chargeA[80] = "";
	char chargeB[80] = "";
	char chargeC[80] = "";
	char chargeD[80] = "";
	char chargeE[80] = "";
	char chargeF[80] = "";
	char chargeG[80] = "";
	char chargeH[80] = "";
	char chargeI[80] = "";
	char chargeJ[80] = "";
	char chargeK[80] = "";
	char chargeL[80] = "";
	char chargeM[80] = "";
	char chargeN[80] = "";
	char chargeO[80] = "";

	int dirtyMoney = 0;
	int cCount = 0;
	int id = 0;
	int fine = 0;
	int jailTime = 0;
	int jail = 5;
	int space = 2;
	int removed = 0;
	int cService = 0;
	int maxJail = MAX_JAIL_TIME;
	int maxFine = MAX_FINE_AMOUNT;

	//date stuff:
	int day, month, year;
	time_t now;
	time(&now);
	struct tm* local = localtime(&now);
	day = local->tm_mday;            // get day of month (1 to 31)
	month = local->tm_mon + 1;       // get month of year (0 to 11)
	year = local->tm_year + 1900;    // get year since 1900
	//printf("ISSUED: %02d/%02d/%d\n", day, month, year);

	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	//SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	printf("\n\t\t\t       -WackPack PD Fine and Jail Calculator-\n");
	//End color change
	//SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("\t\t\t\t\t     %02d/%02d/%d\n", month, day, year);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\n\n\t\t       Enter The Suspects Goverment ID Number Below to Begin.");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE);
	printf("\n\n_______________________________________________________________________________________________");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("\n\n\n\t\t\t\t  -Charging/Booking Suspects-\n\n\t\tWhen you are ready to charge and sentence the suspect use option 5\n\t\t in the main menu to get the fine and jail codes that you will\n\t\t          copy and paste into the server text chat. \n\n\n\n\n\t\t\t   -Manually Changing Fine and Jail Times-\n\n\t\tAdding more charges after you manually changed the fine or jail\n\t\t time with option 7 in the main menu will cause the new charges\n\t\t fines and jail times to add to the custom amount you entered. \n\n\n\n\t\t\t [By default jail 5 (prison) is selected]");
	SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE);
	printf("\n\n\n_______________________________________________________________________________________________");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nENTER SUSPECTS ID #: ");
	SetConsoleTextAttribute(hConsole, saved_attributes);


	while (scanf("%d", &id) != 1)
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tERROR!");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("	\n\n(You Entered A Letter Instead Of A Number) \n\nEnter Suspects ID #: ");
		scanf("%*[^\n]");
	}

	//scanf("%d",&id);
	//rewind(stdin);

	int choice;
	do
	{
		if (space == 2)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}


		if (space == 1)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if (space == 5)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if (space == 6)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		if (space == 99)
		{

		}
		if (removed > 0)
		{
			printf("\t\tSuccess! Charged Removed.\n\n");
		}

		printf(

			"\n\n\t    -Main Menu-"
			"\n ________________________________"
			"\n|");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf(" 1. MOVING VIOLATIONS\t\t ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("| ");
		printf("\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf("2. MISDEMEANORS\t\t ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("| ");
		printf("\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf("3. FELONIES\t\t\t ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("| ");

		printf("\n|                                |"
			"\n| 4. SELECT JAIL\t\t |"
			"\n|--------------------------------|"

			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		printf("5. PRINT JAIL/FINE CODE\t");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf(" |"
			"\n|--------------------------------|"
			"\n| 6. VIEW OR REMOVE CHARGE(S)    |"
			"\n| 7. MANUALLY SET FINE/JAIL TIME |"
			"\n|                                |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("8. CLEAR CALC\t\t\t");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf(" | "
			"\n| 0. Exit\t\t\t |"
			"\n|________________________________|");

		printf("\n\n=============================");

		if (cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", cCount);
		}


		if (fine < maxFine)
		{
			printf("\n-Total Fine: $%d", fine);
		}
		if (fine >= maxFine)
		{
			printf("\n-Total Fine: $%d", maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (jailTime <= 10 && cCount >= 1 && jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", jailTime);
		}
		else if (jailTime < maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", jailTime);
		}
		else if (jailTime >= maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		if (jailTime <= 10 && cCount >= 1 && jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", jail);
		}
		printf("\n=============================");

		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nENTER YOUR SELECTION: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);

		while (scanf("%d", &choice) != 1)
		{
			if (space == 2)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}


			if (space == 1)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
			if (space == 5)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
			if (space == 6)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
			if (space == 99)
			{

			}
			if (removed > 0)
			{
				printf("\t\tSuccess! Charged Removed.\n\n");
			}
			printf(

				"\n\n\t    -Main Menu-"
				"\n ________________________________"
				"\n|");
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			printf(" 1. MOVING VIOLATIONS\t\t ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("| ");
			printf("\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			printf("2. MISDEMEANORS\t\t ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("| ");
			printf("\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			printf("3. FELONIES\t\t\t ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("| ");

			printf("\n|                                |"
				"\n| 4. SELECT JAIL\t\t |"
				"\n|--------------------------------|"

				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("5. PRINT JAIL/FINE CODE\t");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf(" |"
				"\n|--------------------------------|"
				"\n| 6. VIEW OR REMOVE CHARGE(S)    |"
				"\n| 7. MANUALLY SET FINE/JAIL TIME |"
				"\n|                                |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("8. CLEAR CALC\t\t\t");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf(" | "
				"\n| 0. Exit\t\t\t |"
				"\n|________________________________|");

			printf("\n\n=============================");

			if (cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", cCount);
			}


			if (fine < maxFine)
			{
				printf("\n-Total Fine: $%d", fine);
			}
			if (fine >= maxFine)
			{
				printf("\n-Total Fine: $%d", maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (jailTime <= 10 && cCount >= 1 && jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", jailTime);
			}
			else if (jailTime < maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", jailTime);
			}
			else if (jailTime >= maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			if (jailTime <= 10 && cCount >= 1 && jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", jail);
			}
			printf("\n=============================");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n\n\n\t\tERROR! ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\nENTER YOUR SELECTION : ");
			scanf("%*[^\n]");
		}

		switch (choice)
		{
		case 1:
			movingViolations(&fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &cCount, &jail, &maxJail, &maxFine);
			space = 1;
			break;
		case 2:
			misdemeanors(&fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &cCount, &jail, &maxJail, &maxFine);
			space = 1;
			break;

		case 3:
			felonys(&fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &cCount, &jail, &dirtyMoney, &maxJail, &maxFine);
			space = 1;
			break;

		case 4:
			jailCell(&jail);
			space = 1;
			break;

		case 5:
			space = 0;
			if (cCount == 0)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n     ERROR! ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("NO CHARGES SELECTED.\n\n\n\n\n");
			}
			else {
				dojPicker(&id, &cService, &cCount, &fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &jail, &removed, &dirtyMoney, &maxJail, &maxFine);
				printCodes(&id, &cService, &cCount, &fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &jail, &removed, &dirtyMoney, &maxJail, &maxFine);
			}

			break;

		case 6:
			space = 1;
			removeCharge(&fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &cCount, &jail, &removed, &dirtyMoney, &maxJail, &maxFine);
			if (cCount == 0)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
			break;
		case 7:
			//MAUNALLY SET FINE/JAIL TIMES
			space = 1;
			manuallySet(&fine, &jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, &cCount, &jail, &maxJail, &maxFine);
			if (cCount == 0)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			}
			break;


		case 8:
			//ClEARS CALC
			cService = 0;
			removed = 0;
			space = 5;
			jail = 5;
			fine = 0;
			jailTime = 0;
			strcpy(chargeA, "");
			strcpy(chargeB, "");
			strcpy(chargeC, "");
			strcpy(chargeD, "");
			strcpy(chargeE, "");
			strcpy(chargeF, "");
			strcpy(chargeG, "");
			strcpy(chargeH, "");
			strcpy(chargeI, "");
			strcpy(chargeJ, "");
			strcpy(chargeK, "");
			strcpy(chargeL, "");
			strcpy(chargeM, "");
			strcpy(chargeN, "");
			strcpy(chargeO, "");

			dirtyMoney = 0;
			cCount = 0;
			id = 0;

			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t   -CALC CLEARED!-");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\n\n\n\nEnter Suspects ID #:");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			while (scanf("%d", &id) != 1)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tERROR! ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n(You Entered A Letter Instead Of A Number) \n\nEnter Suspects ID #: ");
				scanf("%*[^\n]");
			}
			break;



		case 99:
			space = 99;
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n-----------------------------------------------------");
			printf("\n +PROGRAM INFOMATION+\n WaCKPaCK PD FineCalc Version 3.0\n www.thewackpackrp.com\n Release: 01/26/2020\n Devoloped by: P_O_G (Discord: P_O_G#2222)");
			printf("\n-----------------------------------------------------\n(Copied to Clipboard)\n\n");

			/////////////////////////////////////////////Copy to clipboard
			char codeToCopy[420];
			sprintf(codeToCopy, "+PROGRAM INFOMATION+\r\n WaCKPaCK PD FineCalc Version 3.0\r\n www.thewackpackrp.com\r\n Release: 01/26/2020\n Devoloped by: P_O_G (Discord: P_O_G#2222)");

			const char* output = codeToCopy;
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
			///////////////////////////////////////////
			break;


		case 0:
			break;
		default:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Choose options 0-8! ");
			break;
		}
	} while (choice);

	return(0);

}


void movingViolations(int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_cCount, int* ptr_jail, int* ptr_maxJail, int* ptr_maxFine)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;


	int choice;
	do
	{
		printf(
			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t--MOVING VIOLATIONS--"
			"\n ______________________________________________"
			"\n| 1. Illegal Parking		    	       |"
			"\n| 2. Illegal U-Turn		    	       |"
			"\n| 3  Improper Lane Change		       |"
			"\n| 4. Driving With No Headlights                |"
			"\n| 5. Unroadworthy Vehicle                      |"
			"\n| 6. Broken Windshield                         |"
			"\n| 7. Failure To Yield To Emergency Vehicle     |"
			"\n| 8. Impeding The Flow of Traffic              |"
			"\n| 9. Speeding                                  |"
			"\n| 10. Running Red Light/Stop Sign              |"
			"\n| 11. Driving Under The Influence              |"
			"\n| 12. Stunt Driving                            |"
			"\n| 13. Drag Racing                              |"
			"\n| 14. Street Racing                            |"
			"\n| 15. Driving Without A License                |"
			"\n| 16. Driving The Wrong Way                    |"
			"\n| 17. Hit And Run                              |"
			"\n| 18. Careless Driving                         |"
			"\n|                                              |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("                                      | "
			"\n|______________________________________________|");

		printf("\n\n=============================");

		if (*ptr_cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
		}


		if (*ptr_fine < *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_fine);
		}
		if (*ptr_fine >= *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
		}
		else if (*ptr_jailTime < *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
		}
		else if (*ptr_jailTime >= *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);

		}
		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (*ptr_jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", *ptr_jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
		}
		printf("\n=============================");
		if (*ptr_cCount >= 15)
		{
			return;
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nEnter Your Selection Or 0 To Go Back: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{
			printf(
				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t--MOVING VIOLATIONS--"
				"\n ______________________________________________"
				"\n| 1. Illegal Parking		    	       |"
				"\n| 2. Illegal U-Turn		    	       |"
				"\n| 3  Improper Lane Change		       |"
				"\n| 4. Driving With No Headlights                |"
				"\n| 5. Unroadworthy Vehicle                      |"
				"\n| 6. Broken Windshield                         |"
				"\n| 7. Failure To Yield To Emergency Vehicle     |"
				"\n| 8. Impeding The Flow of Traffic              |"
				"\n| 9. Speeding                                  |"
				"\n| 10. Running Red Light/Stop Sign              |"
				"\n| 11. Driving Under The Influence              |"
				"\n| 12. Stunt Driving                            |"
				"\n| 13. Drag Racing                              |"
				"\n| 14. Street Racing                            |"
				"\n| 15. Driving Without A License                |"
				"\n| 16. Driving The Wrong Way                    |"
				"\n| 17. Hit And Run                              |"
				"\n| 18. Careless Driving                         |"
				"\n|                                              |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("                                      | "
				"\n|______________________________________________|");

			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");
			if (*ptr_cCount >= 15)
			{
				return;
			}
			printf("\n\n\t\t");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\nEnter Your Selection Or 0 To Go Back: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}


		switch (choice)
		{
		case 1:
			//Illegal Parking
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Illegal Parking || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Illegal Parking || ");
			}
			*ptr_fine = *ptr_fine + ILLEGAL_PARKING_FINE;
			*ptr_cCount = *ptr_cCount + 1;
			break;
		case 2:
			//Illegal U-Turn
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Illegal U-Turn || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Illegal U-Turn || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ILLEGAL_UTURN_FINE;
			break;

		case 3:
			//Improper Lane Change
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Improper Lane Change || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Improper Lane Change || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + IMPROPER_LANE_CHANGE_FINE;
			break;

		case 4:
			//Driving With No Headlights
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Driving With No Headlights || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Driving With No Headlights || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DRIVING_WITH_NO_HEADLIGHTS_FINE;
			break;

		case 5:
			//Unroadworthy Vehicle
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Unroadworthy Vehicle || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Unroadworthy Vehicle || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + UNROADWORTHY_VEHICLE_FINE;
			break;


		case 6:
			//Broken Windshield
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Broken Windshield || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Broken Windshield || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + BROKEN_WINDSHIELD_FINE;
			break;

		case 7:
			//Failure To Yield To Emergency Vehicle
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Failure To Yield To Emergency Vehicle || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Failure To Yield To Emergency Vehicle || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			break;

		case 8:
			//Impeding The Flow of Traffic
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Impeding The Flow of Traffic || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Impeding The Flow of Traffic || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			break;

		case 9:
			//Speeding
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Speeding || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Speeding || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Speeding || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Speeding || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Speeding || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Speeding || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Speeding || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Speeding || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Speeding || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Speeding || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Speeding || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Speeding || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Speeding || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Speeding || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Speeding || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + SPEEDING_FINE;
			break;


		case 10:
			//Running Red Light/Stop Sign
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Running Red Light/Stop Sign || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Running Red Light/Stop Sign || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + RUNNING_RED_LIGHT_STOP_SIGN_FINE;
			break;


		case 11:
			//Driving Under The Influence
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Driving Under The Influence || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Driving Under The Influence || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DRIVING_UNDER_THE_INFLUENCE_FINE;
			*ptr_jailTime = *ptr_jailTime + DRIVING_UNDER_THE_INFLUENCE_JAIL;
			break;

		case 12:
			//Stunt Driving
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Stunt Driving || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Stunt Driving || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + STUNT_DRAG_STREET_RACING_FINE;
			 
			break;

		case 13:
			//Drag Racing
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Drag Racing || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Drag Racing || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Drag Racing || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Drag Racing || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Drag Racing || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Drag Racing || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Drag Racing || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Drag Racing || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Drag Racing || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Drag Racing || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Drag Racing || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Drag Racing || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Drag Racing || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Drag Racing || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Drag Racing || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + STUNT_DRAG_STREET_RACING_FINE;
			 
			break;

		case 14:
			//Street Racing
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Street Racing || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Street Racing || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Street Racing || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Street Racing || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Street Racing || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Street Racing || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Street Racing || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Street Racing || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Street Racing || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Street Racing || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Street Racing || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Street Racing || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Street Racing || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Street Racing || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Street Racing || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + STUNT_DRAG_STREET_RACING_FINE;
			 
			break;

		case 15:
			//Driving Without A License
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Driving Without A License || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Driving Without A License || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DRIVING_WITHOUT_A_LICENSE_FINE;
			
			break;

		case 16:
			//Driving The Wrong Way
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Driving The Wrong Way || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Driving The Wrong Way || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DRIVING_THE_WRONG_WAY_FINE;
			break;

		case 17:
			//Hit And Run
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Hit And Run || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Hit And Run || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Hit And Run || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Hit And Run || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Hit And Run || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Hit And Run || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Hit And Run || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Hit And Run || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Hit And Run || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Hit And Run || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Hit And Run || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Hit And Run || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Hit And Run || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Hit And Run || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Hit And Run || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + HIT_AND_RUN_FINE;
			*ptr_jailTime = *ptr_jailTime + HIT_AND_RUN_JAIL;
			break;

		case 18:
			//Careless Driving
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Careless Driving || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Careless Driving || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Careless Driving || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Careless Driving || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Careless Driving || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Careless Driving || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Careless Driving || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Careless Driving || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Careless Driving || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Careless Driving || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Careless Driving || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Careless Driving || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Careless Driving || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Careless Driving || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Careless Driving || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + CARELESS_DRIVING_FINE;
			*ptr_jailTime = *ptr_jailTime + CARELESS_DRIVING_JAIL;
			break;


		case 0:
			break;

		default:printf("\n\n\n\t\t Choose options 0-19! ");
			break;
		}
	} while (choice);
}

void misdemeanors(int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_cCount, int* ptr_jail, int* ptr_maxJail, int* ptr_maxFine)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int choice;
	do
	{
		printf(
			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t --MISDEMEANORS--"
			"\n ___________________________________________"
			"\n| 1. Harassment                             |"
			"\n| 2. Public Damage                          |"
			"\n| 3. Private Damage                         |"
			"\n| 4. Government Damage                      |"
			"\n| 5. Public Intoxication                    |"
			"\n| 6. Obstruction                            |"
			"\n| 7. Disturbing The Peace                   |"
			"\n| 8. Discharge of A Firearm                 |"
			"\n| 9. Attempted Robbery                      |"
			"\n| 10. Attempted GTA                         |"
			"\n| 11. Possession of Raw Illegal Drugs       |"
			"\n| 12. Loitering                             |"
			"\n| 13. Accessory To A Crime                  |"
			"\n| 14. Assault                               |"
			"\n| 15. Resisting Arrest                      |"
			"\n| 16. Animal Abuse                          |"
			"\n| 17. Misuse of 911                         |"
			"\n| 18. Bribery                               |"
			"\n| 19. Contempt of Court                     |"
			"\n| 20. Tampering With Evidence               |"
			"\n| 21. Failure To Provide Drivers License    |"
			"\n| 22. Level 1 Illegal Weapon                |"
			"\n| 23. Level 2 Illegal Weapon                |"
			"\n| 24. Gang Enhancment 1                     |"
			"\n|                                           |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK\t\t\t\t    ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("| \n|___________________________________________|");


		printf("\n\n=============================");

		if (*ptr_cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
		}


		if (*ptr_fine < *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_fine);
		}
		if (*ptr_fine >= *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
		}
		else if (*ptr_jailTime < *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
		}
		else if (*ptr_jailTime >= *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);

		}
		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (*ptr_jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", *ptr_jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
		}
		printf("\n=============================");
		if (*ptr_cCount >= 15)
		{
			return;
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nEnter Your Selection Or 0 To Go Back: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{

			printf(
				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t --MISDEMEANORS--"
				"\n ___________________________________________"
				"\n| 1. Harassment                             |"
				"\n| 2. Public Damage                          |"
				"\n| 3. Private Damage                         |"
				"\n| 4. Government Damage                      |"
				"\n| 5. Public Intoxication                    |"
				"\n| 6. Obstruction                            |"
				"\n| 7. Disturbing The Peace                   |"
				"\n| 8. Discharge of A Firearm                 |"
				"\n| 9. Attempted Robbery                      |"
				"\n| 10. Attempted GTA                         |"
				"\n| 11. Possession of Raw Illegal Drugs       |"
				"\n| 12. Loitering                             |"
				"\n| 13. Accessory To A Crime                  |"
				"\n| 14. Assault                               |"
				"\n| 15. Resisting Arrest                      |"
				"\n| 16. Animal Abuse                          |"
				"\n| 17. Misuse of 911                         |"
				"\n| 18. Bribery                               |"
				"\n| 19. Contempt of Court                     |"
				"\n| 20. Tampering With Evidence               |"
				"\n| 21. Failure To Provide Drivers License    |"
				"\n| 22. Level 1 Illegal Weapon                |"
				"\n| 23. Level 2 Illegal Weapon                |"
				"\n| 24. Gang Enhancment 1                     |"
				"\n|                                           |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK\t\t\t\t    ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("| \n|___________________________________________|");

			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");
			if (*ptr_cCount >= 15)
			{
				return;
			}
			printf("\n\n\t\t");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number)");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\nEnter Your Selection Or 0 To Go Back: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}

		switch (choice)
		{
		case 1:
			//Harassment
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Harassment || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Harassment || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Harassment || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Harassment || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Harassment || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Harassment || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Harassment || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Harassment || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Harassment || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Harassment || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Harassment || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Harassment || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Harassment || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Harassment || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Harassment || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + HARRASMENT_FINE;
			
			break;
		case 2:
			//Public Damage
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Public Damage || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Public Damage || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Public Damage || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Public Damage || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Public Damage || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Public Damage || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Public Damage || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Public Damage || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Public Damage || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Public Damage || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Public Damage || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Public Damage || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Public Damage || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Public Damage || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Public Damage || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + PUBLIC_DAMAGE_FINE;
			*ptr_jailTime = *ptr_jailTime + PUBLIC_DAMAGE_JAIL;
			break;

		case 3:
			//Private Damage
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Private Damage || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Private Damage || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Private Damage || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Private Damage || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Private Damage || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Private Damage || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Private Damage || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Private Damage || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Private Damage || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Private Damage || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Private Damage || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Private Damage || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Private Damage || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Private Damage || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Private Damage || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + PRIVATE_DAMAGE_FINE;
			*ptr_jailTime = *ptr_jailTime + PRIVATE_DAMAGE_JAIL;
			break;

		case 4:
			//Government Damage
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Government Damage || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Government Damage || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Government Damage || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Government Damage || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Government Damage || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Government Damage || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Government Damage || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Government Damage || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Government Damage || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Government Damage || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Government Damage || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Government Damage || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Government Damage || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Government Damage || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Government Damage || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + GOVERNMENT_DAMAGE_FINE;
			*ptr_jailTime = *ptr_jailTime + GOVERNMENT_DAMAGE_JAIL;
			break;

		case 5:
			//Public Intoxication
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Public Intoxication || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Public Intoxication || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + PUBLIC_INTOXICATION_FINE;
			*ptr_jailTime = *ptr_jailTime + PUBLIC_INTOXICATION_JAIL;
			break;

		case 6:
			//Obstruction
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Obstruction || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Obstruction || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Obstruction || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Obstruction || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Obstruction || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Obstruction || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Obstruction || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Obstruction || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Obstruction || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Obstruction || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Obstruction || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Obstruction || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Obstruction || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Obstruction || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Obstruction || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + OBSTRUCTION_FINE;
			*ptr_jailTime = *ptr_jailTime + OBSTRUCTION_JAIL;
			break;

		case 7:
			//Disturbing The Peace
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Disturbing The Peace || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Disturbing The Peace || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DISTURBING_THE_PEACE_FINE;
			*ptr_jailTime = *ptr_jailTime + DISTURBING_THE_PEACE_JAIL;
			break;

		case 8:
			//Discharge of A Firearm
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Discharge of A Firearm || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Discharge of A Firearm || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DISCHARGE_OF_A_FIREARM_FINE;
			*ptr_jailTime = *ptr_jailTime + DISCHARGE_OF_A_FIREARM_JAIL;
			break;

		case 9:
			//Attempted Robbery
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Attempted Robbery || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Attempted Robbery || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ATTEMPTED_ROBBERY_FINE;
			*ptr_jailTime = *ptr_jailTime + ATTEMPTED_ROBBERY_JAIL;
			break;

		case 10:
			//Attempted GTA
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Attempted GTA || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Attempted GTA || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ATTEMPTED_GTA_FINE;
			*ptr_jailTime = *ptr_jailTime + ATTEMPTED_GTA_JAIL;
			break;


		case 11:
			//Possession of Raw Illegal Drugs
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Possession of Raw Illegal Drugs || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Possession of Raw Illegal Drugs || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
			*ptr_jailTime = *ptr_jailTime + POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			break;

		case 12:
			//Loitering
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Loitering || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Loitering || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Loitering || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Loitering || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Loitering || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Loitering || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Loitering || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Loitering || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Loitering || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Loitering || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Loitering || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Loitering || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Loitering || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Loitering || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Loitering || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + LOITERING_FINE;
			
			break;

		case 13:
			//Accessory To A Crime
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Accessory To A Crime || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Accessory To A Crime || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ACCESSORY_TO_A_CRIME_FINE;
			*ptr_jailTime = *ptr_jailTime + ACCESSORY_TO_A_CRIME_JAIL;
			break;

		case 14:
			//Assault
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Assault || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Assault || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Assault || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Assault || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Assault || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Assault || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Assault || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Assault || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Assault || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Assault || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Assault || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Assault || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Assault || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Assault || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Assault || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ASSAULT_FINE;
			*ptr_jailTime = *ptr_jailTime + ASSAULT_JAIL;
			break;


		case 15:
			//Resisting Arrest
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Resisting Arrest || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Resisting Arrest || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + RESISTING_ARREST_FINE;
			*ptr_jailTime = *ptr_jailTime + RESISTING_ARREST_JAIL;
			break;

		case 16:
			//Animal Abuse
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Animal Abuse || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Animal Abuse || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ANIMAL_ABUSE_FINE;
			*ptr_jailTime = *ptr_jailTime + ANIMAL_ABUSE_JAIL;
			break;

		case 17:
			//Misuse of 911
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Misuse of 911 || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Misuse of 911 || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + MISUSE_OF_911_FINE;
			
			break;

		case 18:
			//Bribery
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Bribery || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Bribery || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Bribery || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Bribery || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Bribery || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Bribery || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Bribery || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Bribery || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Bribery || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Bribery || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Bribery || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Bribery || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Bribery || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Bribery || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Bribery || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + BRIBERY_FINE;
			*ptr_jailTime = *ptr_jailTime + BRIBERY_JAIL;
			break;

		case 19:
			//Contempt of Court
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Contempt of Court || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Contempt of Court || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + CONTEMPT_OF_COURT_FINE;
			*ptr_jailTime = *ptr_jailTime + CONTEMPT_OF_COURT_JAIL;
			break;

		case 20:
			//Tampering With Evidence
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Tampering With Evidence || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Tampering With Evidence || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + TAMPERING_WITH_EVIDENCE_FINE;
			*ptr_jailTime = *ptr_jailTime + TAMPERING_WITH_EVIDENCE_JAIL;
			break;


		case 21:
			//Failure To Provide Drivers License
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Failure To Provide Drivers License || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Failure To Provide Drivers License || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
			
			break;


		case 22:
			//Level 1 Illegal Weapon
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Level 1 Illegal Weapon || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Level 1 Illegal Weapon || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + LEVEL_1_ILLEGAL_WEAPON_FINE;
			*ptr_jailTime = *ptr_jailTime + LEVEL_1_ILLEGAL_WEAPON_JAIL;
			break;

		case 23:
			//Level 2 Illegal Weapon
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Level 2 Illegal Weapon || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Level 2 Illegal Weapon || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + LEVEL_2_ILLEGAL_WEAPON_FINE;
			*ptr_jailTime = *ptr_jailTime + LEVEL_2_ILLEGAL_WEAPON_JAIL;
			break;


		case 24:
			//Gang Enhancment 1
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Gang Enhancement 1 || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Gang Enhancement 1 || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + GANG_ENHANCEMENT_ONE;
			break;



		case 0:

			break;

		default:printf("\n\n\n\t\t Choose options 0-26! ");
			break;
		}
	} while (choice);
}

void felonys(int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_cCount, int* ptr_jail, int* ptr_dirtyMoney, int* ptr_maxJail, int* ptr_maxFine)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int dirtyMoneyIn = 0;
	*ptr_dirtyMoney = 0;
	int choice;
	do
	{
		printf(
			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t --FELONIES--"
			"\n ______________________________________________"
			"\n| 1. Stalking                                  |"
			"\n| 2. Forcible Confinement of A Resident        |"
			"\n| 3. Forcible Confinement of A City Worker     |"
			"\n| 4. Reckless Driving                          |"
			"\n| 5. Felony Evading                            |"
			"\n| 6. Possession of A Stolen Vehicle            |"
			"\n| 7. Aggravated Assault                        |"
			"\n| 8. Assault On A City Worker                  |"
			"\n| 9. Attempted Murder of A Civilian            |"
			"\n| 10. Attempted Murder of A City Worker        |"
			"\n| 11. Manslaughter (Murder of local)           |"
			"\n| 12. Unarmed Robbery                          |"
			"\n| 13. Armed Robbery                            |"
			"\n| 14. Contraband Trafficking                   |"
			"\n| 15. Intent To Distribute                     |"
			"\n| 16. Possession of Dirty Money                |"
			"\n| 17. Level 3 Illegal Weapon                   |"
			"\n| 18. Unarmed GTA                              |"
			"\n| 19. Armed GTA                                |"
			"\n| 20. Extortion                                |"
			"\n| 21. Bootleg Alcohol                          |"
			"\n| 22. Gang Enhancment 2                        |"
			"\n| 23. Driving With Suspended License           |"
			"\n|                                              |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf("0. BACK                                      ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("| \n|______________________________________________|");

		printf("\n\n=============================");

		if (*ptr_cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
		}


		if (*ptr_fine < *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_fine);
		}
		if (*ptr_fine >= *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
		}
		else if (*ptr_jailTime < *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
		}
		else if (*ptr_jailTime >= *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);

		}
		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (*ptr_jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", *ptr_jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
		}
		printf("\n=============================");
		if (*ptr_cCount >= 15)
		{
			return;
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nEnter Your Selection Or 0 To Go Back: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{

			printf(
				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t --FELONIES--"
				"\n ______________________________________________"
				"\n| 1. Stalking                                  |"
				"\n| 2. Forcible Confinement of A Resident        |"
				"\n| 3. Forcible Confinement of A City Worker     |"
				"\n| 4. Reckless Driving                          |"
				"\n| 5. Felony Evading                            |"
				"\n| 6. Possession of A Stolen Vehicle            |"
				"\n| 7. Aggravated Assault                        |"
				"\n| 8. Assault On A City Worker                  |"
				"\n| 9. Attempted Murder of A Civilian            |"
				"\n| 10. Attempted Murder of A City Worker        |"
				"\n| 11. Manslaughter (Murder of local)           |"
				"\n| 12. Unarmed Robbery                          |"
				"\n| 13. Armed Robbery                            |"
				"\n| 14. Contraband Trafficking                   |"
				"\n| 15. Intent To Distribute                     |"
				"\n| 16. Possession of Dirty Money                |"
				"\n| 17. Level 3 Illegal Weapon                   |"
				"\n| 18. Unarmed GTA                              |"
				"\n| 19. Armed GTA                                |"
				"\n| 20. Extortion                                |"
				"\n| 21. Bootleg Alcohol                          |"
				"\n| 22. Gang Enhancment 2                        |"
				"\n| 23. Driving With Suspended License           |"
				"\n|                                              |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK                                      ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("| \n|______________________________________________|");

			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");
			if (*ptr_cCount >= 15)
			{
				return;
			}
			printf("\n\n\t\t");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\nEnter Your Selection Or 0 To Go Back: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}

		switch (choice)
		{
		case 1:
			//Stalking
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Stalking || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Stalking || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Stalking || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Stalking || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Stalking || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Stalking || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Stalking || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Stalking || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Stalking || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Stalking || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Stalking || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Stalking || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Stalking || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Stalking || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Stalking || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + STALKING_FINE;
			*ptr_jailTime = *ptr_jailTime + STALKING_JAIL;
			break;
		case 2:
			//Forcible Confinement of A Resident
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Forcible Confinement of A Resident || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Forcible Confinement of A Resident || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
			*ptr_jailTime = *ptr_jailTime + FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			break;

		case 3:
			//Forcible Confinement of A City Worker
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Forcible Confinement of A City Worker || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Forcible Confinement of A City Worker || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
			*ptr_jailTime = *ptr_jailTime + FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			break;

		case 4:
			//Reckless Driving
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Reckless Driving || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Reckless Driving || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + RECKLESS_DRIVING_FINE;
			*ptr_jailTime = *ptr_jailTime + RECKLESS_DRIVING_JAIL;
			break;


		case 5:
			//Felony Evading
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Felony Evading || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Felony Evading || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Felony Evading || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Felony Evading || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Felony Evading || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Felony Evading || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Felony Evading || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Felony Evading || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Felony Evading || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Felony Evading || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Felony Evading || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Felony Evading || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Felony Evading || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Felony Evading || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Felony Evading || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + RECKLESS_DRIVING_WHILE_EVADING_FINE;
			*ptr_jailTime = *ptr_jailTime + RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			break;

		case 6:
			//Possession of A Stolen Vehicle
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Possession of A Stolen Vehicle || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Possession of A Stolen Vehicle || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
			*ptr_jailTime = *ptr_jailTime + POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			break;

		case 7:
			//Aggravated Assault
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Aggravated Assault || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Aggravated Assault || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + AGGRAVATED_ASSAULT_FINE;
			*ptr_jailTime = *ptr_jailTime + AGGRAVATED_ASSAULT_JAIL;
			break;

		case 8:
			//Assault On A City Worker
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Assault On A City Worker || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Assault On A City Worker || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ASSUALT_ON_A_CITY_WORKER_FINE;
			*ptr_jailTime = *ptr_jailTime + ASSUALT_ON_A_CITY_WORKER_JAIL;
			break;

		case 9:
			//Attempted Murder of A Civilian
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Attempted Murder of A Civilian || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Attempted Murder of A Civilian || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
			*ptr_jailTime = *ptr_jailTime + ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			break;

		case 10:
			//Attempted Murder of A City Worker
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Attempted Murder of A City Worker || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Attempted Murder of A City Worker || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
			*ptr_jailTime = *ptr_jailTime + ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			break;

		case 11:
			//Manslaughter
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Manslaughter || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Manslaughter || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Manslaughter || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Manslaughter || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Manslaughter || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Manslaughter || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Manslaughter || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Manslaughter || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Manslaughter || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Manslaughter || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Manslaughter || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Manslaughter || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Manslaughter || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Manslaughter || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Manslaughter || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + MANSLAUGHTER_FINE;
			*ptr_jailTime = *ptr_jailTime + MANSLAUGHTER_JAIL;
			break;

		case 12:
			//Unarmed Robbery
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Unarmed Robbery || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Unarmed Robbery || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + UNARMED_ROBBERY_FINE;
			*ptr_jailTime = *ptr_jailTime + UNARMED_ROBBERY_JAIL;
			break;

		case 13:
			//Armed Robbery
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Armed Robbery || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Armed Robbery || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ARMED_ROBBERY_FINE;
			*ptr_jailTime = *ptr_jailTime + ARMED_ROBBERY_JAIL;
			break;

		case 14:
			//Contraband Trafficking
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Contraband Trafficking || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Contraband Trafficking || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + CONTRABAND_TRAFFICKING_FINE;
			*ptr_jailTime = *ptr_jailTime + CONTRABAND_TRAFFICKING_JAIL;
			break;

		case 15:
			//Intent To Distribute
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Intent To Distribute || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Intent To Distribute || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + INTENT_TO_DISTRIBUTE_FINE;
			*ptr_jailTime = *ptr_jailTime + INTENT_TO_DISTRIBUTE_JAIL;
			break;

		case 16:
			//Possession of Dirty Money
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Possession of Dirty Money || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Possession of Dirty Money || ");
			}

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n -Please Enter Amount of Dirty Money Below-");
			printf("\n\n\n\n\n\n\n\nAMOUNT OF DIRTY MONEY:");
			scanf("%d", &dirtyMoneyIn);

			if (dirtyMoneyIn < 999)
			{
				*ptr_fine = *ptr_fine + 500;
				*ptr_jailTime = *ptr_jailTime + 5;
				*ptr_dirtyMoney = 1;
			}
			else if (dirtyMoneyIn < 9999)
			{
				*ptr_fine = *ptr_fine + 800;
				*ptr_jailTime = *ptr_jailTime + 10;
				*ptr_dirtyMoney = 2;
			}
			else if (dirtyMoneyIn < 49999)
			{
				*ptr_fine = *ptr_fine + 1500;
				*ptr_jailTime = *ptr_jailTime + 15;
				*ptr_dirtyMoney = 3;
			}
			else (dirtyMoneyIn >= 50000);
			{
				*ptr_fine = *ptr_fine + 5000;
				*ptr_jailTime = *ptr_jailTime + 20;
				*ptr_dirtyMoney = 4;
			}
			*ptr_cCount = *ptr_cCount + 1;
			break;

	

		case 17:
			//Level 3 Illegal Weapon
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Level 3 Illegal Weapon || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Level 3 Illegal Weapon || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + LEVEL_3_ILLEGAL_WEAPON_FINE;
			*ptr_jailTime = *ptr_jailTime + LEVEL_3_ILLEGAL_WEAPON_JAIL;
			break;
		case 18:
			//Unarmed GTA
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Unarmed GTA || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Unarmed GTA || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + UNARMED_GTA_FINE;
			*ptr_jailTime = *ptr_jailTime + UNARMED_GTA_JAIL;
			break;
		case 19:
			//Armed GTA
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Armed GTA || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Armed GTA || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Armed GTA || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Armed GTA || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Armed GTA || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Armed GTA || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Armed GTA || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Armed GTA || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Armed GTA || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Armed GTA || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Armed GTA || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Armed GTA || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Armed GTA || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Armed GTA || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Armed GTA || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + ARMED_GTA_FINE;
			*ptr_jailTime = *ptr_jailTime + ARMED_GTA_JAIL;
			break;

		case 20:
			//Extortion
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Extortion || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Extortion || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Extortion || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Extortion || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Extortion || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Extortion || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Extortion || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Extortion || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Extortion || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Extortion || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Extortion || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Extortion || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Extortion || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Extortion || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Extortion || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + EXTORTION_FINE;
			*ptr_jailTime = *ptr_jailTime + EXTORTION_JAIL;
			break;

		case 21:
			//Bootleg Alcohol
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Bootleg Alcohol || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Bootleg Alcohol || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + BOOTLEG_ALCOHOL_FINE;
			*ptr_jailTime = *ptr_jailTime + BOOTLEG_ALCOHOL_JAIL;
			break;

		case 22:
			//Gang Enhancment 2
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Gang Enhancement 2 || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Gang Enhancement 2 || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + GANG_ENHANCEMENT_TWO;
			break;

		case 23:
			//Driving on suspended License
			if (strcmp(chargeA, "") == 0)
			{
				strcpy(chargeA, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeB, "") == 0)
			{
				strcpy(chargeB, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeC, "") == 0)
			{
				strcpy(chargeC, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeD, "") == 0)
			{
				strcpy(chargeD, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeE, "") == 0)
			{
				strcpy(chargeE, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeF, "") == 0)
			{
				strcpy(chargeF, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeG, "") == 0)
			{
				strcpy(chargeG, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeH, "") == 0)
			{
				strcpy(chargeH, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeI, "") == 0)
			{
				strcpy(chargeI, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeJ, "") == 0)
			{
				strcpy(chargeJ, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeK, "") == 0)
			{
				strcpy(chargeK, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeL, "") == 0)
			{
				strcpy(chargeL, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeM, "") == 0)
			{
				strcpy(chargeM, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeN, "") == 0)
			{
				strcpy(chargeN, "|| Driving With Suspended License || ");
			}
			else if (strcmp(chargeO, "") == 0)
			{
				strcpy(chargeO, "|| Driving With Suspended License || ");
			}
			*ptr_cCount = *ptr_cCount + 1;
			*ptr_fine = *ptr_fine + DRIVING_WITH_SUSPENDED_LICENSE_FINE;
			*ptr_jailTime = *ptr_jailTime + DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			break;

		case 0:

			break;

		default:printf("\n\n\n\t\t Choose options 0-23! ");
			break;
		}
	} while (choice);
}

void jailCell(int* ptr_jail)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int choice;
	int choiceCount = 0;
	do
	{
		printf(

			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n     -JAIL OPTIONS-    "
			"\n _____________________"
			"\n| 1. Jail Cell 1      |"
			"\n| 2. Jail Cell 2      |"
			"\n| 3. Jail Cell 3      |"
			"\n| 4. Prison           |"
			"\n|                     |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("\t      | "
			"\n|_____________________|");
		if (choiceCount > 0)
		{
			printf("\n\n -Jail Option Set!-");
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nSelect Jail Option: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{
			printf(

				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n     -JAIL OPTIONS-    "
				"\n _____________________"
				"\n| 1. Jail Cell 1      |"
				"\n| 2. Jail Cell 2      |"
				"\n| 3. Jail Cell 3      |"
				"\n| 4. Prison           |"
				"\n|                     |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\t      | "
				"\n|_____________________|");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n\n\t\tERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\nEnter Your Selection Or 0 To Go Back: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}

		switch (choice)
		{
		case 1:
			*ptr_jail = 1;
			choiceCount++;

			return;

		case 2:
			*ptr_jail = 2;
			choiceCount++;

			return;

		case 3:
			*ptr_jail = 3;
			choiceCount++;

			return;

		case 4:
			*ptr_jail = 5;
			choiceCount++;

			return;

		case 0:
			break;
		default:
			printf("\n Choose options 0-4! ");
			break;
		}
	} while (choice);

}

void manuallySet(int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_cCount, int* ptr_jail, int* ptr_maxJail, int* ptr_maxFine)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int choice;
	int choiceCount = 0;
	int newFine;
	int newJailTime;


	do
	{

		printf(

			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
			"\t-Options-"
			"\n _____________________"
			"\n| 1. Change Fine      |"
			"\n| 2. Change Jail Time |"
			"\n|                     |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("\t      | "
			"\n|_____________________|");




		printf("\n\n=============================");

		if (*ptr_cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
		}


		if (*ptr_fine < *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_fine);
		}
		if (*ptr_fine >= *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
		}
		else if (*ptr_jailTime < *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
		}
		else if (*ptr_jailTime >= *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);

		}
		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (*ptr_jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", *ptr_jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
		}
		printf("\n=============================");

		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nENTER YOUR SELECTION: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);

		while (scanf("%d", &choice) != 1)
		{
			printf(

				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
				"\t-Options-"
				"\n _____________________"
				"\n| 1. Change Fine      |"
				"\n| 2. Change Jail Time |"
				"\n|                     |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\t      | "
				"\n|_____________________|");



			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");

			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n\n\t\tERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\nPlease Make Your Selection: ");
			scanf("%*[^\n]");
		}

		switch (choice)
		{
		case 1:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n -Enter Custom Fine Amount Below-");
			printf("\n\n=============================");
			if (*ptr_cCount >= 15)
			{
				*ptr_cCount = 15;
				printf("\n-Total Number of Charges: %d (MAX CHARGES)", *ptr_cCount);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}

			if (*ptr_fine < MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d (MAX Fine)", MAX_FINE_AMOUNT);
			}

			if (*ptr_jailTime < MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			if (*ptr_jailTime >= MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks (MAX Time)", MAX_JAIL_TIME);
			}
			if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\n\n\nENTER NEW FINE AMOUNT:");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%d", &newFine);
			*ptr_fine = newFine;
			choiceCount++;

			break;

		case 2:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n -Enter Custom Jail Time Below-");
			printf("\n\n=============================");
			if (*ptr_cCount >= 15)
			{
				*ptr_cCount = 15;
				printf("\n-Total Number of Charges: %d (MAX CHARGES)", *ptr_cCount);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}

			if (*ptr_fine < MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d (MAX Fine)", MAX_FINE_AMOUNT);
			}

			if (*ptr_jailTime < MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			if (*ptr_jailTime >= MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks (MAX Time)", MAX_JAIL_TIME);
			}
			if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\n\n\nENTER NEW JAIL TIME: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%d", &newJailTime);
			*ptr_jailTime = newJailTime;
			choiceCount++;

			break;


		case 0:
			break;
		default:printf("\n Choose options 0-2! ");
			break;
		}

	} while (choice);


}

void removeCharge(int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_cCount, int* ptr_jail, int* ptr_removed, int* ptr_dirtyMoney, int* ptr_maxJail, int* ptr_maxFine)
{
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int choice;
	do
	{
		if (*ptr_cCount == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\tERROR! ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("NO CHARGES SELECTED\n\n\n\n\n\n\n\n\n\n\n");
		}
		if (*ptr_cCount >= 1)
		{

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t         -CURRENT CHARGES-\n (Select a Charge to Remove or Enter 0 to go Back)\n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n---------------------------------------------------\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("1.  ");
			puts(chargeA);


			printf("2.  ");
			puts(chargeB);


			printf("3.  ");
			puts(chargeC);

			printf("4.  ");
			puts(chargeD);

			printf("5.  ");
			puts(chargeE);

			printf("6.  ");
			puts(chargeF);

			printf("7.  ");
			puts(chargeG);

			printf("8.  ");
			puts(chargeH);

			printf("9.  ");
			puts(chargeI);

			printf("10. ");
			puts(chargeJ);

			printf("11. ");
			puts(chargeK);

			printf("12. ");
			puts(chargeL);

			printf("13. ");
			puts(chargeM);

			printf("14. ");
			puts(chargeN);

			printf("15. ");
			puts(chargeO);
		}
		if (*ptr_cCount > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n---------------------------------------------------\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= MAX_FINE_AMOUNT)
			{
				printf("\n-Total Fine: $%d", MAX_FINE_AMOUNT);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= MAX_JAIL_TIME)
			{
				printf("\n-Total Jail Time: %d Weeks", MAX_JAIL_TIME);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");

		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\n\n\n\nSelect Charge to Remove OR 0 to go Back: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{
			if (*ptr_cCount >= 1)
			{

				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t         -CURRENT CHARGES-\n (Select a Charge to Remove or Enter 0 to go Back)\n\n");
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("\n---------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("1.  ");
				puts(chargeA);
			}

			printf("2.  ");
			puts(chargeB);


			printf("3.  ");
			puts(chargeC);

			printf("4.  ");
			puts(chargeD);

			printf("5.  ");
			puts(chargeE);

			printf("6.  ");
			puts(chargeF);

			printf("7.  ");
			puts(chargeG);

			printf("8.  ");
			puts(chargeH);

			printf("9.  ");
			puts(chargeI);

			printf("10. ");
			puts(chargeJ);

			printf("11. ");
			puts(chargeK);

			printf("12. ");
			puts(chargeL);

			printf("13. ");
			puts(chargeM);

			printf("14. ");
			puts(chargeN);

			printf("15. ");
			puts(chargeO);


			if (*ptr_cCount > 0)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("\n---------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n=============================");

				if (*ptr_cCount >= 15)
				{
					printf("\n-Total Number of Charges: %d", *ptr_cCount);
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
					printf(" (MAX Charges)");
					SetConsoleTextAttribute(hConsole, saved_attributes);
				}
				else
				{
					printf("\n-Total Number of Charges: %d", *ptr_cCount);
				}


				if (*ptr_fine < MAX_FINE_AMOUNT)
				{
					printf("\n-Total Fine: $%d", *ptr_fine);
				}
				if (*ptr_fine >= MAX_FINE_AMOUNT)
				{
					printf("\n-Total Fine: $%d", MAX_FINE_AMOUNT);
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
					printf(" (MAX Fine)");
					SetConsoleTextAttribute(hConsole, saved_attributes);
				}

				if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
					printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
				}
				else if (*ptr_jailTime < MAX_JAIL_TIME)
				{
					printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
				}
				else if (*ptr_jailTime >= MAX_JAIL_TIME)
				{
					printf("\n-Total Jail Time: %d Weeks", MAX_JAIL_TIME);
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
					printf(" (MAX Time)");
					SetConsoleTextAttribute(hConsole, saved_attributes);

				}
				if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
					printf("\n-Selected Jail: Communty Svcs.");
				}
				else if (*ptr_jail != 5)
				{
					printf("\n-Selected Jail: Cell %d", *ptr_jail);
				}
				else
				{
					printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
				}
				printf("\n=============================");

			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("Enter 0 to go Back : ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}
		switch (choice)
		{
		case 0:
			return;



		case 1:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeA, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeA, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeA, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeA, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeA, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeA, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeA, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			if (!strcmp(chargeA, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeA, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeA, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeA, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeA, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeA, "|| Stunt Racing || ") || !strcmp(chargeA, "|| Drag Racing || ") || !strcmp(chargeA, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeA, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeA, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeA, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeA, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeA, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeA, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeA, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeA, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeA, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeA, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeA, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeA, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeA, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeA, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeA, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeA, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeA, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeA, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeA, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
		
			if (!strcmp(chargeA, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeA, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeA, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeA, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeA, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeA, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeA, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeA, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeA, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeA, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
		
			//Felonys
			if (!strcmp(chargeA, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeA, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeA, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeA, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeA, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeA, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeA, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeA, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeA, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeA, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeA, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeA, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeA, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeA, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeA, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeA, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeA, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeA, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeA, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeA, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeA[0] != '\0')
			{
				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeA, "");
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 2:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeB, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeB, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}

			if (!strcmp(chargeB, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeB, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeB, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeB, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeB, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			if (!strcmp(chargeB, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeB, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeB, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeB, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeB, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeB, "|| Stunt Racing || ") || !strcmp(chargeB, "|| Drag Racing || ") || !strcmp(chargeB, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeB, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeB, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeB, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeB, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeB, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeB, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeB, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeB, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeB, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeB, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeB, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeB, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeB, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeB, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeB, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeB, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeB, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeB, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeB, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeB, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeB, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeB, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeB, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeB, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeB, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeB, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeB, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeB, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeB, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeB, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeB, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeB, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeB, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeB, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeB, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeB, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeB, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeB, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeB, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeB, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeB, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeB, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeB, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeB, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeB, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeB, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeB, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeB, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeB, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeB[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeB, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 3:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeC, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeC, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}

			if (!strcmp(chargeC, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeC, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeC, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeC, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeC, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			if (!strcmp(chargeC, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeC, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeC, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeC, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeC, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeC, "|| Stunt Racing || ") || !strcmp(chargeC, "|| Drag Racing || ") || !strcmp(chargeC, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeC, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeC, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeC, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeC, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeC, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeC, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeC, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeC, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeC, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeC, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeC, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeC, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeC, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeC, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeC, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeC, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeC, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeC, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeC, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeC, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeC, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeC, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeC, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeC, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeC, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeC, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeC, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeC, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeC, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeC, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeC, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeC, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeC, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeC, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeC, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeC, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeC, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeC, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeC, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeC, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeC, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeC, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeC, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeC, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeC, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeC, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeC, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeC, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeC, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeC[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeC, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 4:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeD, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeD, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeD, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeD, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeD, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeD, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeD, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeD, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeD, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeD, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeD, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeD, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeD, "|| Stunt Racing || ") || !strcmp(chargeD, "|| Drag Racing || ") || !strcmp(chargeD, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeD, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeD, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeD, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeD, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeD, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeD, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeD, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeD, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeD, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeD, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeD, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeD, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeD, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeD, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeD, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeD, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeD, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeD, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeD, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeD, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeD, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeD, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeD, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeD, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeD, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeD, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeD, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeD, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeD, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeD, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeD, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeD, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeD, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeD, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeD, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeD, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeD, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeD, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeD, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeD, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeD, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeD, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeD, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeD, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeD, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeD, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeD, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeD, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeD, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeD[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeD, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 5:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeE, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeE, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}

			if (!strcmp(chargeE, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeE, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeE, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeE, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeE, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeE, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeE, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeE, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeE, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeE, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeE, "|| Stunt Racing || ") || !strcmp(chargeE, "|| Drag Racing || ") || !strcmp(chargeE, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeE, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeE, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeE, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeE, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeE, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeE, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeE, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeE, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeE, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeE, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeE, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeE, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeE, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeE, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeE, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeE, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeE, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeE, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeE, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeE, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeE, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeE, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeE, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeE, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeE, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeE, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeE, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeE, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeE, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeE, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeE, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeE, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeE, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeE, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeE, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeE, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeE, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeE, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeE, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeE, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeE, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeE, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeE, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeE, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeE, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeE, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeE, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeE, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeE, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeE[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeE, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 6:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeF, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeF, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}

			if (!strcmp(chargeF, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeF, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeF, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeF, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeF, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
		
			if (!strcmp(chargeF, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeF, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeF, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeF, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeF, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeF, "|| Stunt Racing || ") || !strcmp(chargeF, "|| Drag Racing || ") || !strcmp(chargeF, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeF, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeF, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeF, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeF, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeF, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeF, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeF, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeF, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeF, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeF, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeF, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeF, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeF, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeF, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeF, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeF, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeF, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeF, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeF, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeF, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeF, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeF, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeF, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeF, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeF, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeF, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeF, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeF, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeF, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeF, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeF, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeF, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeF, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeF, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeF, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeF, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeF, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeF, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeF, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeF, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeF, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeF, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeF, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeF, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeF, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeF, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeF, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeF, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeF, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}



			if (chargeF[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeF, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 7:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeG, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeG, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}

			if (!strcmp(chargeG, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeG, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeG, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeG, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeG, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeG, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeG, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeG, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeG, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeG, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeG, "|| Stunt Racing || ") || !strcmp(chargeG, "|| Drag Racing || ") || !strcmp(chargeG, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeG, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeG, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeG, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeG, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeG, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeG, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeG, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeG, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeG, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeG, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeG, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeG, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeG, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeG, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeG, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeG, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeG, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeG, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeG, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeG, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeG, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeG, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeG, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeG, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeG, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeG, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeG, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeG, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeG, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
		
			//Felonys
			if (!strcmp(chargeG, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeG, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeG, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeG, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeG, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeG, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeG, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeG, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeG, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeG, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeG, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeG, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeG, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeG, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeG, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeG, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeG, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeG, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeG, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeG, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeG[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			*ptr_removed++;
			strcpy(chargeG, "");
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 8:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeH, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeH, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeH, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeH, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeH, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeH, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeH, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			if (!strcmp(chargeH, "|| Broken Head / Tail Light || "))
			
			if (!strcmp(chargeH, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeH, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeH, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeH, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeH, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeH, "|| Stunt Racing || ") || !strcmp(chargeH, "|| Drag Racing || ") || !strcmp(chargeH, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeH, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeH, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeH, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeH, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeH, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeH, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeH, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeH, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeH, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeH, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeH, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeH, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeH, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeH, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeH, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeH, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeH, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeH, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeH, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeH, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeH, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeH, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeH, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeH, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeH, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeH, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeH, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeH, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeH, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeH, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeH, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeH, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeH, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeH, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeH, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeH, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeH, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeH, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeH, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeH, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeH, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeH, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeH, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeH, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeH, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeH, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeH, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeH, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeH, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeH[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeH, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 9:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeI, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeI, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeI, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeI, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeI, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeI, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeI, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeI, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeI, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeI, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeI, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeI, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeI, "|| Stunt Racing || ") || !strcmp(chargeI, "|| Drag Racing || ") || !strcmp(chargeI, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeI, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeI, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeI, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeI, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeI, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeI, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeI, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeI, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeI, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeI, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeI, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeI, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeI, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeI, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeI, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeI, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeI, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeI, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeI, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeI, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeI, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeI, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeI, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeI, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeI, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeI, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeI, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeI, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeI, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeI, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeI, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeI, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeI, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeI, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeI, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeI, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeI, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeI, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeI, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeI, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeI, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeI, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeI, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeI, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeI, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeI, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeI, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeI, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeI, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeI[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeI, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 10:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeJ, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeJ, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeJ, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeJ, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeJ, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeJ, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeJ, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
		
			if (!strcmp(chargeJ, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeJ, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeJ, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeJ, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeJ, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Stunt Racing || ") || !strcmp(chargeJ, "|| Drag Racing || ") || !strcmp(chargeJ, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeJ, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeJ, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeJ, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeJ, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeJ, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeJ, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeJ, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeJ, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeJ, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeJ, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeJ, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeJ, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeJ, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeJ, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeJ, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeJ, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeJ, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeJ, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeJ, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeJ, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeJ, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeJ, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeJ, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeJ, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeJ, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeJ, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeJ, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeJ, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeJ, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeJ, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeJ, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeJ, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeJ, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeJ, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeJ, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeJ, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeJ, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeJ[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeJ, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 11:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeK, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeK, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeK, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeK, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeK, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeK, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeK, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeK, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeK, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeK, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeK, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeK, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeK, "|| Stunt Racing || ") || !strcmp(chargeK, "|| Drag Racing || ") || !strcmp(chargeK, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeK, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeK, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeK, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeK, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeK, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeK, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeK, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeK, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeK, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeK, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeK, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeK, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeK, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeK, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeK, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeK, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeK, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeK, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeK, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeK, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeK, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeK, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeK, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeK, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeK, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeK, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeK, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeK, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeK, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeK, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeK, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeK, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeK, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeK, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeK, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeK, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeK, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeK, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeK, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeK, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeK, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeK, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeK, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeK, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeK, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeK, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeK, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeK, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeK, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeK[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeK, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 12:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeL, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeL, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeL, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeL, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeL, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeL, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeL, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
		
			if (!strcmp(chargeL, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeL, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeL, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeL, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeL, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeL, "|| Stunt Racing || ") || !strcmp(chargeL, "|| Drag Racing || ") || !strcmp(chargeL, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeL, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeL, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeL, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeL, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeL, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeL, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeL, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeL, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeL, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeL, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeL, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeL, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeL, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeL, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeL, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeL, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeL, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeL, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeL, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeL, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeL, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeL, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeL, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeL, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeL, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeL, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeL, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeL, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeL, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeL, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeL, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeL, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeL, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeL, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeL, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeL, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeL, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeL, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeL, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeL, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeL, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeL, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeL, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeL, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeL, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeL, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeL, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeL, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeL, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeL[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeL, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 13:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeM, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeM, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeM, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeM, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeM, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeM, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeM, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
		
			if (!strcmp(chargeM, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeM, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeM, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeM, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeM, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeM, "|| Stunt Racing || ") || !strcmp(chargeM, "|| Drag Racing || ") || !strcmp(chargeM, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeM, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeM, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeM, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeM, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeM, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeM, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeM, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeM, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeM, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeM, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeM, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeM, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeM, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeM, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeM, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeM, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeM, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeM, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeM, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeM, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeM, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeM, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeM, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeM, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeM, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeM, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeM, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeM, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeM, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeM, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeM, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeM, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeM, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeM, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeM, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeM, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeM, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeM, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeM, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeM, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeM, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeM, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeM, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeM, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeM, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeM, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeM, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeM, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeM, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeM[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeM, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 14:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeN, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeN, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeN, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeN, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeN, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeN, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeN, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			if (!strcmp(chargeN, "|| Broken Head / Tail Light || "))
			
			if (!strcmp(chargeN, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeN, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeN, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeN, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeN, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeN, "|| Stunt Racing || ") || !strcmp(chargeN, "|| Drag Racing || ") || !strcmp(chargeN, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeN, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeN, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeN, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeN, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeN, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeN, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeN, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeN, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeN, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeN, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeN, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeN, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeN, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeN, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeN, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeN, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeN, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeN, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeN, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
		
			if (!strcmp(chargeN, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeN, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeN, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeN, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeN, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeN, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeN, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeN, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeN, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeN, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeN, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeN, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeN, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeN, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeN, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeN, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeN, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeN, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeN, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeN, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeN, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeN, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeN, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeN, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeN, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeN, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeN, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeN, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeN, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeN, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeN[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeN, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		case 15:
			//Moving Violations
			*ptr_removed++;
			if (!strcmp(chargeO, "|| Gang Enhancement 1 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_ONE;
			}
			if (!strcmp(chargeO, "|| Gang Enhancement 2 || "))
			{
				*ptr_fine = *ptr_fine - GANG_ENHANCEMENT_TWO;
			}
			if (!strcmp(chargeO, "|| Illegal Parking || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_PARKING_FINE;
			}
			if (!strcmp(chargeO, "|| Illegal U-Turn || "))
			{
				*ptr_fine = *ptr_fine - ILLEGAL_UTURN_FINE;
			}
			if (!strcmp(chargeO, "|| Improper Lane Change || "))
			{
				*ptr_fine = *ptr_fine - IMPROPER_LANE_CHANGE_FINE;
			}
			if (!strcmp(chargeO, "|| Driving With No Headlights || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_NO_HEADLIGHTS_FINE;
			}
			if (!strcmp(chargeO, "|| Unroadworthy Vehicle || "))
			{
				*ptr_fine = *ptr_fine - UNROADWORTHY_VEHICLE_FINE;
			}
			
			if (!strcmp(chargeO, "|| Broken Windshield || "))
			{
				*ptr_fine = *ptr_fine - BROKEN_WINDSHIELD_FINE;
			}
			if (!strcmp(chargeO, "|| Failure To Yield To Emergency Vehicle || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_YIELD_TO_EMERGENCY_VEHICLE_FINE;
			}
			if (!strcmp(chargeO, "|| Impeding The Flow of Traffic || "))
			{
				*ptr_fine = *ptr_fine - IMPEDING_THE_FLOW_OF_TRAFFIC_FINE;
			}
			if (!strcmp(chargeO, "|| Speeding || "))
			{
				*ptr_fine = *ptr_fine - SPEEDING_FINE;
			}
			if (!strcmp(chargeO, "|| Driving Under The Influence || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_UNDER_THE_INFLUENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_UNDER_THE_INFLUENCE_JAIL;
			}
			if (!strcmp(chargeO, "|| Stunt Racing || ") || !strcmp(chargeO, "|| Drag Racing || ") || !strcmp(chargeO, "|| Street Racing || "))
			{
				*ptr_fine = *ptr_fine - STUNT_DRAG_STREET_RACING_FINE;
				
			}
			if (!strcmp(chargeO, "|| Driving Without A License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITHOUT_A_LICENSE_FINE;
				
			}
			if (!strcmp(chargeO, "|| Driving The Wrong Way || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_THE_WRONG_WAY_FINE;
			}
			if (!strcmp(chargeO, "|| Hit And Run || "))
			{
				*ptr_fine = *ptr_fine - HIT_AND_RUN_FINE;
				*ptr_jailTime = *ptr_jailTime - HIT_AND_RUN_JAIL;
			}
			if (!strcmp(chargeO, "|| Careless Driving || "))
			{
				*ptr_fine = *ptr_fine - CARELESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - CARELESS_DRIVING_JAIL;
			}
			//Misdemeanors
			if (!strcmp(chargeO, "|| Harrasment || "))
			{
				*ptr_fine = *ptr_fine - HARRASMENT_FINE;
				
			}
			if (!strcmp(chargeO, "|| Public Damage || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_DAMAGE_JAIL;
			}
			if (!strcmp(chargeO, "|| Private Damage || "))
			{
				*ptr_fine = *ptr_fine - PRIVATE_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - PRIVATE_DAMAGE_JAIL;
			}
			if (!strcmp(chargeO, "|| Government Damage || "))
			{
				*ptr_fine = *ptr_fine - GOVERNMENT_DAMAGE_FINE;
				*ptr_jailTime = *ptr_jailTime - GOVERNMENT_DAMAGE_JAIL;
			}
			if (!strcmp(chargeO, "|| Public Intoxication || "))
			{
				*ptr_fine = *ptr_fine - PUBLIC_INTOXICATION_FINE;
				*ptr_jailTime = *ptr_jailTime - PUBLIC_INTOXICATION_JAIL;
			}
			if (!strcmp(chargeO, "|| Obstruction || "))
			{
				*ptr_fine = *ptr_fine - OBSTRUCTION_FINE;
				*ptr_jailTime = *ptr_jailTime - OBSTRUCTION_JAIL;
			}
			if (!strcmp(chargeO, "|| Disturbing The Peace || "))
			{
				*ptr_fine = *ptr_fine - DISTURBING_THE_PEACE_FINE;
				*ptr_jailTime = *ptr_jailTime - DISTURBING_THE_PEACE_JAIL;
			}
			if (!strcmp(chargeO, "|| Discharge of A Firearm || "))
			{
				*ptr_fine = *ptr_fine - DISCHARGE_OF_A_FIREARM_FINE;
				*ptr_jailTime = *ptr_jailTime - DISCHARGE_OF_A_FIREARM_JAIL;
			}
			if (!strcmp(chargeO, "|| Attempted Robbery || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeO, "|| Attempted GTA || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_GTA_JAIL;
			}
			if (!strcmp(chargeO, "|| Bootleg Alcohol || "))
			{
				*ptr_fine = *ptr_fine - BOOTLEG_ALCOHOL_FINE;
				*ptr_jailTime = *ptr_jailTime - BOOTLEG_ALCOHOL_JAIL;
			}
			if (!strcmp(chargeO, "|| Possession of Raw Illegal Drugs || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_RAW_ILLEGAL_DRUGS_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_RAW_ILLEGAL_DRUGS_JAIL;
			}
			if (!strcmp(chargeO, "|| Loitering || "))
			{
				*ptr_fine = *ptr_fine - LOITERING_FINE;
				
			}
			if (!strcmp(chargeO, "|| Accessory To A Crime || "))
			{
				*ptr_fine = *ptr_fine - ACCESSORY_TO_A_CRIME_FINE;
				*ptr_jailTime = *ptr_jailTime - ACCESSORY_TO_A_CRIME_JAIL;
			}
			if (!strcmp(chargeO, "|| Assault || "))
			{
				*ptr_fine = *ptr_fine - ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSAULT_JAIL;
			}
			
			if (!strcmp(chargeO, "|| Resisting Arrest || "))
			{
				*ptr_fine = *ptr_fine - RESISTING_ARREST_FINE;
				*ptr_jailTime = *ptr_jailTime - RESISTING_ARREST_JAIL;
			}
			if (!strcmp(chargeO, "|| Animal Abuse || "))
			{
				*ptr_fine = *ptr_fine - ANIMAL_ABUSE_FINE;
				*ptr_jailTime = *ptr_jailTime - ANIMAL_ABUSE_JAIL;
			}
			if (!strcmp(chargeO, "|| Misuse of 911 || "))
			{
				*ptr_fine = *ptr_fine - MISUSE_OF_911_FINE;
				
			}
			if (!strcmp(chargeO, "|| Bribery || "))
			{
				*ptr_fine = *ptr_fine - BRIBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - BRIBERY_JAIL;
			}
			if (!strcmp(chargeO, "|| Contempt of Court || "))
			{
				*ptr_fine = *ptr_fine - CONTEMPT_OF_COURT_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTEMPT_OF_COURT_JAIL;
			}
			if (!strcmp(chargeO, "|| Tampering With Evidence || "))
			{
				*ptr_fine = *ptr_fine - TAMPERING_WITH_EVIDENCE_FINE;
				*ptr_jailTime = *ptr_jailTime - TAMPERING_WITH_EVIDENCE_JAIL;
			}
			if (!strcmp(chargeO, "|| Extortion || "))
			{
				*ptr_fine = *ptr_fine - EXTORTION_FINE;
				*ptr_jailTime = *ptr_jailTime - EXTORTION_JAIL;
			}
			if (!strcmp(chargeO, "|| Failure To Provide Drivers License || "))
			{
				*ptr_fine = *ptr_fine - FAILURE_TO_PROVIDE_DRIVERS_LICENSE_FINE;
				
			}
			if (!strcmp(chargeO, "|| Level 1 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_1_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_1_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeO, "|| Level 2 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_2_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_2_ILLEGAL_WEAPON_JAIL;
			}
			
			//Felonys
			if (!strcmp(chargeO, "|| Stalking || "))
			{
				*ptr_fine = *ptr_fine - STALKING_FINE;
				*ptr_jailTime = *ptr_jailTime - STALKING_JAIL;
			}
			if (!strcmp(chargeO, "|| Forcible Confinement of A Resident || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_RESIDENT_JAIL;
			}
			if (!strcmp(chargeO, "|| Forcible Confinement of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - FORCIBLE_CONFINEMENT_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeO, "|| Felony Evading || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_WHILE_EVADING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_WHILE_EVADING_JAIL;
			}
			if (!strcmp(chargeO, "|| Possession of A Stolen Vehicle || "))
			{
				*ptr_fine = *ptr_fine - POSSESSION_OF_A_STOLEN_VEHICLE_FINE;
				*ptr_jailTime = *ptr_jailTime - POSSESSION_OF_A_STOLEN_VEHICLE_JAIL;
			}
			if (!strcmp(chargeO, "|| Aggravated Assault || "))
			{
				*ptr_fine = *ptr_fine - AGGRAVATED_ASSAULT_FINE;
				*ptr_jailTime = *ptr_jailTime - AGGRAVATED_ASSAULT_JAIL;
			}
			if (!strcmp(chargeO, "|| Assualt On A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ASSUALT_ON_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ASSUALT_ON_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeO, "|| Attempted Murder of A Civilian || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CIVILIAN_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CIVILIAN_JAIL;
			}
			if (!strcmp(chargeO, "|| Attempted Murder of A City Worker || "))
			{
				*ptr_fine = *ptr_fine - ATTEMPTED_MURDER_OF_A_CITY_WORKER_FINE;
				*ptr_jailTime = *ptr_jailTime - ATTEMPTED_MURDER_OF_A_CITY_WORKER_JAIL;
			}
			if (!strcmp(chargeO, "|| Manslaughter || "))
			{
				*ptr_fine = *ptr_fine - MANSLAUGHTER_FINE;
				*ptr_jailTime = *ptr_jailTime - MANSLAUGHTER_JAIL;
			}
			if (!strcmp(chargeO, "|| Unarmed Robbery || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeO, "|| Armed Robbery || "))
			{
				*ptr_fine = *ptr_fine - ARMED_ROBBERY_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_ROBBERY_JAIL;
			}
			if (!strcmp(chargeO, "|| Contraband Trafficking || "))
			{
				*ptr_fine = *ptr_fine - CONTRABAND_TRAFFICKING_FINE;
				*ptr_jailTime = *ptr_jailTime - CONTRABAND_TRAFFICKING_JAIL;
			}
			if (!strcmp(chargeO, "|| Intent To Distribute || "))
			{
				*ptr_fine = *ptr_fine - INTENT_TO_DISTRIBUTE_FINE;
				*ptr_jailTime = *ptr_jailTime - INTENT_TO_DISTRIBUTE_JAIL;
			}
			
			if (!strcmp(chargeO, "|| Level 3 Illegal Weapon || "))
			{
				*ptr_fine = *ptr_fine - LEVEL_3_ILLEGAL_WEAPON_FINE;
				*ptr_jailTime = *ptr_jailTime - LEVEL_3_ILLEGAL_WEAPON_JAIL;
			}
			if (!strcmp(chargeO, "|| Unarmed GTA || "))
			{
				*ptr_fine = *ptr_fine - UNARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - UNARMED_GTA_JAIL;
			}
			if (!strcmp(chargeO, "|| Armed GTA || "))
			{
				*ptr_fine = *ptr_fine - ARMED_GTA_FINE;
				*ptr_jailTime = *ptr_jailTime - ARMED_GTA_JAIL;
			}
			if (!strcmp(chargeO, "|| Reckless Driving || "))
			{
				*ptr_fine = *ptr_fine - RECKLESS_DRIVING_FINE;
				*ptr_jailTime = *ptr_jailTime - RECKLESS_DRIVING_JAIL;
			}
			if (!strcmp(chargeO, "|| Driving With Suspended License || "))
			{
				*ptr_fine = *ptr_fine - DRIVING_WITH_SUSPENDED_LICENSE_FINE;
				*ptr_jailTime = *ptr_jailTime - DRIVING_WITH_SUSPENDED_LICENSE_JAIL;
			}
			if (!strcmp(chargeO, "|| Possession of Dirty Money || "))
			{
				if (*ptr_dirtyMoney == 1)
				{
					*ptr_fine = *ptr_fine - 500;
					*ptr_jailTime = *ptr_jailTime - 5;
				}
				else if (*ptr_dirtyMoney == 2)
				{
					*ptr_fine = *ptr_fine - 800;
					*ptr_jailTime = *ptr_jailTime - 10;
				}
				else if (*ptr_dirtyMoney == 3)
				{
					*ptr_fine = *ptr_fine - 1500;
					*ptr_jailTime = *ptr_jailTime - 15;
				}
				else if (*ptr_dirtyMoney == 4)
				{
					*ptr_fine = *ptr_fine - 5000;
					*ptr_jailTime = *ptr_jailTime - 20;
				}
			}


			if (chargeO[0] != '\0')
			{

				*ptr_cCount = *ptr_cCount - 1;
			}
			strcpy(chargeO, "");
			*ptr_removed++;
			if (*ptr_cCount < 0)
			{
				*ptr_cCount = 0;
			}
			break;

		default:
			printf("\n Error. Select Charge 1-15!");
			break;

		}
	} while (choice);


}

void dojPicker(int* ptr_id, int* ptr_cService, int* ptr_cCount, int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_jail, int* ptr_removed, int* ptr_dirtyMoney, int* ptr_maxJail, int* ptr_maxFine) {
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int choice;
	int choiceCount = 0;
	do
	{
		printf(

			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n     -DOJ OPTIONS-    "
			"\n ________________________"
			"\n| 1. DOJ NOT Available   |"
			"\n| 2. DOJ Available       |"
			"\n|                        |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("\t         | "
			"\n|________________________|");
		if (choiceCount > 0)
		{
			printf("\n\n -Jail Set!-");
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nSelect DOJ Option: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		while (scanf("%d", &choice) != 1)
		{
			printf(

				"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n     -DOJ OPTIONS-    "
				"\n ________________________"
				"\n| 1. DOJ NOT Available   |"
				"\n| 2. DOJ Available       |"
				"\n|                        |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\t         | "
				"\n|________________________|");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n\n\t\tERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\nEnter Your Selection Or 0 To Go Back: ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			scanf("%*[^\n]");
		}

		//CHECK IF ATTEMPT MURDER CHARGE
		int attCharge = 0;
		if (!strcmp(chargeA, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeB, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeC, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeD, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeE, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeF, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeG, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeH, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeI, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeJ, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeK, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeL, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeM, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeN, "|| Attempted Murder of A City Worker || ") || !strcmp(chargeO, "|| Attempted Murder of A City Worker || ")) {
			attCharge = 1;
		}

		switch (choice)
		{
		case 1:
			//doj offline
			choiceCount++;
			*ptr_maxFine = 30000;
			*ptr_maxJail = 30;
			if (attCharge == 1) {
				*ptr_maxFine = 75000;
				*ptr_maxJail = 60;
			}
			return;

		case 2:
			//doj online
			choiceCount++;
			*ptr_maxFine = 100000;
			*ptr_maxJail = 60;
			if (attCharge == 1) {
				*ptr_maxFine = 150000;
				*ptr_maxJail = 90;
			}
			return;


		case 0:
			break;
		default:
			printf("\n Choose options 0-2! ");
			break;
		}
	} while (choice);


}

void printCodes(int* ptr_id, int* ptr_cService, int* ptr_cCount, int* ptr_fine, int* ptr_jailTime, char chargeA[50], char chargeB[50], char chargeC[50], char chargeD[50], char chargeE[50], char chargeF[50], char chargeG[50], char chargeH[50], char chargeI[50], char chargeJ[50], char chargeK[50], char chargeL[50], char chargeM[50], char chargeN[50], char chargeO[50], int* ptr_jail, int* ptr_removed, int* ptr_dirtyMoney, int* ptr_maxJail, int* ptr_maxFine) {
	//Color Stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	//date stuff:
	int day, month, year;
	time_t now;
	time(&now);
	struct tm* local = localtime(&now);
	day = local->tm_mday;            // get day of month (1 to 31)
	month = local->tm_mon + 1;       // get month of year (0 to 11)
	year = local->tm_year + 1900;    // get year since 1900


	//Alert codes:
	int alertCode = 0; //default
	//alertCode 1 = fine code copied
	//alertCode 2 = jail code copied
	//alertCode 3 = cService print
	//alertCode 4 = cService is 0
	//alertCode 5 = no jail code needed

	//Menu
	int choice;
	int choiceCount = 0;
	do
	{
		if (alertCode == 0) { printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); }
		if (alertCode == 1) {
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -Fine Code Copied To Clipboard!-\n\n\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		if (alertCode == 2) {
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -Jail Code Copied To Clipboard!-\n\n\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		if (alertCode == 4) {
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("Community Service is 0- \n\n\n");
		}
		if (alertCode == 5) {
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("Jail Time is 0- \n\n\n");
		}
		if (alertCode == 3) {


			if (*ptr_cService >= 1 && *ptr_jailTime <= 10) {
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n COMMUNITY SERVICE:");
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("\n-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n Community Service Tasks: %d \n", *ptr_cService);
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n\n\n");
			}


		}
		printf("\n");



		printf(

			"    -PRINT OPTIONS-    "
			"\n _____________________"
			"\n| 1. Copy Fine Code   |"
			"\n| 2. Copy Jail Code   |"
			"\n| 3. Print C Service  |"
			"\n|                     |"
			"\n| ");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("0. BACK");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf("\t      | "
			"\n|_____________________|");

		printf("\n\n=============================");

		if (*ptr_cCount >= 15)
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Charges)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else
		{
			printf("\n-Total Number of Charges: %d", *ptr_cCount);
		}


		if (*ptr_fine < *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_fine);
		}
		if (*ptr_fine >= *ptr_maxFine)
		{
			printf("\n-Total Fine: $%d", *ptr_maxFine);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Fine)");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
		}
		else if (*ptr_jailTime < *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
		}
		else if (*ptr_jailTime >= *ptr_maxJail)
		{
			printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf(" (MAX Time)");
			SetConsoleTextAttribute(hConsole, saved_attributes);

		}
		if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
			printf("\n-Selected Jail: Communty Svcs.");
		}
		else if (*ptr_jail != 5)
		{
			printf("\n-Selected Jail: Cell %d", *ptr_jail);
		}
		else
		{
			printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
		}
		printf("\n=============================");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("\n\nSelect Code Option: ");
		SetConsoleTextAttribute(hConsole, saved_attributes);

		while (scanf("%d", &choice) != 1)
		{
			if (alertCode == 0) { printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); }
			if (alertCode == 1) {
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -Fine Code Copied To Clipboard!-\n\n\n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			if (alertCode == 2) {
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -Jail Code Copied To Clipboard!-\n\n\n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			if (alertCode == 4) {
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -");
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("ERROR ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("Community Service is 0- \n\n\n");
			}
			if (alertCode == 5) {
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  -");
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("ERROR ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("Jail Time is 0- \n\n\n");
			}
			//CService
			if (alertCode == 3) {


				if (*ptr_cService >= 1 && *ptr_jailTime <= 10) {
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n COMMUNITY SERVICE:");
					SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
					printf("\n-----------------------------------------------------------------------------------------------");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					printf("\n Community Service Tasks: %d \n", *ptr_cService);
					SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
					printf("-----------------------------------------------------------------------------------------------");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					printf("\n\n\n\n");
				}




			}
			printf("\n");



			printf(

				"    -PRINT OPTIONS-    "
				"\n _____________________"
				"\n| 1. Copy Fine Code   |"
				"\n| 2. Copy Jail Code   |"
				"\n| 3. Print C Service  |"
				"\n|                     |"
				"\n| ");
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("0. BACK");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\t      | "
				"\n|_____________________|");

			printf("\n\n=============================");

			if (*ptr_cCount >= 15)
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Charges)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else
			{
				printf("\n-Total Number of Charges: %d", *ptr_cCount);
			}


			if (*ptr_fine < *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_fine);
			}
			if (*ptr_fine >= *ptr_maxFine)
			{
				printf("\n-Total Fine: $%d", *ptr_maxFine);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Fine)");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}

			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Total Jail Time: %d Weeks (Community Svcs.)", *ptr_jailTime);
			}
			else if (*ptr_jailTime < *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_jailTime);
			}
			else if (*ptr_jailTime >= *ptr_maxJail)
			{
				printf("\n-Total Jail Time: %d Weeks", *ptr_maxJail);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf(" (MAX Time)");
				SetConsoleTextAttribute(hConsole, saved_attributes);

			}
			if (*ptr_jailTime <= 10 && *ptr_cCount >= 1 && *ptr_jailTime > 1) {
				printf("\n-Selected Jail: Communty Svcs.");
			}
			else if (*ptr_jail != 5)
			{
				printf("\n-Selected Jail: Cell %d", *ptr_jail);
			}
			else
			{
				printf("\n-Selected Jail: %d (Prison)", *ptr_jail);
			}
			printf("\n=============================");

			printf("\n\n\t\t");
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR!");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
			printf("\n\n(You Entered A Letter Instead Of A Number) \n\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("Please Select Code Option : ");
			scanf("%*[^\n]");
		}

		switch (choice)
		{
			//copy fine to clipboard
		case 1:
			if (*ptr_fine <= *ptr_maxFine)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n FINE COMMAND:");
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("\n-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n/fine %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%sISSUED: %02d/%02d/%d  \n", *ptr_id, *ptr_fine, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);

				alertCode = 1;

				/////////////////////////////////////////////Copy to clipboard
				char codeToCopy[420];
				sprintf(codeToCopy, "/fine %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%sISSUED: %02d/%02d/%d", *ptr_id, *ptr_fine, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);

				const char* output = codeToCopy;
				const size_t len = strlen(output) + 1;
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
				memcpy(GlobalLock(hMem), output, len);
				GlobalUnlock(hMem);
				OpenClipboard(0);
				EmptyClipboard();
				SetClipboardData(CF_TEXT, hMem);
				CloseClipboard();
				///////////////////////////////////////////
			}
			else if (*ptr_fine > * ptr_maxFine)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n FINE COMMAND:");
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("\n-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n/fine %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%sISSUED: %02d/%02d/%d \n", *ptr_id, *ptr_maxFine, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);

				alertCode = 1;

				/////////////////////////////////////////////Copy to clipboard
				char codeToCopy[420];
				sprintf(codeToCopy, "/fine %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%sISSUED: %02d/%02d/%d", *ptr_id, *ptr_maxFine, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);

				const char* output = codeToCopy;
				const size_t len = strlen(output) + 1;
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
				memcpy(GlobalLock(hMem), output, len);
				GlobalUnlock(hMem);
				OpenClipboard(0);
				EmptyClipboard();
				SetClipboardData(CF_TEXT, hMem);
				CloseClipboard();
				///////////////////////////////////////////
			}

			//choiceCount++;

			break;

		case 2:
			//jail code
			if (*ptr_jailTime <= *ptr_maxJail && *ptr_cCount > 0 && *ptr_jailTime > 0 && *ptr_jailTime > 10)
			{
				printf("\n\n JAIL COMMAND:");
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("\n-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n/jail%d %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s ISSUED: %02d/%02d/%d", *ptr_jail, *ptr_id, *ptr_jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);

				alertCode = 2;

				/////////////////////////////////////////////Copy to clipboard
				char codeToCopy[420];
				sprintf(codeToCopy, "/jail%d %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s ISSUED: %02d/%02d/%d", *ptr_jail, *ptr_id, *ptr_jailTime, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);

				const char* output = codeToCopy;
				const size_t len = strlen(output) + 1;
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
				memcpy(GlobalLock(hMem), output, len);
				GlobalUnlock(hMem);
				OpenClipboard(0);
				EmptyClipboard();
				SetClipboardData(CF_TEXT, hMem);
				CloseClipboard();
				///////////////////////////////////////////

			}



			if (*ptr_jailTime > * ptr_maxJail&&* ptr_cCount > 0 && *ptr_jailTime > 0 && *ptr_jailTime > 10)
			{
				printf("\n\n JAIL COMMAND:");
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("\n-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n/jail%d %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s ISSUED: %02d/%02d/%d", *ptr_jail, *ptr_id, *ptr_maxJail, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);
				SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
				printf("-----------------------------------------------------------------------------------------------");
				SetConsoleTextAttribute(hConsole, saved_attributes);

				alertCode = 2;

				/////////////////////////////////////////////Copy to clipboard
				char codeToCopy[420];
				sprintf(codeToCopy, "/jail%d %d %d %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s ISSUED: %02d/%02d/%d", *ptr_jail, *ptr_id, *ptr_maxJail, chargeA, chargeB, chargeC, chargeD, chargeE, chargeF, chargeG, chargeH, chargeI, chargeJ, chargeK, chargeL, chargeM, chargeN, chargeO, month, day, year);

				const char* output = codeToCopy;
				const size_t len = strlen(output) + 1;
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
				memcpy(GlobalLock(hMem), output, len);
				GlobalUnlock(hMem);
				OpenClipboard(0);
				EmptyClipboard();
				SetClipboardData(CF_TEXT, hMem);
				CloseClipboard();
				///////////////////////////////////////////
			}



			if (*ptr_jailTime <= 10) { alertCode = 5; }

			break;

		case 3:
			//Calc Community service tasks
			if (*ptr_jailTime < *ptr_maxJail) {
				*ptr_cService = *ptr_jailTime * 3;
			}
			else {
				*ptr_cService = *ptr_maxJail * 3;
			}

			//if (*ptr_jailTime >= 10) { *ptr_cService = 0; }

			if (*ptr_cService > 0) {
				alertCode = 3;
			}
			else {
				alertCode = 4;
			}
			if (*ptr_jailTime >= 30) { alertCode = 4; }

			break;

		case 0:
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		default:
			printf("\n Choose options 0-3! ");
			break;
		}
	} while (choice);


}