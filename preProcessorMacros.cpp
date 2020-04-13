/*////////
 Macros //              (define und undef)
//////////
Mit Macros k�nnen kleine Code-Schnipsel abgek�rzt werden. Sobald der
Pre-Processor ein Makro findet, ersetzt er das Macro mit dem Codeschnipsel.
Eine Makrodefinition wird mit dem Schl�sselwort #define gesetzt.. z.B.*/
#define MYPI 3.14159265358979323846 

double pisquare = MYPI * MYPI;
/* Nachdem der Pr�prozessor die letzten drei Zeilen durchgegangen ist bleibt
nur eine Zeile �brig, in der aber MYPI durch seinen definierten Wert ersetzt
wurde.*/
double pisquare_ = 3.14159265358979323846 * 3.14159265358979323846;
/* Makros k�nnen auch Argumente besitzen und dann wie Funktionen genutzt
werden.. z.B.*/
#define ZYLINDER_VOLUMEN(radius, hoehe)  3.14159265358979323846*radius*radius*hoehe

double zyl1vol = ZYLINDER_VOLUMEN(3, 4);
double zyl2vol = ZYLINDER_VOLUMEN(3.6, 24);
/* Nachdem der Pr�prozessor durch die letzten vier Zeilen gegangen ist, sind
diese auf folgenden Code Zusammengeschrumpft:*/
double zyl1vol_ = 3.14159265358979323846 * 3 * 3 * 4;
double zyl2vol_ = 3.14159265358979323846 * 3.6 * 3.6 * 24;
/* Makros sollten auf Modernen Maschinen vermieden werden. Wenn Ressourcen wie
Speicher oder Arbeitsspeicher knapp sind, kann man mit Makros die Definition
echter Cpp-Funktionen vermeiden auf Kosten der Lesbarkeit.*/





