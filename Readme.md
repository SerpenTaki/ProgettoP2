# Macro ultimo commit 
Non riuscivo a far andare la macro `Q_OBJECT`, necessaria per il funzionamento degli slot di Qt. 
Ora non sembra dare problemi, tuttavia non compila ancora perché vanno implementati costruttori e metodi delle classi `core`.

In soldoni:

Io ho scritto uno script che funziona sulla mia macchina con arch, resetta il progetto ed esegue `moc` sui file che richiedono la sopracitata macro. 

Non mi auspico minimamente che la macro funzioni su un pc diverso dal mio, ergo quando ci vediamo fai un pull sul Mac/MSI, proviamo a compilare e 
risolvere le dipendenze, e per concludere posso adattare una versione di `clean_project.sh` al tuo ambiente di sviluppo. 
