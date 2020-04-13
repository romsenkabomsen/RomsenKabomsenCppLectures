/////////////////////////////////////
// Pre-Processor, Compiler, Linker // 
/////////////////////////////////////
/*
Pre-Processor
- entfernt Kommentare und Leerzeilen
- führt Pre-Processor-Direktiven aus (siehe Abschnitt C/C++ Pre-Processor)
- Pre-Processor-Direktiven beginnen immter mit einem Hashtag
- die gebräuchlichsten Direktiven sollen im folgenden kurz erklärt werden*/

//Inclusion
//("Strg"+Klick auf den include Befehl öffnet das Kapitel)
//#include "preProcessorIncludes.cpp"

//Macros
//#include "preProcessorMacros.cpp"

//Conditionals
//#include "preProcessorConditionals.cpp"

//Line Control
//http://www.cplusplus.com/doc/tutorial/preprocessor/

//Error Directive
//http://www.cplusplus.com/doc/tutorial/preprocessor/

//Pragma Directive
//http://www.cplusplus.com/doc/tutorial/preprocessor/

//Predefined Macros
#include "preProcessorPreDefined.cpp"

/*
Compiler
- analysiert Quellcode auf lexikalische oder syntaktische Fehler, nimmt
  gegebenfalls Optimierungen vor und wandelt den Quellcode in binäre Objekt-
  dateien um (Endung .o)

Linker
- ergänzt Objekt-Dateien um verwendete Bibliotheken und setzt einzelne Kompo-
  nenten zu einem ausführbaren Gesamt-Programm zusammen.
*/

// standard macro names
#include <iostream>
using namespace std;

int main()
{
    cout << "This is the line number " << __LINE__;
    cout << " of file " << __FILE__ << ".\n";
    cout << "Its compilation began " << __DATE__;
    cout << " at " << __TIME__ << ".\n";
    cout << "The compiler gives a __cplusplus value of " << __cplusplus;
    return 0;
}