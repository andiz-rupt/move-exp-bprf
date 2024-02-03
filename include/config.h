#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED


/*
* Remplace toutes les tables repointées par des FFs
*/
#define FREE_UNUSED_SPACE

#ifdef FREE_UNUSED_SPACE
#define FREE_NAMES
#define FREE_DESCRIPTIONS
#define FREE_DESCRIPTIONS_POINTERS
#define FREE_ANIMATION_POINTERS
#define FREE_LEVEL_UP_LEARNSETS_DATA
#define FREE_LEVEL_UP_LEARNSETS_POINTERS
#endif // FREE_UNUSED_SPACE

/*
* Si vous avez le type Fée inséré, remplacez juste 'TYPE_NORMAL' par la valeur
* numérique de l'id de ce type
*/
#define TYPE_FAIRY TYPE_NORMAL

#endif // CONFIG_H_INCLUDED