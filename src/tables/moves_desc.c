#include "../../include/moves.h"
#include "../../include/move_descs.h"

const u8 *const gNewMoveDescriptionPointers[NEW_MOVES_COUNT - 1] = {
    [MOVE_POUND - 1] = MOVE_DESC_POUND,
    [MOVE_KARATECHOP - 1] = MOVE_DESC_KARATECHOP,
    [MOVE_DOUBLESLAP - 1] = MOVE_DESC_DOUBLESLAP,
    [MOVE_COMETPUNCH - 1] = MOVE_DESC_COMETPUNCH,
    [MOVE_MEGAPUNCH - 1] = MOVE_DESC_MEGAPUNCH,
    [MOVE_PAYDAY - 1] = MOVE_DESC_PAYDAY,
    [MOVE_FIREPUNCH - 1] = MOVE_DESC_FIREPUNCH,
    [MOVE_ICEPUNCH - 1] = MOVE_DESC_ICEPUNCH,
    [MOVE_THUNDERPUNCH - 1] = MOVE_DESC_THUNDERPUNCH,
    [MOVE_SCRATCH - 1] = MOVE_DESC_SCRATCH,
    [MOVE_VICEGRIP - 1] = MOVE_DESC_VICEGRIP,
    [MOVE_GUILLOTINE - 1] = MOVE_DESC_GUILLOTINE,
    [MOVE_RAZORWIND - 1] = MOVE_DESC_RAZORWIND,
    [MOVE_SWORDSDANCE - 1] = MOVE_DESC_SWORDSDANCE,
    [MOVE_CUT - 1] = MOVE_DESC_CUT,
    [MOVE_GUST - 1] = MOVE_DESC_GUST,
    [MOVE_WINGATTACK - 1] = MOVE_DESC_WINGATTACK,
    [MOVE_WHIRLWIND - 1] = MOVE_DESC_WHIRLWIND,
    [MOVE_FLY - 1] = MOVE_DESC_FLY,
    [MOVE_BIND - 1] = MOVE_DESC_BIND,
    [MOVE_SLAM - 1] = MOVE_DESC_SLAM,
    [MOVE_VINEWHIP - 1] = MOVE_DESC_VINEWHIP,
    [MOVE_STOMP - 1] = MOVE_DESC_STOMP,
    [MOVE_DOUBLEKICK - 1] = MOVE_DESC_DOUBLEKICK,
    [MOVE_MEGAKICK - 1] = MOVE_DESC_MEGAKICK,
    [MOVE_JUMPKICK - 1] = MOVE_DESC_JUMPKICK,
    [MOVE_ROLLINGKICK - 1] = MOVE_DESC_ROLLINGKICK,
    [MOVE_SANDATTACK - 1] = MOVE_DESC_SANDATTACK,
    [MOVE_HEADBUTT - 1] = MOVE_DESC_HEADBUTT,
    [MOVE_HORNATTACK - 1] = MOVE_DESC_HORNATTACK,
    [MOVE_FURYATTACK - 1] = MOVE_DESC_FURYATTACK,
    [MOVE_HORNDRILL - 1] = MOVE_DESC_HORNDRILL,
    [MOVE_TACKLE - 1] = MOVE_DESC_TACKLE,
    [MOVE_BODYSLAM - 1] = MOVE_DESC_BODYSLAM,
    [MOVE_WRAP - 1] = MOVE_DESC_WRAP,
    [MOVE_TAKEDOWN - 1] = MOVE_DESC_TAKEDOWN,
    [MOVE_THRASH - 1] = MOVE_DESC_THRASH,
    [MOVE_DOUBLEEDGE - 1] = MOVE_DESC_DOUBLEEDGE,
    [MOVE_TAILWHIP - 1] = MOVE_DESC_TAILWHIP,
    [MOVE_POISONSTING - 1] = MOVE_DESC_POISONSTING,
    [MOVE_TWINEEDLE - 1] = MOVE_DESC_TWINEEDLE,
    [MOVE_PINMISSILE - 1] = MOVE_DESC_PINMISSILE,
    [MOVE_LEER - 1] = MOVE_DESC_LEER,
    [MOVE_BITE - 1] = MOVE_DESC_BITE,
    [MOVE_GROWL - 1] = MOVE_DESC_GROWL,
    [MOVE_ROAR - 1] = MOVE_DESC_ROAR,
    [MOVE_SING - 1] = MOVE_DESC_SING,
    [MOVE_SUPERSONIC - 1] = MOVE_DESC_SUPERSONIC,
    [MOVE_SONICBOOM - 1] = MOVE_DESC_SONICBOOM,
    [MOVE_DISABLE - 1] = MOVE_DESC_DISABLE,
    [MOVE_ACID - 1] = MOVE_DESC_ACID,
    [MOVE_EMBER - 1] = MOVE_DESC_EMBER,
    [MOVE_FLAMETHROWER - 1] = MOVE_DESC_FLAMETHROWER,
    [MOVE_MIST - 1] = MOVE_DESC_MIST,
    [MOVE_WATERGUN - 1] = MOVE_DESC_WATERGUN,
    [MOVE_HYDROPUMP - 1] = MOVE_DESC_HYDROPUMP,
    [MOVE_SURF - 1] = MOVE_DESC_SURF,
    [MOVE_ICEBEAM - 1] = MOVE_DESC_ICEBEAM,
    [MOVE_BLIZZARD - 1] = MOVE_DESC_BLIZZARD,
    [MOVE_PSYBEAM - 1] = MOVE_DESC_PSYBEAM,
    [MOVE_BUBBLEBEAM - 1] = MOVE_DESC_BUBBLEBEAM,
    [MOVE_AURORABEAM - 1] = MOVE_DESC_AURORABEAM,
    [MOVE_HYPERBEAM - 1] = MOVE_DESC_HYPERBEAM,
    [MOVE_PECK - 1] = MOVE_DESC_PECK,
    [MOVE_DRILLPECK - 1] = MOVE_DESC_DRILLPECK,
    [MOVE_SUBMISSION - 1] = MOVE_DESC_SUBMISSION,
    [MOVE_LOWKICK - 1] = MOVE_DESC_LOWKICK,
    [MOVE_COUNTER - 1] = MOVE_DESC_COUNTER,
    [MOVE_SEISMICTOSS - 1] = MOVE_DESC_SEISMICTOSS,
    [MOVE_STRENGTH - 1] = MOVE_DESC_STRENGTH,
    [MOVE_ABSORB - 1] = MOVE_DESC_ABSORB,
    [MOVE_MEGADRAIN - 1] = MOVE_DESC_MEGADRAIN,
    [MOVE_LEECHSEED - 1] = MOVE_DESC_LEECHSEED,
    [MOVE_GROWTH - 1] = MOVE_DESC_GROWTH,
    [MOVE_RAZORLEAF - 1] = MOVE_DESC_RAZORLEAF,
    [MOVE_SOLARBEAM - 1] = MOVE_DESC_SOLARBEAM,
    [MOVE_POISONPOWDER - 1] = MOVE_DESC_POISONPOWDER,
    [MOVE_STUNSPORE - 1] = MOVE_DESC_STUNSPORE,
    [MOVE_SLEEPPOWDER - 1] = MOVE_DESC_SLEEPPOWDER,
    [MOVE_PETALDANCE - 1] = MOVE_DESC_PETALDANCE,
    [MOVE_STRINGSHOT - 1] = MOVE_DESC_STRINGSHOT,
    [MOVE_DRAGONRAGE - 1] = MOVE_DESC_DRAGONRAGE,
    [MOVE_FIRESPIN - 1] = MOVE_DESC_FIRESPIN,
    [MOVE_THUNDERSHOCK - 1] = MOVE_DESC_THUNDERSHOCK,
    [MOVE_THUNDERBOLT - 1] = MOVE_DESC_THUNDERBOLT,
    [MOVE_THUNDERWAVE - 1] = MOVE_DESC_THUNDERWAVE,
    [MOVE_THUNDER - 1] = MOVE_DESC_THUNDER,
    [MOVE_ROCKTHROW - 1] = MOVE_DESC_ROCKTHROW,
    [MOVE_EARTHQUAKE - 1] = MOVE_DESC_EARTHQUAKE,
    [MOVE_FISSURE - 1] = MOVE_DESC_FISSURE,
    [MOVE_DIG - 1] = MOVE_DESC_DIG,
    [MOVE_TOXIC - 1] = MOVE_DESC_TOXIC,
    [MOVE_CONFUSION - 1] = MOVE_DESC_CONFUSION,
    [MOVE_PSYCHIC - 1] = MOVE_DESC_PSYCHIC,
    [MOVE_HYPNOSIS - 1] = MOVE_DESC_HYPNOSIS,
    [MOVE_MEDITATE - 1] = MOVE_DESC_MEDITATE,
    [MOVE_AGILITY - 1] = MOVE_DESC_AGILITY,
    [MOVE_QUICKATTACK - 1] = MOVE_DESC_QUICKATTACK,
    [MOVE_RAGE - 1] = MOVE_DESC_RAGE,
    [MOVE_TELEPORT - 1] = MOVE_DESC_TELEPORT,
    [MOVE_NIGHTSHADE - 1] = MOVE_DESC_NIGHTSHADE,
    [MOVE_MIMIC - 1] = MOVE_DESC_MIMIC,
    [MOVE_SCREECH - 1] = MOVE_DESC_SCREECH,
    [MOVE_DOUBLETEAM - 1] = MOVE_DESC_DOUBLETEAM,
    [MOVE_RECOVER - 1] = MOVE_DESC_RECOVER,
    [MOVE_HARDEN - 1] = MOVE_DESC_HARDEN,
    [MOVE_MINIMIZE - 1] = MOVE_DESC_MINIMIZE,
    [MOVE_SMOKESCREEN - 1] = MOVE_DESC_SMOKESCREEN,
    [MOVE_CONFUSERAY - 1] = MOVE_DESC_CONFUSERAY,
    [MOVE_WITHDRAW - 1] = MOVE_DESC_WITHDRAW,
    [MOVE_DEFENSECURL - 1] = MOVE_DESC_DEFENSECURL,
    [MOVE_BARRIER - 1] = MOVE_DESC_BARRIER,
    [MOVE_LIGHTSCREEN - 1] = MOVE_DESC_LIGHTSCREEN,
    [MOVE_HAZE - 1] = MOVE_DESC_HAZE,
    [MOVE_REFLECT - 1] = MOVE_DESC_REFLECT,
    [MOVE_FOCUSENERGY - 1] = MOVE_DESC_FOCUSENERGY,
    [MOVE_BIDE - 1] = MOVE_DESC_BIDE,
    [MOVE_METRONOME - 1] = MOVE_DESC_METRONOME,
    [MOVE_MIRRORMOVE - 1] = MOVE_DESC_MIRRORMOVE,
    [MOVE_SELFDESTRUCT - 1] = MOVE_DESC_SELFDESTRUCT,
    [MOVE_EGGBOMB - 1] = MOVE_DESC_EGGBOMB,
    [MOVE_LICK - 1] = MOVE_DESC_LICK,
    [MOVE_SMOG - 1] = MOVE_DESC_SMOG,
    [MOVE_SLUDGE - 1] = MOVE_DESC_SLUDGE,
    [MOVE_BONECLUB - 1] = MOVE_DESC_BONECLUB,
    [MOVE_FIREBLAST - 1] = MOVE_DESC_FIREBLAST,
    [MOVE_WATERFALL - 1] = MOVE_DESC_WATERFALL,
    [MOVE_CLAMP - 1] = MOVE_DESC_CLAMP,
    [MOVE_SWIFT - 1] = MOVE_DESC_SWIFT,
    [MOVE_SKULLBASH - 1] = MOVE_DESC_SKULLBASH,
    [MOVE_SPIKECANNON - 1] = MOVE_DESC_SPIKECANNON,
    [MOVE_CONSTRICT - 1] = MOVE_DESC_CONSTRICT,
    [MOVE_AMNESIA - 1] = MOVE_DESC_AMNESIA,
    [MOVE_KINESIS - 1] = MOVE_DESC_KINESIS,
    [MOVE_SOFTBOILED - 1] = MOVE_DESC_SOFTBOILED,
    [MOVE_HIGHJUMPKICK - 1] = MOVE_DESC_HIGHJUMPKICK,
    [MOVE_GLARE - 1] = MOVE_DESC_GLARE,
    [MOVE_DREAMEATER - 1] = MOVE_DESC_DREAMEATER,
    [MOVE_POISONGAS - 1] = MOVE_DESC_POISONGAS,
    [MOVE_BARRAGE - 1] = MOVE_DESC_BARRAGE,
    [MOVE_LEECHLIFE - 1] = MOVE_DESC_LEECHLIFE,
    [MOVE_LOVELYKISS - 1] = MOVE_DESC_LOVELYKISS,
    [MOVE_SKYATTACK - 1] = MOVE_DESC_SKYATTACK,
    [MOVE_TRANSFORM - 1] = MOVE_DESC_TRANSFORM,
    [MOVE_BUBBLE - 1] = MOVE_DESC_BUBBLE,
    [MOVE_DIZZYPUNCH - 1] = MOVE_DESC_DIZZYPUNCH,
    [MOVE_SPORE - 1] = MOVE_DESC_SPORE,
    [MOVE_FLASH - 1] = MOVE_DESC_FLASH,
    [MOVE_PSYWAVE - 1] = MOVE_DESC_PSYWAVE,
    [MOVE_SPLASH - 1] = MOVE_DESC_SPLASH,
    [MOVE_ACIDARMOR - 1] = MOVE_DESC_ACIDARMOR,
    [MOVE_CRABHAMMER - 1] = MOVE_DESC_CRABHAMMER,
    [MOVE_EXPLOSION - 1] = MOVE_DESC_EXPLOSION,
    [MOVE_FURYSWIPES - 1] = MOVE_DESC_FURYSWIPES,
    [MOVE_BONEMERANG - 1] = MOVE_DESC_BONEMERANG,
    [MOVE_REST - 1] = MOVE_DESC_REST,
    [MOVE_ROCKSLIDE - 1] = MOVE_DESC_ROCKSLIDE,
    [MOVE_HYPERFANG - 1] = MOVE_DESC_HYPERFANG,
    [MOVE_SHARPEN - 1] = MOVE_DESC_SHARPEN,
    [MOVE_CONVERSION - 1] = MOVE_DESC_CONVERSION,
    [MOVE_TRIATTACK - 1] = MOVE_DESC_TRIATTACK,
    [MOVE_SUPERFANG - 1] = MOVE_DESC_SUPERFANG,
    [MOVE_SLASH - 1] = MOVE_DESC_SLASH,
    [MOVE_SUBSTITUTE - 1] = MOVE_DESC_SUBSTITUTE,
    [MOVE_STRUGGLE - 1] = MOVE_DESC_STRUGGLE,
    [MOVE_SKETCH - 1] = MOVE_DESC_SKETCH,
    [MOVE_TRIPLEKICK - 1] = MOVE_DESC_TRIPLEKICK,
    [MOVE_THIEF - 1] = MOVE_DESC_THIEF,
    [MOVE_SPIDERWEB - 1] = MOVE_DESC_SPIDERWEB,
    [MOVE_MINDREADER - 1] = MOVE_DESC_MINDREADER,
    [MOVE_NIGHTMARE - 1] = MOVE_DESC_NIGHTMARE,
    [MOVE_FLAMEWHEEL - 1] = MOVE_DESC_FLAMEWHEEL,
    [MOVE_SNORE - 1] = MOVE_DESC_SNORE,
    [MOVE_CURSE - 1] = MOVE_DESC_CURSE,
    [MOVE_FLAIL - 1] = MOVE_DESC_FLAIL,
    [MOVE_CONVERSION2 - 1] = MOVE_DESC_CONVERSION2,
    [MOVE_AEROBLAST - 1] = MOVE_DESC_AEROBLAST,
    [MOVE_COTTONSPORE - 1] = MOVE_DESC_COTTONSPORE,
    [MOVE_REVERSAL - 1] = MOVE_DESC_REVERSAL,
    [MOVE_SPITE - 1] = MOVE_DESC_SPITE,
    [MOVE_POWDERSNOW - 1] = MOVE_DESC_POWDERSNOW,
    [MOVE_PROTECT - 1] = MOVE_DESC_PROTECT,
    [MOVE_MACHPUNCH - 1] = MOVE_DESC_MACHPUNCH,
    [MOVE_SCARYFACE - 1] = MOVE_DESC_SCARYFACE,
    [MOVE_FEINTATTACK - 1] = MOVE_DESC_FEINTATTACK,
    [MOVE_SWEETKISS - 1] = MOVE_DESC_SWEETKISS,
    [MOVE_BELLYDRUM - 1] = MOVE_DESC_BELLYDRUM,
    [MOVE_SLUDGEBOMB - 1] = MOVE_DESC_SLUDGEBOMB,
    [MOVE_MUDSLAP - 1] = MOVE_DESC_MUDSLAP,
    [MOVE_OCTAZOOKA - 1] = MOVE_DESC_OCTAZOOKA,
    [MOVE_SPIKES - 1] = MOVE_DESC_SPIKES,
    [MOVE_ZAPCANNON - 1] = MOVE_DESC_ZAPCANNON,
    [MOVE_FORESIGHT - 1] = MOVE_DESC_FORESIGHT,
    [MOVE_DESTINYBOND - 1] = MOVE_DESC_DESTINYBOND,
    [MOVE_PERISHSONG - 1] = MOVE_DESC_PERISHSONG,
    [MOVE_ICYWIND - 1] = MOVE_DESC_ICYWIND,
    [MOVE_DETECT - 1] = MOVE_DESC_DETECT,
    [MOVE_BONERUSH - 1] = MOVE_DESC_BONERUSH,
    [MOVE_LOCKON - 1] = MOVE_DESC_LOCKON,
    [MOVE_OUTRAGE - 1] = MOVE_DESC_OUTRAGE,
    [MOVE_SANDSTORM - 1] = MOVE_DESC_SANDSTORM,
    [MOVE_GIGADRAIN - 1] = MOVE_DESC_GIGADRAIN,
    [MOVE_ENDURE - 1] = MOVE_DESC_ENDURE,
    [MOVE_CHARM - 1] = MOVE_DESC_CHARM,
    [MOVE_ROLLOUT - 1] = MOVE_DESC_ROLLOUT,
    [MOVE_FALSESWIPE - 1] = MOVE_DESC_FALSESWIPE,
    [MOVE_SWAGGER - 1] = MOVE_DESC_SWAGGER,
    [MOVE_MILKDRINK - 1] = MOVE_DESC_MILKDRINK,
    [MOVE_SPARK - 1] = MOVE_DESC_SPARK,
    [MOVE_FURYCUTTER - 1] = MOVE_DESC_FURYCUTTER,
    [MOVE_STEELWING - 1] = MOVE_DESC_STEELWING,
    [MOVE_MEANLOOK - 1] = MOVE_DESC_MEANLOOK,
    [MOVE_ATTRACT - 1] = MOVE_DESC_ATTRACT,
    [MOVE_SLEEPTALK - 1] = MOVE_DESC_SLEEPTALK,
    [MOVE_HEALBELL - 1] = MOVE_DESC_HEALBELL,
    [MOVE_RETURN - 1] = MOVE_DESC_RETURN,
    [MOVE_PRESENT - 1] = MOVE_DESC_PRESENT,
    [MOVE_FRUSTRATION - 1] = MOVE_DESC_FRUSTRATION,
    [MOVE_SAFEGUARD - 1] = MOVE_DESC_SAFEGUARD,
    [MOVE_PAINSPLIT - 1] = MOVE_DESC_PAINSPLIT,
    [MOVE_SACREDFIRE - 1] = MOVE_DESC_SACREDFIRE,
    [MOVE_MAGNITUDE - 1] = MOVE_DESC_MAGNITUDE,
    [MOVE_DYNAMICPUNCH - 1] = MOVE_DESC_DYNAMICPUNCH,
    [MOVE_MEGAHORN - 1] = MOVE_DESC_MEGAHORN,
    [MOVE_DRAGONBREATH - 1] = MOVE_DESC_DRAGONBREATH,
    [MOVE_BATONPASS - 1] = MOVE_DESC_BATONPASS,
    [MOVE_ENCORE - 1] = MOVE_DESC_ENCORE,
    [MOVE_PURSUIT - 1] = MOVE_DESC_PURSUIT,
    [MOVE_RAPIDSPIN - 1] = MOVE_DESC_RAPIDSPIN,
    [MOVE_SWEETSCENT - 1] = MOVE_DESC_SWEETSCENT,
    [MOVE_IRONTAIL - 1] = MOVE_DESC_IRONTAIL,
    [MOVE_METALCLAW - 1] = MOVE_DESC_METALCLAW,
    [MOVE_VITALTHROW - 1] = MOVE_DESC_VITALTHROW,
    [MOVE_MORNINGSUN - 1] = MOVE_DESC_MORNINGSUN,
    [MOVE_SYNTHESIS - 1] = MOVE_DESC_SYNTHESIS,
    [MOVE_MOONLIGHT - 1] = MOVE_DESC_MOONLIGHT,
    [MOVE_HIDDENPOWER - 1] = MOVE_DESC_HIDDENPOWER,
    [MOVE_CROSSCHOP - 1] = MOVE_DESC_CROSSCHOP,
    [MOVE_TWISTER - 1] = MOVE_DESC_TWISTER,
    [MOVE_RAINDANCE - 1] = MOVE_DESC_RAINDANCE,
    [MOVE_SUNNYDAY - 1] = MOVE_DESC_SUNNYDAY,
    [MOVE_CRUNCH - 1] = MOVE_DESC_CRUNCH,
    [MOVE_MIRRORCOAT - 1] = MOVE_DESC_MIRRORCOAT,
    [MOVE_PSYCHUP - 1] = MOVE_DESC_PSYCHUP,
    [MOVE_EXTREMESPEED - 1] = MOVE_DESC_EXTREMESPEED,
    [MOVE_ANCIENTPOWER - 1] = MOVE_DESC_ANCIENTPOWER,
    [MOVE_SHADOWBALL - 1] = MOVE_DESC_SHADOWBALL,
    [MOVE_FUTURESIGHT - 1] = MOVE_DESC_FUTURESIGHT,
    [MOVE_ROCKSMASH - 1] = MOVE_DESC_ROCKSMASH,
    [MOVE_WHIRLPOOL - 1] = MOVE_DESC_WHIRLPOOL,
    [MOVE_BEATUP - 1] = MOVE_DESC_BEATUP,
    [MOVE_FAKEOUT - 1] = MOVE_DESC_FAKEOUT,
    [MOVE_UPROAR - 1] = MOVE_DESC_UPROAR,
    [MOVE_STOCKPILE - 1] = MOVE_DESC_STOCKPILE,
    [MOVE_SPITUP - 1] = MOVE_DESC_SPITUP,
    [MOVE_SWALLOW - 1] = MOVE_DESC_SWALLOW,
    [MOVE_HEATWAVE - 1] = MOVE_DESC_HEATWAVE,
    [MOVE_HAIL - 1] = MOVE_DESC_HAIL,
    [MOVE_TORMENT - 1] = MOVE_DESC_TORMENT,
    [MOVE_FLATTER - 1] = MOVE_DESC_FLATTER,
    [MOVE_WILLOWISP - 1] = MOVE_DESC_WILLOWISP,
    [MOVE_MEMENTO - 1] = MOVE_DESC_MEMENTO,
    [MOVE_FACADE - 1] = MOVE_DESC_FACADE,
    [MOVE_FOCUSPUNCH - 1] = MOVE_DESC_FOCUSPUNCH,
    [MOVE_SMELLINGSALTS - 1] = MOVE_DESC_SMELLINGSALTS,
    [MOVE_FOLLOWME - 1] = MOVE_DESC_FOLLOWME,
    [MOVE_NATUREPOWER - 1] = MOVE_DESC_NATUREPOWER,
    [MOVE_CHARGE - 1] = MOVE_DESC_CHARGE,
    [MOVE_TAUNT - 1] = MOVE_DESC_TAUNT,
    [MOVE_HELPINGHAND - 1] = MOVE_DESC_HELPINGHAND,
    [MOVE_TRICK - 1] = MOVE_DESC_TRICK,
    [MOVE_ROLEPLAY - 1] = MOVE_DESC_ROLEPLAY,
    [MOVE_WISH - 1] = MOVE_DESC_WISH,
    [MOVE_ASSIST - 1] = MOVE_DESC_ASSIST,
    [MOVE_INGRAIN - 1] = MOVE_DESC_INGRAIN,
    [MOVE_SUPERPOWER - 1] = MOVE_DESC_SUPERPOWER,
    [MOVE_MAGICCOAT - 1] = MOVE_DESC_MAGICCOAT,
    [MOVE_RECYCLE - 1] = MOVE_DESC_RECYCLE,
    [MOVE_REVENGE - 1] = MOVE_DESC_REVENGE,
    [MOVE_BRICKBREAK - 1] = MOVE_DESC_BRICKBREAK,
    [MOVE_YAWN - 1] = MOVE_DESC_YAWN,
    [MOVE_KNOCKOFF - 1] = MOVE_DESC_KNOCKOFF,
    [MOVE_ENDEAVOR - 1] = MOVE_DESC_ENDEAVOR,
    [MOVE_ERUPTION - 1] = MOVE_DESC_ERUPTION,
    [MOVE_SKILLSWAP - 1] = MOVE_DESC_SKILLSWAP,
    [MOVE_IMPRISON - 1] = MOVE_DESC_IMPRISON,
    [MOVE_REFRESH - 1] = MOVE_DESC_REFRESH,
    [MOVE_GRUDGE - 1] = MOVE_DESC_GRUDGE,
    [MOVE_SNATCH - 1] = MOVE_DESC_SNATCH,
    [MOVE_SECRETPOWER - 1] = MOVE_DESC_SECRETPOWER,
    [MOVE_DIVE - 1] = MOVE_DESC_DIVE,
    [MOVE_ARMTHRUST - 1] = MOVE_DESC_ARMTHRUST,
    [MOVE_CAMOUFLAGE - 1] = MOVE_DESC_CAMOUFLAGE,
    [MOVE_TAILGLOW - 1] = MOVE_DESC_TAILGLOW,
    [MOVE_LUSTERPURGE - 1] = MOVE_DESC_LUSTERPURGE,
    [MOVE_MISTBALL - 1] = MOVE_DESC_MISTBALL,
    [MOVE_FEATHERDANCE - 1] = MOVE_DESC_FEATHERDANCE,
    [MOVE_TEETERDANCE - 1] = MOVE_DESC_TEETERDANCE,
    [MOVE_BLAZEKICK - 1] = MOVE_DESC_BLAZEKICK,
    [MOVE_MUDSPORT - 1] = MOVE_DESC_MUDSPORT,
    [MOVE_ICEBALL - 1] = MOVE_DESC_ICEBALL,
    [MOVE_NEEDLEARM - 1] = MOVE_DESC_NEEDLEARM,
    [MOVE_SLACKOFF - 1] = MOVE_DESC_SLACKOFF,
    [MOVE_HYPERVOICE - 1] = MOVE_DESC_HYPERVOICE,
    [MOVE_POISONFANG - 1] = MOVE_DESC_POISONFANG,
    [MOVE_CRUSHCLAW - 1] = MOVE_DESC_CRUSHCLAW,
    [MOVE_BLASTBURN - 1] = MOVE_DESC_BLASTBURN,
    [MOVE_HYDROCANNON - 1] = MOVE_DESC_HYDROCANNON,
    [MOVE_METEORMASH - 1] = MOVE_DESC_METEORMASH,
    [MOVE_ASTONISH - 1] = MOVE_DESC_ASTONISH,
    [MOVE_WEATHERBALL - 1] = MOVE_DESC_WEATHERBALL,
    [MOVE_AROMATHERAPY - 1] = MOVE_DESC_AROMATHERAPY,
    [MOVE_FAKETEARS - 1] = MOVE_DESC_FAKETEARS,
    [MOVE_AIRCUTTER - 1] = MOVE_DESC_AIRCUTTER,
    [MOVE_OVERHEAT - 1] = MOVE_DESC_OVERHEAT,
    [MOVE_ODORSLEUTH - 1] = MOVE_DESC_ODORSLEUTH,
    [MOVE_ROCKTOMB - 1] = MOVE_DESC_ROCKTOMB,
    [MOVE_SILVERWIND - 1] = MOVE_DESC_SILVERWIND,
    [MOVE_METALSOUND - 1] = MOVE_DESC_METALSOUND,
    [MOVE_GRASSWHISTLE - 1] = MOVE_DESC_GRASSWHISTLE,
    [MOVE_TICKLE - 1] = MOVE_DESC_TICKLE,
    [MOVE_COSMICPOWER - 1] = MOVE_DESC_COSMICPOWER,
    [MOVE_WATERSPOUT - 1] = MOVE_DESC_WATERSPOUT,
    [MOVE_SIGNALBEAM - 1] = MOVE_DESC_SIGNALBEAM,
    [MOVE_SHADOWPUNCH - 1] = MOVE_DESC_SHADOWPUNCH,
    [MOVE_EXTRASENSORY - 1] = MOVE_DESC_EXTRASENSORY,
    [MOVE_SKYUPPERCUT - 1] = MOVE_DESC_SKYUPPERCUT,
    [MOVE_SANDTOMB - 1] = MOVE_DESC_SANDTOMB,
    [MOVE_SHEERCOLD - 1] = MOVE_DESC_SHEERCOLD,
    [MOVE_MUDDYWATER - 1] = MOVE_DESC_MUDDYWATER,
    [MOVE_BULLETSEED - 1] = MOVE_DESC_BULLETSEED,
    [MOVE_AERIALACE - 1] = MOVE_DESC_AERIALACE,
    [MOVE_ICICLESPEAR - 1] = MOVE_DESC_ICICLESPEAR,
    [MOVE_IRONDEFENSE - 1] = MOVE_DESC_IRONDEFENSE,
    [MOVE_BLOCK - 1] = MOVE_DESC_BLOCK,
    [MOVE_HOWL - 1] = MOVE_DESC_HOWL,
    [MOVE_DRAGONCLAW - 1] = MOVE_DESC_DRAGONCLAW,
    [MOVE_FRENZYPLANT - 1] = MOVE_DESC_FRENZYPLANT,
    [MOVE_BULKUP - 1] = MOVE_DESC_BULKUP,
    [MOVE_BOUNCE - 1] = MOVE_DESC_BOUNCE,
    [MOVE_MUDSHOT - 1] = MOVE_DESC_MUDSHOT,
    [MOVE_POISONTAIL - 1] = MOVE_DESC_POISONTAIL,
    [MOVE_COVET - 1] = MOVE_DESC_COVET,
    [MOVE_VOLTTACKLE - 1] = MOVE_DESC_VOLTTACKLE,
    [MOVE_MAGICALLEAF - 1] = MOVE_DESC_MAGICALLEAF,
    [MOVE_WATERSPORT - 1] = MOVE_DESC_WATERSPORT,
    [MOVE_CALMMIND - 1] = MOVE_DESC_CALMMIND,
    [MOVE_LEAFBLADE - 1] = MOVE_DESC_LEAFBLADE,
    [MOVE_DRAGONDANCE - 1] = MOVE_DESC_DRAGONDANCE,
    [MOVE_ROCKBLAST - 1] = MOVE_DESC_ROCKBLAST,
    [MOVE_SHOCKWAVE - 1] = MOVE_DESC_SHOCKWAVE,
    [MOVE_WATERPULSE - 1] = MOVE_DESC_WATERPULSE,
    [MOVE_DOOMDESIRE - 1] = MOVE_DESC_DOOMDESIRE,
    [MOVE_PSYCHOBOOST - 1] = MOVE_DESC_PSYCHOBOOST,
    [MOVE_LEECHFANG - 1] = MOVE_DESC_LEECHFANG,
    [MOVE_AIRSLASH - 1] = MOVE_DESC_AIRSLASH,
    [MOVE_AQUAJET - 1] = MOVE_DESC_AQUAJET,
    [MOVE_AQUATAIL - 1] = MOVE_DESC_AQUATAIL,
    [MOVE_AURASPHERE - 1] = MOVE_DESC_AURASPHERE,
    [MOVE_AVALANCHE - 1] = MOVE_DESC_AVALANCHE,
    [MOVE_BRAVEBIRD - 1] = MOVE_DESC_BRAVEBIRD,
    [MOVE_BUGBUZZ - 1] = MOVE_DESC_BUGBUZZ,
    [MOVE_BULLETPUNCH - 1] = MOVE_DESC_BULLETPUNCH,
    [MOVE_CHARGEBEAM - 1] = MOVE_DESC_CHARGEBEAM,
    [MOVE_CLOSECOMBAT - 1] = MOVE_DESC_CLOSECOMBAT,
    [MOVE_CROSSPOISON - 1] = MOVE_DESC_CROSSPOISON,
    [MOVE_DARKPULSE - 1] = MOVE_DESC_DARKPULSE,
    [MOVE_DISCHARGE - 1] = MOVE_DESC_DISCHARGE,
    [MOVE_DRACOMETEOR - 1] = MOVE_DESC_DRACOMETEOR,
    [MOVE_DRAGONPULSE - 1] = MOVE_DESC_DRAGONPULSE,
    [MOVE_DRAINPUNCH - 1] = MOVE_DESC_DRAINPUNCH,
    [MOVE_EARTHPOWER - 1] = MOVE_DESC_EARTHPOWER,
    [MOVE_ENERGYBALL - 1] = MOVE_DESC_ENERGYBALL,
    [MOVE_FOCUSBLAST - 1] = MOVE_DESC_FOCUSBLAST,
    [MOVE_FORCEPALM - 1] = MOVE_DESC_FORCEPALM,
    [MOVE_GIGAIMPACT - 1] = MOVE_DESC_GIGAIMPACT,
    [MOVE_GRASSKNOT - 1] = MOVE_DESC_GRASSKNOT,
    [MOVE_GUNKSHOT - 1] = MOVE_DESC_GUNKSHOT,
    [MOVE_HAMMERARM - 1] = MOVE_DESC_HAMMERARM,
    [MOVE_HEADSMASH - 1] = MOVE_DESC_HEADSMASH,
    [MOVE_ICESHARD - 1] = MOVE_DESC_ICESHARD,
    [MOVE_IRONHEAD - 1] = MOVE_DESC_IRONHEAD,
    [MOVE_LAVAPLUME - 1] = MOVE_DESC_LAVAPLUME,
    [MOVE_MAGNETBOMB - 1] = MOVE_DESC_MAGNETBOMB,
    [MOVE_MUDBOMB - 1] = MOVE_DESC_MUDBOMB,
    [MOVE_NASTYPLOT - 1] = MOVE_DESC_NASTYPLOT,
    [MOVE_NIGHTSLASH - 1] = MOVE_DESC_NIGHTSLASH,
    [MOVE_OMINOUSWIND - 1] = MOVE_DESC_OMINOUSWIND,
    [MOVE_POWERGEM - 1] = MOVE_DESC_POWERGEM,
    [MOVE_POWERWHIP - 1] = MOVE_DESC_POWERWHIP,
    [MOVE_PSYCHOCUT - 1] = MOVE_DESC_PSYCHOCUT,
    [MOVE_ROCKCLIMB - 1] = MOVE_DESC_ROCKCLIMB,
    [MOVE_ROCKPOLISH - 1] = MOVE_DESC_ROCKPOLISH,
    [MOVE_ROCKWRECKER - 1] = MOVE_DESC_ROCKWRECKER,
    [MOVE_ROOST - 1] = MOVE_DESC_ROOST,
    [MOVE_SEEDBOMB - 1] = MOVE_DESC_SEEDBOMB,
    [MOVE_SHADOWCLAW - 1] = MOVE_DESC_SHADOWCLAW,
    [MOVE_SHADOWSNEAK - 1] = MOVE_DESC_SHADOWSNEAK,
    [MOVE_VACUUMWAVE - 1] = MOVE_DESC_VACUUMWAVE,
    [MOVE_XSCISSOR - 1] = MOVE_DESC_XSCISSOR,
    [MOVE_ZENHEADBUTT - 1] = MOVE_DESC_ZENHEADBUTT,
    [MOVE_SWITCHEROO - 1] = MOVE_DESC_SWITCHEROO,
    [MOVE_DRILLRUN - 1] = MOVE_DESC_DRILLRUN,
    [MOVE_BULLDOZE - 1] = MOVE_DESC_BULLDOZE,
    [MOVE_ELECTROWEB - 1] = MOVE_DESC_ELECTROWEB,
    [MOVE_FLAMECHARGE - 1] = MOVE_DESC_FLAMECHARGE,
    [MOVE_FROSTBREATH - 1] = MOVE_DESC_FROSTBREATH,
    [MOVE_HEARTSTAMP - 1] = MOVE_DESC_HEARTSTAMP,
    [MOVE_HONECLAWS - 1] = MOVE_DESC_HONECLAWS,
    [MOVE_HORNLEECH - 1] = MOVE_DESC_HORNLEECH,
    [MOVE_COIL - 1] = MOVE_DESC_COIL,
    [MOVE_HURRICANE - 1] = MOVE_DESC_HURRICANE,
    [MOVE_ICICLECRASH - 1] = MOVE_DESC_ICICLECRASH,
    [MOVE_WORKUP - 1] = MOVE_DESC_WORKUP,
    [MOVE_QUIVERDANCE - 1] = MOVE_DESC_QUIVERDANCE,
    [MOVE_LEAFTORNADO - 1] = MOVE_DESC_LEAFTORNADO,
    [MOVE_LOWSWEEP - 1] = MOVE_DESC_LOWSWEEP,
    [MOVE_SNARL - 1] = MOVE_DESC_SNARL,
    [MOVE_STRUGGLEBUG - 1] = MOVE_DESC_STRUGGLEBUG,
    [MOVE_STEAMROLLER - 1] = MOVE_DESC_STEAMROLLER,
    [MOVE_STORMTHROW - 1] = MOVE_DESC_STORMTHROW,
    [MOVE_VENOSHOCK - 1] = MOVE_DESC_VENOSHOCK,
    [MOVE_WILDCHARGE - 1] = MOVE_DESC_WILDCHARGE,
    [MOVE_POISONJAB - 1] = MOVE_DESC_POISONJAB,
    [MOVE_ACIDSPRAY - 1] = MOVE_DESC_ACIDSPRAY,
    [MOVE_FIERYDANCE - 1] = MOVE_DESC_FIERYDANCE,
    [MOVE_CLEARSMOG - 1] = MOVE_DESC_CLEARSMOG,
    [MOVE_LEAFSTORM - 1] = MOVE_DESC_LEAFSTORM,
    [MOVE_STONEEDGE - 1] = MOVE_DESC_STONEEDGE,
    [MOVE_PAYBACK - 1] = MOVE_DESC_PAYBACK,
    [MOVE_FIREFANG - 1] = MOVE_DESC_FIREFANG,
    [MOVE_ICEFANG - 1] = MOVE_DESC_ICEFANG,
    [MOVE_THUNDERFANG - 1] = MOVE_DESC_THUNDERFANG,
    [MOVE_FLAREBLITZ - 1] = MOVE_DESC_FLAREBLITZ,
    [MOVE_INFERNO - 1] = MOVE_DESC_INFERNO,
    [MOVE_HEX - 1] = MOVE_DESC_HEX,
    [MOVE_DUALCHOP - 1] = MOVE_DESC_DUALCHOP,
    [MOVE_DOUBLEHIT - 1] = MOVE_DESC_DOUBLEHIT,
    [MOVE_COTTONGUARD - 1] = MOVE_DESC_COTTONGUARD,
    [MOVE_ACROBATICS - 1] = MOVE_DESC_ACROBATICS,
    [MOVE_FLAMEBURST - 1] = MOVE_DESC_FLAMEBURST,
    [MOVE_UTURN - 1] = MOVE_DESC_UTURN,
    [MOVE_VOLTSWITCH - 1] = MOVE_DESC_VOLTSWITCH,
    [MOVE_DRAGONTAIL - 1] = MOVE_DESC_DRAGONTAIL,
    [MOVE_CIRCLETHROW - 1] = MOVE_DESC_CIRCLETHROW,
    [MOVE_MIRRORSHOT - 1] = MOVE_DESC_MIRRORSHOT,
    [MOVE_WOODHAMMER - 1] = MOVE_DESC_WOODHAMMER,
    [MOVE_HEALPULSE - 1] = MOVE_DESC_HEALPULSE,
    [MOVE_FLASHCANNON - 1] = MOVE_DESC_FLASHCANNON,
    [MOVE_BUGBITE - 1] = MOVE_DESC_BUGBITE,
    [MOVE_PLUCK - 1] = MOVE_DESC_PLUCK,
    [MOVE_SHELLSMASH - 1] = MOVE_DESC_SHELLSMASH,
    [MOVE_RAGEPOWDER - 1] = MOVE_DESC_RAGEPOWDER,
    [MOVE_WAKEUPSLAP - 1] = MOVE_DESC_WAKEUPSLAP,
    [MOVE_RAZORSHELL - 1] = MOVE_DESC_RAZORSHELL,
    [MOVE_COPYCAT - 1] = MOVE_DESC_COPYCAT,
    [MOVE_MIRACLEEYE - 1] = MOVE_DESC_MIRACLEEYE,
    [MOVE_SUCKERPUNCH - 1] = MOVE_DESC_SUCKERPUNCH,
    [MOVE_SCALD - 1] = MOVE_DESC_SCALD,
    [MOVE_BRINE - 1] = MOVE_DESC_BRINE,
    [MOVE_FAIRYWIND - 1] = MOVE_DESC_FAIRYWIND,
    [MOVE_BABYDOLLEYES - 1] = MOVE_DESC_BABYDOLLEYES,
    [MOVE_PLAYROUGH - 1] = MOVE_DESC_PLAYROUGH,
    [MOVE_MOONBLAST - 1] = MOVE_DESC_MOONBLAST,
    [MOVE_DRAININGKISS - 1] = MOVE_DESC_DRAININGKISS,
    [MOVE_DAZZLINGGLEAM - 1] = MOVE_DESC_DAZZLINGGLEAM,
    [MOVE_DISARMINGVOICE - 1] = MOVE_DESC_DISARMINGVOICE,
    [MOVE_STEALTHROCK - 1] = MOVE_DESC_STEALTHROCK,
    [MOVE_TOXICSPIKES - 1] = MOVE_DESC_TOXICSPIKES,
    [MOVE_HEALINGWISH - 1] = MOVE_DESC_HEALINGWISH,
    [MOVE_LUNARDANCE - 1] = MOVE_DESC_LUNARDANCE,
    [MOVE_TAILWIND - 1] = MOVE_DESC_TAILWIND,
    [MOVE_BOOMBURST - 1] = MOVE_DESC_BOOMBURST,
    [MOVE_INCINERATE - 1] = MOVE_DESC_INCINERATE,
    [MOVE_WORRYSEED - 1] = MOVE_DESC_WORRYSEED,
    [MOVE_GASTROACID - 1] = MOVE_DESC_GASTROACID,
    [MOVE_GEOMANCY - 1] = MOVE_DESC_GEOMANCY,
    [MOVE_FLOWERSHIELD - 1] = MOVE_DESC_FLOWERSHIELD,
    [MOVE_ROTOTILLER - 1] = MOVE_DESC_ROTOTILLER,
    [MOVE_SHIFTGEAR - 1] = MOVE_DESC_SHIFTGEAR,
    [MOVE_STICKYWEB - 1] = MOVE_DESC_STICKYWEB,
    [MOVE_STOREDPOWER - 1] = MOVE_DESC_STOREDPOWER,
    [MOVE_ACUPRESSURE - 1] = MOVE_DESC_ACUPRESSURE,
    [MOVE_PUNISHMENT - 1] = MOVE_DESC_PUNISHMENT,
    [MOVE_ASSURANCE - 1] = MOVE_DESC_ASSURANCE,
    [MOVE_DRAGONRUSH - 1] = MOVE_DESC_DRAGONRUSH,
    [MOVE_DARKVOID - 1] = MOVE_DESC_DARKVOID,
    [MOVE_FEINT - 1] = MOVE_DESC_FEINT,
    [MOVE_PHANTOMFORCE - 1] = MOVE_DESC_PHANTOMFORCE,
    [MOVE_PETALBLIZZARD - 1] = MOVE_DESC_PETALBLIZZARD,
    [MOVE_PLAYNICE - 1] = MOVE_DESC_PLAYNICE,
    [MOVE_ROAROFTIME - 1] = MOVE_DESC_ROAROFTIME,
    [MOVE_SPACIALREND - 1] = MOVE_DESC_SPACIALREND,
    [MOVE_MAGMASTORM - 1] = MOVE_DESC_MAGMASTORM,
    [MOVE_FINALGAMBIT - 1] = MOVE_DESC_FINALGAMBIT,
    [MOVE_SHADOWFORCE - 1] = MOVE_DESC_SHADOWFORCE,
    [MOVE_NUZZLE - 1] = MOVE_DESC_NUZZLE,
    [MOVE_RETALIATE - 1] = MOVE_DESC_RETALIATE,
    [MOVE_STEELYHIT - 1] = MOVE_DESC_STEELYHIT,
    [MOVE_JUDGMENT - 1] = MOVE_DESC_JUDGMENT,
    [MOVE_FREEZEDRY - 1] = MOVE_DESC_FREEZEDRY,
    [MOVE_PSYSHOCK - 1] = MOVE_DESC_PSYSHOCK,
    [MOVE_ROUND - 1] = MOVE_DESC_ROUND,
    [MOVE_TAILSLAP - 1] = MOVE_DESC_TAILSLAP,
    [MOVE_GEARGRIND - 1] = MOVE_DESC_GEARGRIND,
    [MOVE_NATURALGIFT - 1] = MOVE_DESC_NATURALGIFT,
    [MOVE_CHIPAWAY - 1] = MOVE_DESC_CHIPAWAY,
    [MOVE_SMACKDOWN - 1] = MOVE_DESC_SMACKDOWN,
    [MOVE_HYPERSPACEHOLE - 1] = MOVE_DESC_HYPERSPACEHOLE,
    [MOVE_GYROBALL - 1] = MOVE_DESC_GYROBALL,
    [MOVE_HYPERSPACEFURY - 1] = MOVE_DESC_HYPERSPACEFURY,
    [MOVE_ATTACKORDER - 1] = MOVE_DESC_ATTACKORDER,
    [MOVE_DEFENDORDER - 1] = MOVE_DESC_DEFENDORDER,
    [MOVE_HEALORDER - 1] = MOVE_DESC_HEALORDER,
    [MOVE_CAPTIVATE - 1] = MOVE_DESC_CAPTIVATE,
    [MOVE_DEFOG - 1] = MOVE_DESC_DEFOG,
    [MOVE_ORIGINPULSE - 1] = MOVE_DESC_ORIGINPULSE,
    [MOVE_PRECIPICEBLADES - 1] = MOVE_DESC_PRECIPICEBLADES,
    [MOVE_GUARDSWAP - 1] = MOVE_DESC_GUARDSWAP,
    [MOVE_STEAMERUPTION - 1] = MOVE_DESC_STEAMERUPTION,
    [MOVE_METALBURST - 1] = MOVE_DESC_METALBURST,
    [MOVE_MEFIRST - 1] = MOVE_DESC_MEFIRST,
    [MOVE_POWERSWAP - 1] = MOVE_DESC_POWERSWAP,
    [MOVE_POWERTRICK - 1] = MOVE_DESC_POWERTRICK,
    [MOVE_PSYCHOSHIFT - 1] = MOVE_DESC_PSYCHOSHIFT,
    [MOVE_WRINGOUT - 1] = MOVE_DESC_WRINGOUT,
    [MOVE_KINGSSHIELD - 1] = MOVE_DESC_KINGSSHIELD,
    [MOVE_PSYSTRIKE - 1] = MOVE_DESC_PSYSTRIKE,
    [MOVE_AUTOTOMIZE - 1] = MOVE_DESC_AUTOTOMIZE,
    [MOVE_DIAMONDSTORM - 1] = MOVE_DESC_DIAMONDSTORM,
    [MOVE_SLUDGEWAVE - 1] = MOVE_DESC_SLUDGEWAVE,
    [MOVE_HEAVYSLAM - 1] = MOVE_DESC_HEAVYSLAM,
    [MOVE_SYNCHRONOISE - 1] = MOVE_DESC_SYNCHRONOISE,
    [MOVE_ELECTROBALL - 1] = MOVE_DESC_ELECTROBALL,
    [MOVE_FOULPLAY - 1] = MOVE_DESC_FOULPLAY,
    [MOVE_ENTRAINMENT - 1] = MOVE_DESC_ENTRAINMENT,
    [MOVE_NIGHTDAZE - 1] = MOVE_DESC_NIGHTDAZE,
    [MOVE_ECHOEDVOICE - 1] = MOVE_DESC_ECHOEDVOICE,
    [MOVE_LANDSWRATH - 1] = MOVE_DESC_LANDSWRATH,
    [MOVE_OBLIVIONWING - 1] = MOVE_DESC_OBLIVIONWING,
    [MOVE_HEARTSWAP - 1] = MOVE_DESC_HEARTSWAP,
    [MOVE_CRUSHGRIP - 1] = MOVE_DESC_CRUSHGRIP,
    [MOVE_SACREDSWORD - 1] = MOVE_DESC_SACREDSWORD,
    [MOVE_HEATCRASH - 1] = MOVE_DESC_HEATCRASH,
    [MOVE_HEADCHARGE - 1] = MOVE_DESC_HEADCHARGE,
    [MOVE_TECHNOBLAST - 1] = MOVE_DESC_TECHNOBLAST,
    [MOVE_RELICSONG - 1] = MOVE_DESC_RELICSONG,
    [MOVE_SECRETSWORD - 1] = MOVE_DESC_SECRETSWORD,
    [MOVE_GLACIATE - 1] = MOVE_DESC_GLACIATE,
    [MOVE_BOLTSTRIKE - 1] = MOVE_DESC_BOLTSTRIKE,
    [MOVE_BLUEFLARE - 1] = MOVE_DESC_BLUEFLARE,
    [MOVE_FREEZESHOCK - 1] = MOVE_DESC_FREEZESHOCK,
    [MOVE_ICEBURN - 1] = MOVE_DESC_ICEBURN,
    [MOVE_VCREATE - 1] = MOVE_DESC_VCREATE,
    [MOVE_FUSIONFLARE - 1] = MOVE_DESC_FUSIONFLARE,
    [MOVE_FUSIONBOLT - 1] = MOVE_DESC_FUSIONBOLT,
    [MOVE_FELLSTINGER - 1] = MOVE_DESC_FELLSTINGER,
    [MOVE_NOBLEROAR - 1] = MOVE_DESC_NOBLEROAR,
    [MOVE_DRAGONASCENT - 1] = MOVE_DESC_DRAGONASCENT,
    [MOVE_PARTINGSHOT - 1] = MOVE_DESC_PARTINGSHOT,
    [MOVE_TOPSYTURVY - 1] = MOVE_DESC_TOPSYTURVY,
    [MOVE_COREENFORCER - 1] = MOVE_DESC_COREENFORCER,
    [MOVE_CHATTER - 1] = MOVE_DESC_CHATTER,
    [MOVE_CONFIDE - 1] = MOVE_DESC_CONFIDE,
    [MOVE_WATERSHURIKEN - 1] = MOVE_DESC_WATERSHURIKEN,
    [MOVE_MYSTICALFIRE - 1] = MOVE_DESC_MYSTICALFIRE,
    [MOVE_SPIKYSHIELD - 1] = MOVE_DESC_SPIKYSHIELD,
    [MOVE_EERIEIMPULSE - 1] = MOVE_DESC_EERIEIMPULSE,
    [MOVE_HOLDBACK - 1] = MOVE_DESC_HOLDBACK,
    [MOVE_INFESTATION - 1] = MOVE_DESC_INFESTATION,
    [MOVE_POWERUPPUNCH - 1] = MOVE_DESC_POWERUPPUNCH,
    [MOVE_THOUSANDARROWS - 1] = MOVE_DESC_THOUSANDARROWS,
    [MOVE_THOUSANDWAVES - 1] = MOVE_DESC_THOUSANDWAVES,
    [MOVE_PARABOLICCHARGE - 1] = MOVE_DESC_PARABOLICCHARGE,
    [MOVE_SEARINGSHOT - 1] = MOVE_DESC_SEARINGSHOT,
    [MOVE_SEEDFLARE - 1] = MOVE_DESC_SEEDFLARE,
    [MOVE_ACCELEROCK - 1] = MOVE_DESC_ACCELEROCK,
    [MOVE_ANCHORSHOT - 1] = MOVE_DESC_ANCHORSHOT,
    [MOVE_AURORAVEIL - 1] = MOVE_DESC_AURORAVEIL,
    [MOVE_BANEFULBUNKER - 1] = MOVE_DESC_BANEFULBUNKER,
    [MOVE_BEAKBLAST - 1] = MOVE_DESC_BEAKBLAST,
    [MOVE_BRUTALSWING - 1] = MOVE_DESC_BRUTALSWING,
    [MOVE_BURNUP - 1] = MOVE_DESC_BURNUP,
    [MOVE_CLANGINGSCALES - 1] = MOVE_DESC_CLANGINGSCALES,
    [MOVE_DARKESTLARIAT - 1] = MOVE_DESC_DARKESTLARIAT,
    [MOVE_DRAGONHAMMER - 1] = MOVE_DESC_DRAGONHAMMER,
    [MOVE_FIRELASH - 1] = MOVE_DESC_FIRELASH,
    [MOVE_FIRSTIMPRESSION - 1] = MOVE_DESC_FIRSTIMPRESSION,
    [MOVE_FLEURCANNON - 1] = MOVE_DESC_FLEURCANNON,
    [MOVE_FLORALHEALING - 1] = MOVE_DESC_FLORALHEALING,
    [MOVE_GEARUP - 1] = MOVE_DESC_GEARUP,
    [MOVE_HIGHHORSEPOWER - 1] = MOVE_DESC_HIGHHORSEPOWER,
    [MOVE_ICEHAMMER - 1] = MOVE_DESC_ICEHAMMER,
    [MOVE_LASERFOCUS - 1] = MOVE_DESC_LASERFOCUS,
    [MOVE_LEAFAGE - 1] = MOVE_DESC_LEAFAGE,
    [MOVE_LIQUIDATION - 1] = MOVE_DESC_LIQUIDATION,
    [MOVE_LUNGE - 1] = MOVE_DESC_LUNGE,
    [MOVE_MOONGEISTBEAM - 1] = MOVE_DESC_MOONGEISTBEAM,
    [MOVE_MULTIATTACK - 1] = MOVE_DESC_MULTIATTACK,
    [MOVE_NATURESMADNESS - 1] = MOVE_DESC_NATURESMADNESS,
    [MOVE_POLLENPUFF - 1] = MOVE_DESC_POLLENPUFF,
    [MOVE_POWERTRIP - 1] = MOVE_DESC_POWERTRIP,
    [MOVE_PRISMATICLASER - 1] = MOVE_DESC_PRISMATICLASER,
    [MOVE_PSYCHICFANGS - 1] = MOVE_DESC_PSYCHICFANGS,
    [MOVE_PURIFY - 1] = MOVE_DESC_PURIFY,
    [MOVE_REVELATIONDANCE - 1] = MOVE_DESC_REVELATIONDANCE,
    [MOVE_SHADOWBONE - 1] = MOVE_DESC_SHADOWBONE,
    [MOVE_SHELLTRAP - 1] = MOVE_DESC_SHELLTRAP,
    [MOVE_SHOREUP - 1] = MOVE_DESC_SHOREUP,
    [MOVE_SMARTSTRIKE - 1] = MOVE_DESC_SMARTSTRIKE,
    [MOVE_SOLARBLADE - 1] = MOVE_DESC_SOLARBLADE,
    [MOVE_SPARKLINGARIA - 1] = MOVE_DESC_SPARKLINGARIA,
    [MOVE_SPECTRALTHIEF - 1] = MOVE_DESC_SPECTRALTHIEF,
    [MOVE_SPEEDSWAP - 1] = MOVE_DESC_SPEEDSWAP,
    [MOVE_SPIRITSHACKLE - 1] = MOVE_DESC_SPIRITSHACKLE,
    [MOVE_SPOTLIGHT - 1] = MOVE_DESC_SPOTLIGHT,
    [MOVE_STOMPINGTANTRUM - 1] = MOVE_DESC_STOMPINGTANTRUM,
    [MOVE_STRENGTHSAP - 1] = MOVE_DESC_STRENGTHSAP,
    [MOVE_SUNSTEELSTRIKE - 1] = MOVE_DESC_SUNSTEELSTRIKE,
    [MOVE_TEARFULLOOK - 1] = MOVE_DESC_TEARFULLOOK,
    [MOVE_THROATCHOP - 1] = MOVE_DESC_THROATCHOP,
    [MOVE_TOXICTHREAD - 1] = MOVE_DESC_TOXICTHREAD,
    [MOVE_TROPKICK - 1] = MOVE_DESC_TROPKICK,
    [MOVE_ZINGZAP - 1] = MOVE_DESC_ZINGZAP,
    [MOVE_ELECTRICTERRAIN - 1] = MOVE_DESC_ELECTRICTERRAIN,
    [MOVE_GRASSYTERRAIN - 1] = MOVE_DESC_GRASSYTERRAIN,
    [MOVE_MISTYTERRAIN - 1] = MOVE_DESC_MISTYTERRAIN,
    [MOVE_PSYCHICTERRAIN - 1] = MOVE_DESC_PSYCHICTERRAIN,
    [MOVE_GRASSPLEDGE - 1] = MOVE_DESC_GRASSPLEDGE,
    [MOVE_FIREPLEDGE - 1] = MOVE_DESC_FIREPLEDGE,
    [MOVE_WATERPLEDGE - 1] = MOVE_DESC_WATERPLEDGE,
    [MOVE_TRICKROOM - 1] = MOVE_DESC_TRICKROOM,
    [MOVE_MAGICROOM - 1] = MOVE_DESC_MAGICROOM,
    [MOVE_WONDERROOM - 1] = MOVE_DESC_WONDERROOM,
    [MOVE_CRAFTYSHIELD - 1] = MOVE_DESC_CRAFTYSHIELD,
    [MOVE_MATBLOCK - 1] = MOVE_DESC_MATBLOCK,
    [MOVE_QUICKGUARD - 1] = MOVE_DESC_QUICKGUARD,
    [MOVE_WIDEGUARD - 1] = MOVE_DESC_WIDEGUARD,
    [MOVE_AQUARING - 1] = MOVE_DESC_AQUARING,
    [MOVE_AROMATICMIST - 1] = MOVE_DESC_AROMATICMIST,
    [MOVE_BELCH - 1] = MOVE_DESC_BELCH,
    [MOVE_BESTOW - 1] = MOVE_DESC_BESTOW,
    [MOVE_FLING - 1] = MOVE_DESC_FLING,
    [MOVE_FLYINGPRESS - 1] = MOVE_DESC_FLYINGPRESS,
    [MOVE_GRAVITY - 1] = MOVE_DESC_GRAVITY,
    [MOVE_GUARDSPLIT - 1] = MOVE_DESC_GUARDSPLIT,
    [MOVE_HEALBLOCK - 1] = MOVE_DESC_HEALBLOCK,
    [MOVE_IONDELUGE - 1] = MOVE_DESC_IONDELUGE,
    [MOVE_LUCKYCHANT - 1] = MOVE_DESC_LUCKYCHANT,
    [MOVE_MAGNETRISE - 1] = MOVE_DESC_MAGNETRISE,
    [MOVE_MAGNETICFLUX - 1] = MOVE_DESC_MAGNETICFLUX,
    [MOVE_POWDER - 1] = MOVE_DESC_POWDER,
    [MOVE_POWERSPLIT - 1] = MOVE_DESC_POWERSPLIT,
    [MOVE_REFLECTTYPE - 1] = MOVE_DESC_REFLECTTYPE,
    [MOVE_SIMPLEBEAM - 1] = MOVE_DESC_SIMPLEBEAM,
    [MOVE_SOAK - 1] = MOVE_DESC_SOAK,
    [MOVE_TELEKINESIS - 1] = MOVE_DESC_TELEKINESIS,
    [MOVE_TRICKORTREAT - 1] = MOVE_DESC_TRICKORTREAT,
    [MOVE_VENOMDRENCH - 1] = MOVE_DESC_VENOMDRENCH,
    [MOVE_FORESTSCURSE - 1] = MOVE_DESC_FORESTSCURSE,
    [MOVE_MINDBLOWN - 1] = MOVE_DESC_MINDBLOWN,
    [MOVE_PHOTONGEYSER - 1] = MOVE_DESC_PHOTONGEYSER,
    [MOVE_PLASMAFISTS - 1] = MOVE_DESC_PLASMAFISTS,
    [MOVE_ELECTRIFY - 1] = MOVE_DESC_ELECTRIFY,
    [MOVE_EMBARGO - 1] = MOVE_DESC_EMBARGO,
    [MOVE_FAIRYLOCK - 1] = MOVE_DESC_FAIRYLOCK,
    [MOVE_LIGHTOFRUIN - 1] = MOVE_DESC_LIGHTOFRUIN,
    [MOVE_TRUMPCARD - 1] = MOVE_DESC_TRUMPCARD,
    [MOVE_AFTERYOU - 1] = MOVE_DESC_AFTERYOU,
    [MOVE_INSTRUCT - 1] = MOVE_DESC_INSTRUCT,
    [MOVE_QUASH - 1] = MOVE_DESC_QUASH,
    [MOVE_HAPPYHOUR - 1] = MOVE_DESC_HAPPYHOUR,
    [MOVE_DOUBLEIRONBASH - 1] = MOVE_DESC_DOUBLEIRONBASH,
    [MOVE_LASTRESORT - 1] = MOVE_DESC_LASTRESORT,
    [MOVE_SKYDROP - 1] = MOVE_DESC_SKYDROP,
    [MOVE_CELEBRATE - 1] = MOVE_DESC_CELEBRATE,
    [MOVE_HOLDHANDS - 1] = MOVE_DESC_HOLDHANDS,
    [MOVE_DYNAMAXCANNON - 1] = MOVE_DESC_DYNAMAX_CANNON,
    [MOVE_SNIPESHOT - 1] = MOVE_DESC_SNIPE_SHOT,
    [MOVE_JAWLOCK - 1] = MOVE_DESC_JAW_LOCK,
    [MOVE_STUFFCHEEKS - 1] = MOVE_DESC_STUFF_CHEEKS,
    [MOVE_NORETREAT - 1] = MOVE_DESC_NO_RETREAT,
    [MOVE_TARSHOT - 1] = MOVE_DESC_TAR_SHOT,
    [MOVE_MAGICPOWDER - 1] = MOVE_DESC_MAGIC_POWDER,
    [MOVE_DRAGONDARTS - 1] = MOVE_DESC_DRAGON_DARTS,
    [MOVE_TEATIME - 1] = MOVE_DESC_TEATIME,
    [MOVE_OCTOLOCK - 1] = MOVE_DESC_OCTOLOCK,
    [MOVE_BOLTBEAK - 1] = MOVE_DESC_BOLT_BEAK,
    [MOVE_FISHIOUSREND - 1] = MOVE_DESC_FISHIOUS_REND,
    [MOVE_COURTCHANGE - 1] = MOVE_DESC_COURT_CHANGE,
    [MOVE_CLANGOROUSSOUL - 1] = MOVE_DESC_CLANGOROUS_SOUL,
    [MOVE_BODYPRESS - 1] = MOVE_DESC_BODY_PRESS,
    [MOVE_DECORATE - 1] = MOVE_DESC_DECORATE,
    [MOVE_DRUMBEATING - 1] = MOVE_DESC_DRUM_BEATING,
    [MOVE_SNAPTRAP - 1] = MOVE_DESC_SNAP_TRAP,
    [MOVE_PYROBALL - 1] = MOVE_DESC_PYRO_BALL,
    [MOVE_BEHEMOTHBLADE - 1] = MOVE_DESC_BEHEMOTH_BLADE,
    [MOVE_BEHEMOTHBASH - 1] = MOVE_DESC_BEHEMOTH_BASH,
    [MOVE_AURAWHEEL - 1] = MOVE_DESC_AURA_WHEEL,
    [MOVE_BREAKINGSWIPE - 1] = MOVE_DESC_BREAKING_SWIPE,
    [MOVE_BRANCHPOKE - 1] = MOVE_DESC_BRANCH_POKE,
    [MOVE_OVERDRIVE - 1] = MOVE_DESC_OVERDRIVE,
    [MOVE_APPLEACID - 1] = MOVE_DESC_APPLE_ACID,
    [MOVE_GRAVAPPLE - 1] = MOVE_DESC_GRAV_APPLE,
    [MOVE_SPIRITBREAK - 1] = MOVE_DESC_SPIRIT_BREAK,
    [MOVE_STRANGESTEAM - 1] = MOVE_DESC_STRANGE_STEAM,
    [MOVE_LIFEDEW - 1] = MOVE_DESC_LIFE_DEW,
    [MOVE_OBSTRUCT - 1] = MOVE_DESC_OBSTRUCT,
    [MOVE_FALSESURRENDER - 1] = MOVE_DESC_FALSE_SURRENDER,
    [MOVE_METEORASSAULT - 1] = MOVE_DESC_METEOR_ASSAULT,
    [MOVE_ETERNABEAM - 1] = MOVE_DESC_ETERNABEAM,
    [MOVE_STEELBEAM - 1] = MOVE_DESC_STEEL_BEAM,
    [MOVE_EXPANDINGFORCE - 1] = MOVE_DESC_EXPANDING_FORCE,
    [MOVE_STEELROLLER - 1] = MOVE_DESC_STEEL_ROLLER,
    [MOVE_SCALESHOT - 1] = MOVE_DESC_SCALE_SHOT,
    [MOVE_METEORBEAM - 1] = MOVE_DESC_METEOR_BEAM,
    [MOVE_SHELLSIDEARM - 1] = MOVE_DESC_SHELL_SIDE_ARM,
    [MOVE_MISTYEXPLOSION - 1] = MOVE_DESC_MISTY_EXPLOSION,
    [MOVE_GRASSYGLIDE - 1] = MOVE_DESC_GRASSY_GLIDE,
    [MOVE_RISINGVOLTAGE - 1] = MOVE_DESC_RISING_VOLTAGE,
    [MOVE_TERRAINPULSE - 1] = MOVE_DESC_TERRAIN_PULSE,
    [MOVE_SKITTERSMACK - 1] = MOVE_DESC_SKITTER_SMACK,
    [MOVE_BURNINGJEALOUSY - 1] = MOVE_DESC_BURNING_JEALOUSY,
    [MOVE_LASHOUT - 1] = MOVE_DESC_LASH_OUT,
    [MOVE_POLTERGEIST - 1] = MOVE_DESC_POLTERGEIST,
    [MOVE_CORROSIVEGAS - 1] = MOVE_DESC_CORROSIVE_GAS,
    [MOVE_COACHING - 1] = MOVE_DESC_COACHING,
    [MOVE_FLIPTURN - 1] = MOVE_DESC_FLIP_TURN,
    [MOVE_TRIPLEAXEL - 1] = MOVE_DESC_TRIPLE_AXEL,
    [MOVE_DUALWINGBEAT - 1] = MOVE_DESC_DUAL_WINGBEAT,
    [MOVE_SCORCHINGSANDS - 1] = MOVE_DESC_SCORCHING_SANDS,
    [MOVE_JUNGLEHEALING - 1] = MOVE_DESC_JUNGLE_HEALING,
    [MOVE_WICKEDBLOW - 1] = MOVE_DESC_WICKED_BLOW,
    [MOVE_SURGINGSTRIKES - 1] = MOVE_DESC_SURGING_STRIKES,
    [MOVE_FREEZINGGLARE - 1] = MOVE_DESC_FREEZING_GLARE,
    [MOVE_THUNDEROUSKICK - 1] = MOVE_DESC_THUNDEROUS_KICK,
    [MOVE_FIERYWRATH - 1] = MOVE_DESC_FIERY_WRATH,
    [MOVE_THUNDERCAGE - 1] = MOVE_DESC_THUNDER_CAGE,
    [MOVE_DRAGONENERGY - 1] = MOVE_DESC_DRAGON_ENERGY,
};