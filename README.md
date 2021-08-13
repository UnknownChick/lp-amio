# Cours "Découverte"
## Prérequis
Des connaissances de base sont recommandées dans les domaines suivants :
* Electronique : loi d'ohm, composants de base tels que résistance, diode, utilisation d'un multimètre.
* Informatique : typage des données, structures conditionnelles, fonctions, langage C.
* Réseaux : adresses IP, Ethernet, Wifi, Bluetooth.
## Introduction aux objets connectés
L'internet des objets (IoT : Internet of Things) signifie la mise en réseau d'objets qui sont reconnaissables par un identifiant unique (device ID) qui est une [adresse MAC](https://fr.wikipedia.org/wiki/Adresse_MAC). La plupart du temps, ces objets accèdent à Internet via des équipements réseaux (passerelles, routeurs) pour être accessibles partout dans le monde à partir de n'importe quel produit disposant d'une connexion. Ils utilisent des protocoles de communication pour capter, échanger, transférer des données. La grande quantité de données qu'ils génèrent a besoin d'être traitée soit en amont (traitement à "la volée" sur microcontrôleur), soit à la périphérie (Edge computing), soit en aval via des espaces de stockage (Bases de données, Cloud, ...). Les objets connectés sont répandus dans tous les domaines d'activité : smart city, industrie, commerce, santé, agriculture. Leur nombre s'élève en dizaines de milliards. L'un des principaux enjeux actuels consiste à rendre ces objets "intelligents" en déployant des algorithmes de traitement, intelligence artificielle notamment, au plus bas niveau des réseaux : capteurs, microcontrôleurs, tout en diminuant leur consommation d'énergie. Quant aux microcontrôleurs, éléments incontournables du domaine IoT, il en existe des centaines de modèles (Texas Instrument, STM, Espressif, ...).

Pour avoir un aperçu du domaine des objets connectés, vous pouvez consulter le tutoriel suivant :
https://projetsdiy.fr/debuter-projet-objet-connecte-diy-choix-micro-controleur/?noamp=mobile#comments

De ce tutoriel, nous reprenons l'exemple de l'asservissement d'un volet roulant qui illustre l'ensemble des tâches à réaliser :

![image](https://user-images.githubusercontent.com/44494044/129308509-a436ebf2-0aee-453a-8c68-22ace6069d4c.png)


En s'intéressant aux principales problématiques du microcontrôleur :

![Diag microcontrôleur](https://user-images.githubusercontent.com/44494044/129352699-96b71023-cea3-4936-936d-54cd4c0ce50f.png)


Nous pouvons relever :
* Outils de développement logiciel courants (IDE avec débogage) :
    * Visual Studio + Visual Micro
    * Visual studio Code + Platform IO
    * IDE Arduino version 2 (débogage succinct)
* Alimentation :
    * Raccordement directe d'une batterie avec deux fils
    * Boîtier d'alimentation régulée (shield battery) en 5V ou 3,3V
    * Panneau solaire pour un ajout d'énergie (recharge batterie) avec certains microcontrôleurs
    * Vext pour "désactiver" les capteurs entre 2 prises de mesures
* Surveillance du micontrôleur
    * Capteurs internes : température, effet hall
    * Chiens de garde (WDT) interne et externe (voir la "qualité" du WDT interne)
    * Mesure de la tension batterie
* Entrée analogique ADC
    * La précision dépend du nombre de bits : 4096 valeurs sur 12 bits
    * Seuil de tension parfois limité, par exemple à 2,4 V maximum, saturation au-delà
    * Zone de linéarité qui ne couvre pas toute l'étendue, par exemple linéarité de 0,1 V à 3,2 V
* RTC Timer
    * Précision du RTC Timer
    * Composant indépendant dans le microcontrôleur
* Mise à jour
* Modes de connexion réseau
* sécurité

## Le microcontrôleur NodeMCU-ESP32
Introduction
Avant de commencer à programmer un microcontrôleur, la première chose à faire consiste à regarder la documentation associée, dite « Datasheet », ainsi que les caractéristiques et performances de ce microcontrôleur. Autrement dit, nous ne pouvons pas dissocier la partie Hardware de la partie Software qui a pour objectif d’exploiter au mieux les possibilités offertes par le microcontrôleur. Pour cela, identifiez la carte et les composants intégrés principaux sur le site de référence : http://esp32.net/#Hardware. Bien sûr, un passage par le site du constructeur de l’ESP32 (successeur de l’ESP8266) est incontournable, le site d’Espressif :
 https://www.espressif.com/en.

## Première mise en oeuvre
Cours découverte
* liste
  * liste
  * liste
 liste
 
![image](https://user-images.githubusercontent.com/44494044/129308293-9901a00d-d46e-4c86-bdc5-a05011ce7d9e.png)

 Le raccordement du PC au microcontrôleur s'effectue à l'aide d'un câble USB capable de transférer les données en plus de l'alimentation.
