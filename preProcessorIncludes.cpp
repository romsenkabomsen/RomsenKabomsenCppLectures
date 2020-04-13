/*/////////////
2. Inclusion //				(include <..> und include "..")
///////////////
"Header Files" oder "Standard Files" enthalten vordefinierte Funktionen wie z.B.
printf(), scanf() etc. Diese Files müssen „included“ werden. Der Precompiler
kopiert den gesamten Text der File an die Stelle der #include-Zeile.
Dabei Sagen z.B. <…>, dass sich die Datei im Standard Directory befindet.
?Woher weiß der Pre-Processor wo dieses ist?
Im folgenden Beispiel wird die "input-output stream" Standard File
aus der Standard-Bibliothek eingebunden. Danach sind die dort definierten Funk-
tionen aus dieser Standard File verfügbar...aber bitte noch diese Dateien nicht
raussuchen und reinschauen...wir kommen später dazu.
*/
#include <iostream>
