# Expansion des attaques sur Rouge Feu
### Infos
Cette injection permet d'ajouter de toutes nouvelles attaques pour un total de **740**.
Les attaques viennent de la CFRU, cependant, certains effets étant manquants en Vanilla, je les ai juste remplaçés aléatoirement.

Cette injection n'est encore qu'en version bêta, il y aura très certainement des bugs bien que je n'en ai pas rencontré que je n'ai pas réglé jusque ici, si vous en rencontrez, n'hésitez pas à me le signaler sur le [forum de PT](https://pokemontrash.com/club/ressources-de-rom-hacking).

### Spécifications
L'injection repointe toutes les tables d'attaques et réecrit certaines fonctions pour le nouveau format de la table d'apprentissage par nouveau, la table de Level Up Learnsets pour faire court.

Il n'y avait que 9 bits alloués pour chaque id, d'où la limite des 511 possibles attaques en tout.
(`111111111 en Binaire = 511 en Décimal`)

### Configurations
Il y a quelques configurations disponible:
- L'offset d'insertion
    * Dans `scripts/make.py`, vous allez trouver la ligne `OFFSET_TO_PUT = 0x800000`, c'est elle qui dictera où dans la ROM est-ce que tout le code sera inséré.
    * Le système est capable de trouver des espaces libres par lui-même, mais vous pouvez aussi le forcer à tout inséré à votre offset en modifiant la ligne `SEARCH_FREE_SPACE = True` de `True` vers `False`.
- Le type Fée
    * Pour l'instant, dans les données des attaques, le Type Fée n'est qu'un 'alias' pour le type Normal. Si vous l'avez inséré dans votre ROM, dans `include/config.h`, modifiez la ligne `#define TYPE_FAIRY TYPE_NORMAL` par l'id de votre type.
- La suppression des anciennes données
    * Si vous ne voulez pas que toutes les anciennes données des attaques soient effacées, vous pouvez commenter la ligne, dans `include/config.h`, `#define FREE_UNUSED_SPACE` (En mettant `\\` devant `#define`).
    * Vous pouvez aussi piquer des régions spécifiques que vous ne voulez pas effacez, il suffit aussi de commenter.

### Requis
- Python 3.7.4, les autres versions pourraient marcher mais ce n'est pas garanti.
- devkitPro, téléchargez l'installeur et ajoutez le dossier `C:/devkitPro/devkitARM/bin` à votre variable d'environnement `PATH`.
- Une ROM Rouge Feu Française.
- Ce dépôt, clonez-le comme ceci: 
```shell 
$ git clone https://github.com/andiz-rupt/move-exp-bprf.git
```
Ou téléchargez-le en format .zip.

### Insertion
Même processus que pour la CFRU, mettez une ROM `BPRF0.gba` dans le répertoire principal, invoquez `cmd` depuis la barre d'emplacement de fichier ou de n'importe quel autre moyen tant que vous êtes dans le dossier racine et lancez `python scripts/make.py`.

### Credits

Les recherches ont été possibles grâce à [pokeemerald](https://github.com/pret/pokeemerald) et [pokefirered](https://github.com/pret/pokefirered).

Spherical Ice est l'auteur originel de l'[Unown Report code](https://github.com/sphericalice/bpre-unown-report).

BluRose a fork et a converti le système pour le [système de compilation de CFRU](https://github.com/BluRosie/bpre-unown-report).

Skeli a créé le [build system used in the CFRU](https://github.com/Skeli789/Complete-Fire-Red-Upgrade) qui est utilisé ici.

Tous ceux qui ont travaillés sur la [traduction FR de la CFRU](https://github.com/Pokecreatorfr/Complete-Fire-Red-Upgrade-French-Translation), notamment Arlequiin, Pokecreatorfr, Styx, CynoxxKh, Confidant.
