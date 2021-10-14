# prozedurales programmieren

## gcc installieren

  - ### Linux
    ```
    sudo apt install build-essential && sudo apt-get install manpages-dev
    ```
    
    Anschließend überprüfen ob gcc installiert ist
    ```
    gcc -v
    ```
    Könnte sowas zurückgeben
    > gcc version 9.3.0




## Kompilieren & Ausführen

  - ### VS Code

    dank den Daten im .vscode Ordner einfach die Datei öffnen und ausführen:
    > F5 

  - ### Terminal
      ```
      gcc <NAME_DER_DATEI_MIT_SOUCECODE>.c -o <NAME_DER_ANWENDUNG>
      ```
      > -o steht für output und gibt dem output den Namen wie angeben

      > Achtet auch drauf die Endung der ersten Datei
