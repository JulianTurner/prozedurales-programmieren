# prozedurales programmieren

## gcc installieren

  - #### Linux
    ```
    sudo apt install build-essential && sudo apt-get install manpages-dev
    ```
  - ### Windows
    [download Installer](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download)  
     Installation durchführen und **PC neustarten** :bangbang:
    
  - #### Mac
    ```
    brew install gcc
    ```
    
    ## Anschließend überprüfen ob gcc installiert ist
    ```
    gcc -v
    ```
    > gcc version 9.3.0 :+1:

## git installieren
  - #### Linux
    ```
    sudo apt-get install git
    ```
  - #### Windows
     [download Installer](https://gitforwindows.org/)  
     
    Installation durchführen und **PC neustarten** :bangbang: 
  - #### MAC
    ```
    brew install git
    ```
    oder
    
    [download Installer](https://sourceforge.net/projects/git-osx-installer/files/git-2.23.0-intel-universal-mavericks.dmg/download?use_mirror=autoselect)
    
   ## Anschließend überprüfen ob git installiert ist
   ```
   git --version
   ```
   > git version 2.25.1 :+1: 

## Repo klonen (Linux, Windows, Mac)
   - Ordner erstellen zb im ```~``` Verzeichnis
     ```
     mkdir ~/studium
     ```
   - in den Ordner wechseln
     ```
     cd ~/studium     
      ```
   - Repo clonen
     ```
     git clone https://github.com/JulianTurner/prozedurales-programmieren.git     
     ```
   - in den Ordner wechseln
      ```
      cd prozedurales-programmieren      
      ```
   - VS Code mit dem Ornder starten
      ```
      code .      
      ```
      > Falls ihr eine Fehlermeldung auf dem MAC bekommt müsst ihr VS Code manuell öffnen und folgendes durchführen  
      > ![image](https://user-images.githubusercontent.com/33830803/137289187-c57878a6-3d9c-4672-ab62-84b2afc63bd9.png)


## Kompilieren & Ausführen

  - ### VS Code

    dank den Daten im .vscode Ordner einfach die Datei z.b. `hello_world.c` öffnen und mit F5 ausführen:
    > Hello world! :+1:
  
  - ### Terminal
      ```
      gcc <NAME_DER_DATEI_MIT_SOUCECODE>.c -o <NAME_DER_ANWENDUNG>
      ```  
      Bzw. für das Beispiel `hello_world`
      ```
      gcc hello_world.c -o hello_world
      ```
      ```
      ./hello_world
      ```
     > Hello world! :+1:  
     > Achtet auf die Endung der ersten Datei. -o steht für output und setzt den Namen der kompilierten Datei  





  ## Support :heart: & Feedback	:muscle:

:point_right: Bitte bachtet, ich habe keinen Mac, d.h. solange ihr mir keinen zur Verfügung stellt :grin: bin ich auf euch angewiesen.  
:point_right: Sollte estwas nicht funktionieren, gebt eine kruze Info, oder ihr macht einen pull-request :star_struck:
  
:ok_hand: Falls ihr meine Arbeit gut findet, und ich euch damit arbeit abnehmen kann würde ich mich über einen 	:coffee:, oder :beers: freuen => [paypal](paypal.me/JulianAlexanderT)


:star_struck: Ihr wollt mitwirken und richtig druchstarten? Dann =>  :raising_hand_man: :raising_hand_woman:

Mein persönliches Setup besteht aus:
Widows 10 und WSL 2 mit Ubuntu (kann ich nur empfehlen)
