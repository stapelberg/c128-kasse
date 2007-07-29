#include "general.h"

#ifndef CONFIG_H_
#define CONFIG_H_

/* Eingenommes Geld in Cent */
extern unsigned long int money;
extern unsigned long int num_items;
extern unsigned char num_credit_items;
extern unsigned long int items_sold;
extern BYTE printer_port;


/* Datenstruktur der verkauften Eintr�ge */
struct status_t {
	char item_name[10];
	/* Wieviel kostet der Eintrag (in Cent)? */
	unsigned int price;
	/* Wie oft wurde er verkauft */
	unsigned int times_sold;
};

#define MAX_ITEMS 15
extern struct status_t status[MAX_ITEMS+1];

/* Datenstruktur f�r die Guthaben */
struct credits_t {
	char *nickname;
	/* Guthaben (in Cent) */
	unsigned int credit;
};

#define MAX_CREDIT_ITEMS 75
extern struct credits_t credits[MAX_CREDIT_ITEMS+1];

/* L�dt Dinge wie die Druckeradresse */
void load_config();
void load_items();
void load_state();
void load_credits();
//void dump_state();

void save_state();
void save_credits();
#endif /*CONFIG_H_*/
