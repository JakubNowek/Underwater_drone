# zad 5

Dron podwodny

Program sluzy obsludze i wizualizacji drona podwodnego.

Aby uruchomic program nalezy (jesli wczesniej nie bylo to robione) uruchomic program cmake komenda : ' cmake . '
Nastepnie gdy make zostal stworzony, kompilujemy program komenda : ' make ' .
Na koniec uruchamiamy go poleceniem ' ./dronv1 ' (jesli nie jestesmy w folderze z dronem, nalezy kropke zastapic sciezka do programu).
Nalezy zainstalowac program gnuplot, pomagajacy nam wizualizowanie ruchu drona

W programie mozemy poruszac sie dronem pomiedzy przeszkodami, kozystajac z menu uzytkownika.
Dostepne opcje to:

-Obrot
-Wznoszenie/opadanie pod zadanym katem
-Wyjscie z programu

Ruch drona obrazuje animacja w programie gnuplot.


Uwagi: 
1. Nie wiem jak sprawic , zeby komendy skierowane do gnuplota nie wciskaly sie miedzy moj tekst a wczytywanie.
Ne powoduje to bledow, ale wyglada zle :(
2. Zderzenie z woda i dnem nadal nie dziala, mimo iz dolozylem  wszelkich staran, nie mam pojecia co jeszcze moze psuc wykrywanie kolizji
 


