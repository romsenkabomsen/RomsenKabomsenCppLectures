/*/////////////
2. Inclusion //				(include <..> und include "..")
///////////////
"Header Files" oder "Standard Files" enthalten vordefinierte Funktionen wie z.B.
printf(), scanf() etc. Diese Files m�ssen �included� werden. Der Precompiler
kopiert den gesamten Text der File an die Stelle der #include-Zeile.
Dabei Sagen z.B. <�>, dass sich die Datei im Standard Directory befindet.
?Woher wei� der Pre-Processor wo dieses ist?
Im folgenden Beispiel wird die "input-output stream" Standard File
aus der Standard-Bibliothek eingebunden. Danach sind die dort definierten Funk-
tionen aus dieser Standard File verf�gbar...aber bitte noch diese Dateien nicht
raussuchen und reinschauen...wir kommen sp�ter dazu.
*/
#include <iostream>
