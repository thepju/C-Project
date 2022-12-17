#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Student STD;

struct Student {
    long long   ID;
    char        Name[100];
    char        Gender;     // 'M' for male or 'F' for female
    int         Sect;
    int         BodyAge;    // not your real age, it's your fitness measurement
    float       Back50;     // Back Stroke Swimming best time
    float       Breast50;
    float       Fly50;
    float       Free50;
    STD *       next;
};

typedef struct StudentList {
    int         count;          // total number of STD in this list
    char        ListType[500];  // list type
    STD *       First;          // the first STD in this list
    STD *       Last;           // the last STD in this list
} STDList;

void AddList (STDList *plist, STD newSTD) {
    STD * p = (STD*) malloc(sizeof(STD));
    if (p==NULL) {
        printf("out of memory 10");
        exit (10);
    }
    *p = newSTD; // copy entire struct
    if (plist->count == 0) { // empty list
        plist->count = 1;
        plist->First = p;
        plist->Last = p;
    }
    else { // at least 1 student in the list
        plist->count++;
        plist->Last->next = p;
        plist->Last = p;
    }
}

void PrintList (STDList *plist) {
    printf("\nList %s\n",plist->ListType);
    if (plist->count) {
        printf("has %d students\n", plist->count);
        int i;
        STD *p = plist->First;
        for (i=0; i<plist->count; i++) {
            printf("ID = %lld, Name = %-20s, %c, sec %3d, Time: %5.2f %5.2f %5.2f %5.2f s\n",
                   p->ID, p->Name, p->Gender, p->Sect, p->Back50, p->Breast50, p->Fly50, p->Free50);
            p = p->next;
        }
        printf("End of List\n\n");
    }
    else {
        printf("is Empty List\n");
    }
}

void PrintSTD (STD *p) {
            printf("ID = %lld, Name = %-20s, %c, sec %3d, Time: %5.2f %5.2f %5.2f %5.2f s\n",
                   p->ID, p->Name, p->Gender, p->Sect, p->Back50, p->Breast50, p->Fly50, p->Free50);
}


void CreateList1(STDList *pList) {

{STD temp =   {   6110500569,   "Phanupong L.",   'M',   1,   31,   34.42,   36.49,   33.38,   29.26,   0   };    AddList(pList,temp);}
{STD temp =   {   6110501476,   "Thanaphon Le.",   'M',   1,   25,   26.62,   29.43,   26.04,   23.87,   0   };    AddList(pList,temp);}
{STD temp =   {   6110506133,   "Isoon A.",   'M',   1,   34,   36.09,   40.49,   35.77,   32.46,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500023,   "Sirikan Ho.",   'F',   1,   32,   37.8,   39.58,   36.24,   32.75,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500597,   "Kittipos A.",   'M',   1,   32,   36.94,   37.39,   34.2,   31.55,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501500,   "Koranachai W.",   'M',   1,   25,   27.87,   28.6,   25.26,   23.52,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501526,   "Kasidit Sutth.",   'M',   1,   19,   34.29,   37.72,   33.39,   29.35,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501569,   "Jiratchaya Pu.",   'F',   1,   29,   32.99,   38.64,   30.5,   28.58,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501577,   "Junlachat S.",   'M',   1,   27,   30.06,   32.61,   27.04,   25.12,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501585,   "Jesdakorn J.",   'M',   1,   30,   35.47,   34.18,   31.65,   29.4,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501593,   "Chaiyathum W.",   'M',   1,   20,   33.38,   37.54,   29.61,   28.57,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501666,   "Thanathorn Bu.",   'M',   1,   18,   36.28,   40.2,   31.7,   31.04,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501721,   "Narawich I.",   'M',   1,   20,   33.88,   37.93,   31.02,   28.3,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501739,   "Nantawan Jar.",   'F',   1,   35,   42.83,   41.16,   37.06,   36.67,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501771,   "Pawarut T.",   'M',   1,   20,   35.23,   36.74,   31.71,   28.86,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501828,   "Patcharamas S.",   'F',   1,   33,   39.82,   41,   36.98,   33.58,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501852,   "Phiraphat Ro.",   'M',   1,   26,   28.16,   33.91,   26.89,   24.17,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501861,   "Phakhaphol T.",   'M',   1,   23,   31.67,   32.08,   27.43,   24.66,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501909,   "Ratjikorn R.",   'M',   1,   17,   37.09,   40.52,   33.71,   31.78,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501917,   "Woraphob W.",   'M',   1,   28,   33.26,   31.63,   28.85,   25.39,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501933,   "Wiwitthawin C.",   'M',   1,   34,   37.72,   42.14,   36.07,   33.13,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502042,   "Ananyot I.",   'M',   1,   24,   29.9,   29.19,   26.78,   24.17,   0   };    AddList(pList,temp);}
{STD temp =   {   6310505394,   "Supacheep Sa.",   'M',   1,   19,   34.14,   36.4,   31.95,   29.35,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506498,   "Jirawan May.",   'F',   1,   33,   37.32,   41.57,   35.9,   34.69,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506641,   "Pratya B.",   'M',   1,   18,   35.36,   39.11,   32.4,   30.84,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506684,   "Pattaraparkornt I.",   'M',   1,   16,   38.83,   40.97,   35.65,   32.66,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506731,   "Poom Ma.",   'M',   1,   27,   32.04,   31.51,   27.64,   24.7,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506889,   "Archun Si.",   'M',   1,   24,   30.76,   32.22,   26.2,   24.97,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500015,   "Tanapat Chans.",   'M',   2,   34,   36.47,   42.17,   36.67,   32.69,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500589,   "Kanyakorn Pl.",   'F',   2,   28,   31.67,   34.36,   32.25,   27.31,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500619,   "Thanyawat Cho.",   'M',   2,   26,   28.52,   33.7,   26.14,   24.45,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500627,   "Porranit K.",   'M',   2,   19,   35.49,   39.45,   32.81,   30.21,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500635,   "Panuphan S.",   'M',   2,   26,   27.25,   30.45,   27.03,   24.08,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500651,   "Surisri P.",   'F',   2,   19,   36.73,   39.37,   33.03,   31.71,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501607,   "Nottakorn S.",   'M',   2,   30,   32.56,   37.2,   31.41,   29.34,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501615,   "Napat Mah.",   'M',   2,   30,   33.29,   36.96,   31.07,   28.72,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501623,   "Dhamrongsak K.",   'M',   2,   28,   32.87,   35.68,   30.07,   27.13,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501631,   "Thanakorn Suthe.",   'M',   2,   23,   30.99,   31.32,   27.7,   25.47,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501658,   "Thanakarn Nu.",   'M',   2,   20,   32.78,   36.52,   31.93,   29.1,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501674,   "Thanathorn S.",   'M',   2,   17,   35.4,   38.8,   33.56,   31.86,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501682,   "Thanawat B.",   'M',   2,   31,   34.46,   36.77,   31.67,   30.42,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501691,   "Thanat Ja.",   'M',   2,   25,   28.13,   31.54,   24.28,   23.7,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501712,   "Tadchai T.",   'M',   2,   30,   33.96,   33.92,   29.59,   28.8,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501747,   "Patipon Sri.",   'M',   2,   26,   27.43,   34.08,   25.75,   23.56,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501755,   "Panawat Tu.",   'M',   2,   31,   35.24,   37.86,   32.92,   30.04,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501763,   "Papatchaya J.",   'F',   2,   25,   28.58,   31.6,   28.6,   24.95,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501780,   "Pongsakorn An.",   'M',   2,   31,   36.51,   35.37,   32.95,   29.4,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501798,   "Pongsapak W.",   'M',   2,   21,   32.47,   33.15,   29.06,   27.33,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501801,   "Potchara Se.",   'M',   2,   15,   39.02,   43.89,   37.43,   33.73,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501844,   "Pipath N.",   'M',   2,   25,   28.66,   30.99,   26.5,   22.12,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501879,   "Phumich L.",   'M',   2,   16,   37.65,   41.77,   36.6,   32.79,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501895,   "Phuripat J.",   'M',   2,   19,   35.61,   38.95,   32.17,   29.95,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501925,   "Wichakorn R.",   'M',   2,   18,   33.82,   38.59,   34.34,   29.77,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501950,   "Satakun W.",   'M',   2,   18,   33.93,   40.25,   32.33,   31.24,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501976,   "Sarun Sar.",   'M',   2,   22,   31.53,   31.56,   29.19,   26.81,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501984,   "Supakran J.",   'M',   2,   31,   35.59,   37.41,   32.92,   29.63,   0   };    AddList(pList,temp);}
{STD temp =   {   6310501992,   "Settapong P.",   'M',   2,   23,   29.97,   32.58,   27,   25.37,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502000,   "Sarat Bo.",   'M',   2,   20,   31.74,   33.94,   31.21,   29.25,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502026,   "Suttipol H.",   'M',   2,   26,   28.73,   33.75,   27.3,   25.04,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502034,   "Atitaya Saej.",   'F',   2,   25,   28.29,   33.88,   27.06,   24.23,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502051,   "Anut Kl.",   'M',   2,   26,   30.83,   29.59,   27.77,   24.07,   0   };    AddList(pList,temp);}
{STD temp =   {   6310502069,   "Ariya Ta.",   'M',   2,   33,   37.9,   38.88,   33.58,   32.43,   0   };    AddList(pList,temp);}
{STD temp =   {   6310505378,   "Grissanapong S.",   'M',   2,   19,   33.47,   38.67,   31.07,   29.03,   0   };    AddList(pList,temp);}
{STD temp =   {   6310505386,   "Khanes K.",   'M',   2,   35,   37.45,   39.9,   36.43,   33.17,   0   };    AddList(pList,temp);}
{STD temp =   {   6310505408,   "Arsee S.",   'F',   2,   28,   33.51,   35.17,   29.31,   29.22,   0   };    AddList(pList,temp);}
{STD temp =   {   6110551481,   "Nonthawat Ma.",   'M',   250,   24,   28.03,   29.24,   26.66,   23.66,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550063,   "Chadaporn Ta.",   'F',   250,   26,   29.67,   33.01,   29.68,   26.8,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550071,   "Chutima Khams.",   'F',   250,   31,   36.26,   41.56,   35.12,   30.69,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550098,   "Supatchanee C.",   'F',   250,   15,   40.44,   45.39,   39.73,   35.06,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551400,   "Koravich Ru.",   'M',   250,   25,   26.85,   31.48,   26.62,   22.24,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551426,   "Kritpeera S.",   'M',   250,   19,   35.77,   34.95,   32.49,   28.85,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551434,   "Krittiyakorn P.",   'F',   250,   27,   33.98,   33.77,   29.37,   26.5,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551540,   "Natchapol Pit.",   'M',   250,   22,   29.45,   35,   29.75,   26.96,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551591,   "Nattawat Ratta.",   'M',   250,   20,   31.69,   35.31,   31.85,   28.81,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551621,   "Takonkrit W.",   'M',   250,   17,   35.86,   37.27,   35.12,   32.22,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551647,   "Thanabodin S.",   'M',   250,   26,   27.11,   32.67,   27.42,   25,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551663,   "Thunya R.",   'M',   250,   32,   36.13,   38.04,   31.94,   30.83,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551680,   "Nitipat Ru.",   'M',   250,   17,   37.91,   37.19,   35.75,   32.21,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551698,   "Benjapon Su.",   'M',   250,   28,   31.05,   33.57,   30.14,   25.71,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551701,   "Pokpong O.",   'M',   250,   26,   27.72,   29.46,   27.22,   24.25,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551710,   "Pinpong G.",   'M',   250,   19,   35.49,   38.47,   32.78,   29.5,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551736,   "Panthakan S.",   'M',   250,   20,   33.45,   37.14,   31.52,   28.5,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551761,   "Pukjira R.",   'F',   250,   33,   38.44,   41.42,   34.81,   34.11,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551841,   "Rames M.",   'M',   250,   29,   31.78,   33.35,   28.68,   26.48,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551868,   "Woranittha O.",   'F',   250,   35,   42.76,   43.72,   39.83,   36.2,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551876,   "Waraporn Seet.",   'F',   250,   17,   40.35,   43.68,   36.37,   33.14,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551884,   "Supakorn Tany.",   'M',   250,   33,   35.7,   38.91,   34.33,   31.11,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551892,   "Supakorn Phon.",   'M',   250,   23,   28.23,   32.36,   28.72,   25.88,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551906,   "Suphakorn Ph.",   'M',   250,   17,   37.6,   37.88,   35.56,   32.48,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551949,   "Anon Ji.",   'M',   250,   32,   36.63,   35.87,   31.78,   30.93,   0   };    AddList(pList,temp);}
{STD temp =   {   6310553941,   "Kom S.",   'M',   250,   23,   28.2,   34.89,   27.96,   24.97,   0   };    AddList(pList,temp);}
{STD temp =   {   6310554026,   "Asmeen A.",   'M',   250,   26,   30.34,   29.3,   27.14,   24.03,   0   };    AddList(pList,temp);}
{STD temp =   {   6410551983,   "Nuttanicha Ch.",   'F',   250,   33,   36.8,   39.99,   36.79,   33.35,   0   };    AddList(pList,temp);}
{STD temp =   {   6010551277,   "Piyawat Pat.",   'M',   251,   34,   38.79,   42.21,   36.57,   32.71,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550055,   "Chatwimol B.",   'F',   251,   31,   35.17,   40.01,   32.83,   31.01,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550080,   "Thanaphat Mah.",   'M',   251,   31,   35.82,   34.63,   32.1,   30.16,   0   };    AddList(pList,temp);}
{STD temp =   {   6310550101,   "Anawin Ta.",   'M',   251,   19,   34.55,   34.8,   32.34,   30.52,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551418,   "Kittanat S.",   'M',   251,   24,   29.24,   30.18,   27.54,   23.6,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551442,   "Kasidit Sue.",   'M',   251,   17,   38.4,   38.15,   35.16,   32.04,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551451,   "Kantaphong M.",   'M',   251,   22,   32.69,   33.92,   29.57,   26.34,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551469,   "Kittipat Mu.",   'M',   251,   32,   36.25,   38.85,   32.28,   30.13,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551485,   "Chakri P.",   'M',   251,   15,   37.13,   42.05,   36.91,   34.38,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551493,   "Jinjutha Pa.",   'F',   251,   28,   35.17,   37.63,   31.71,   28.2,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551507,   "Chanathip Suka.",   'M',   251,   25,   29.24,   32.53,   26.52,   22.26,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551515,   "Chudakarn V.",   'F',   251,   26,   32.99,   35.91,   28.09,   26.41,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551523,   "Thitiya Srik.",   'F',   251,   32,   35.94,   40.82,   36.34,   33.39,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551531,   "Napiya S.",   'M',   251,   25,   28.04,   29.26,   24.09,   23.7,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551558,   "Nicha Run.",   'F',   251,   24,   30.44,   34.19,   29,   26.86,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551566,   "Nutanyasamorn K.",   'F',   251,   26,   32.33,   35.68,   28.1,   26.13,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551574,   "Natthanun Thi.",   'M',   251,   17,   38.54,   38.02,   35.21,   31.51,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551582,   "Nutpakan N.",   'M',   251,   25,   27.35,   31.23,   24.24,   23.96,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551639,   "Tanakrit Th.",   'M',   251,   24,   27.43,   32.62,   27.92,   23.68,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551744,   "Fahsrang W.",   'F',   251,   23,   34.18,   36.13,   30.58,   27.99,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551752,   "Phakavadee K.",   'F',   251,   22,   33.75,   36.01,   31.85,   27.32,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551779,   "Panupan T.",   'M',   251,   19,   34.82,   38.3,   32.14,   29.02,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551787,   "Pasvit T.",   'M',   251,   27,   31.11,   35.04,   28.58,   25.57,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551795,   "Phurin Wi.",   'M',   251,   19,   33.98,   37.85,   33.6,   28.88,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551809,   "Monthon Kl.",   'M',   251,   35,   37.16,   42.17,   35.29,   34.85,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551817,   "Manokorn J.",   'M',   251,   29,   34.35,   32.42,   31.36,   28.09,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551833,   "Ratchapol Th.",   'M',   251,   32,   34.83,   38.35,   34.39,   30.79,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551850,   "Worrakarn S.",   'F',   251,   15,   39.94,   43.02,   38.24,   36.09,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551914,   "Sumrit Ch.",   'M',   251,   26,   29.41,   30.98,   27.85,   24.06,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551922,   "Sittiporn Mar.",   'M',   251,   16,   38.34,   39.65,   35.54,   33.57,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551931,   "Sirawitch W.",   'M',   251,   34,   39,   41.27,   34.24,   32.17,   0   };    AddList(pList,temp);}
{STD temp =   {   6310553968,   "Pohnpitcha T.",   'F',   251,   18,   37.86,   41.41,   33.87,   33.43,   0   };    AddList(pList,temp);}
{STD temp =   {   6310553984,   "Vanachaporn B.",   'F',   251,   18,   36.7,   40.53,   36.13,   33.56,   0   };    AddList(pList,temp);}
{STD temp =   {   6310554018,   "Siriwimol Bo.",   'F',   251,   30,   33.83,   38.43,   32.21,   30.27,   0   };    AddList(pList,temp);}
{STD temp =   {   6310506587,   "Tanaree O.",   'F',   2,   18,   38.36,   38.5,   34.48,   32.11,   0   };    AddList(pList,temp);}
{STD temp =   {   6310500601,   "Thanakorn Sangw.",   'M',   2,   27,   28.29,   31.01,   28.41,   24.39,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551655,   "Thanapat Mua.",   'M',   250,   27,   30,   34.09,   26.37,   24.8,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551728,   "Pongprom P.",   'M',   250,   23,   28.31,   31.58,   27.08,   24.87,   0   };    AddList(pList,temp);}
{STD temp =   {   6310553992,   "Wannawat Ti.",   'M',   250,   32,   35.63,   38.92,   34.07,   29.71,   0   };    AddList(pList,temp);}
{STD temp =   {   6310551957,   "Ashiva P.",   'M',   251,   29,   33.54,   32.97,   28.69,   26.71,   0   };    AddList(pList,temp);}
{STD temp =   {   6410000001,   "Poonlap L.",   'M',   2,   22,   29.59,   34.4,   29.21,   26.59,   0   };    AddList(pList,temp);}
{STD temp =   {   6310001234,   "Michael P.",   'M',   1,   23,   26,   28,   24,   22,   0   };    AddList(pList,temp);}
{STD temp =   {   6310009999,   "Sarah S.",   'F',   1,   18,   28,   30,   26,   24,   0   };    AddList(pList,temp);}
}


void CreateListN(STDList *pList, int randseed) {
    int i = 0, N = pList->count, scale = 100;
    srand(randseed);
    STD *p = pList->First;
    for (i=0; i<N-2; i++) {
        p->BodyAge = rand()%16+15;
        if (p->Gender == 'M') {
            p->Back50 = 26 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Breast50 = 28 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Fly50 = 24 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Free50 = 22 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
        }
        else {
            p->Back50 = 28 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Breast50 = 30 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Fly50 = 26 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
            p->Free50 = 24 + fabs(p->BodyAge-22.5)*(rand()%100+scale)/scale;
        }
        p = p->next;
    }
}


int main()
{
    STDList CourseList = {0, "01205215 class of 2021/1", NULL, NULL};  //  Student List
    char gender;
    int section,dataset = 1;
    long long id = 6310501763; //Papatchaya ID
    
	CreateList1(&CourseList);
	
    for(dataset=1;dataset<6;dataset++){
    	printf("Data set %d\n",dataset);
		if(dataset>=2) CreateListN(&CourseList,dataset);
    	STD *dk = CourseList.First;
	 	int my=0; //index of Papatchaya
	 	while(dk!=NULL){
	 		if(dk->ID == id ){
	 			gender = dk->Gender;
	 			PrintSTD(dk);
	 			break;
			}
			my++;
			dk = dk->next;
	 	}
		STD *s1, *s2, *s3, *s4;
		s1 = s2 = s3 = s4 = NULL;

		STD *p = CourseList.First;
		float back=999,breast=999,fly=999,free=999;     // Back Stroke Swimming best time
		int all = CourseList.count;
 		float backArr[all],breastArr[all],flyArr[all],freeArr[all];
 		int i=0;
		while(p != NULL){
			if(p->Gender == gender){
				backArr[i] = p->Back50;
				breastArr[i] = p->Breast50;
				flyArr[i] = p->Fly50;
				freeArr[i] = p->Free50;
		  	}
  			else{
			   backArr[i] = 999.00;
			   breastArr[i] = 999.00;
			   flyArr[i] = 999.00;
			   freeArr[i] = 999.00;
  			}
  			i++;
  			p = p->next;
 		}

		int a,b,c,d,r,n=CourseList.count;
		float A,B,C,D,s,t=999.00;
		for(a=0;a<n;a++){
			for(b=0;b<n;b++){
		   		for(c=0;c<n;c++){
		    		for(d=0;d<n;d++){
		    			if(my==a||my==b||my==c||my==d){
			    			s = backArr[a]+breastArr[b]+flyArr[c]+freeArr[d];
			     			if(s<t){
			      				if(a==b || a==c || a==d || b==c || b==d || c==d) {
			       				continue; 
			     				}
			      				else{
					       			A = backArr[a]; 
					       			B = breastArr[b];
					       			C = flyArr[c];
					       			D = freeArr[d];
					       			t = s; 
			      				} 
			     			}	
						}
		    		}
		   		}
		  	}
		 }

		STD *q = CourseList.First;
		while(q!=NULL){
			if(q->Gender == gender){
				if(q->Back50==A) s1 = q ;
				else if(q->Breast50==B) s2 = q;
			   	else if(q->Fly50==C) s3 = q;
			   	else if(q->Free50==D) s4 = q; 
		  	}
		  	q = q->next;
		}
		
	    // print out Best Team
	    float sum = 0.0;
	    printf("Best %s Team for ID %lld\n",(gender=='M')?"Male":"Female",id);
	    printf("ID = %llu, Name = %-20s, %c, sec %3d, Time: ",s1->ID, s1->Name, s1->Gender, s1->Sect);
	    printf("Back50   %5.2f s\n", s1->Back50);
	    sum += s1->Back50;
	    printf("ID = %llu, Name = %-20s, %c, sec %3d, Time: ",s2->ID, s2->Name, s2->Gender, s2->Sect);
	    printf("Breast50 %5.2f s\n", s2->Breast50);
	    sum += s2->Breast50;
	    printf("ID = %llu, Name = %-20s, %c, sec %3d, Time: ",s3->ID, s3->Name, s3->Gender, s3->Sect);
	    printf("Fly50    %5.2f s\n", s3->Fly50);
	    sum += s3->Fly50;
	    printf("ID = %llu, Name = %-20s, %c, sec %3d, Time: ",s4->ID, s4->Name, s4->Gender, s4->Sect);
	    printf("Free50   %5.2f s\n", s4->Free50);
	    sum += s4->Free50;
	    printf("                                                            Total Time: %5.2f s\n", sum);	
	}
    return 0;
}
