//-------------------------------------------------------------------------
/*
Copyright (C) 1996, 2003 - 3D Realms Entertainment

This file is part of Duke Nukem 3D version 1.5 - Atomic Edition

Duke Nukem 3D is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
aint32_t with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1996 - Todd Replogle
Prepared for public release: 03/21/2003 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

#define SECTOREFFECTOR 1
#define ACTIVATOR 2
#define TOUCHPLATE 3
#define ACTIVATORLOCKED 4
#define MUSICANDSFX 5
#define LOCATORS 6
#define CYCLER 7
#define MASTERSWITCH 8
#define RESPAWN 9
#define GPSPEED 10
#define ARROW 20
#define FIRSTGUNSPRITE 21
#define CHAINGUNSPRITE 22
#define RPGSPRITE 23
#define FREEZESPRITE 24
#define SHRINKERSPRITE 25
#define HEAVYHBOMB 26
#define TRIPBOMBSPRITE 27
#define SHOTGUNSPRITE 28
#define DEVISTATORSPRITE 29
#define HEALTHBOX 30
#define AMMOBOX 31
#define INVENTORYBOX 33
#define FREEZEAMMO 37
#define AMMO 40
#define BATTERYAMMO 41
#define DEVISTATORAMMO 42
#define RPGAMMO 44
#define GROWAMMO 45
#define CRYSTALAMMO 46
#define HBOMBAMMO 47
#define AMMOLOTS 48
#define SHOTGUNAMMO 49
#define COLA 51
#define SIXPAK 52
#define FIRSTAID 53
#define SHIELD 54
#define STEROIDS 55
#define AIRTANK 56
#define JETPACK 57
#define HEATSENSOR 59
#define ACCESSCARD 60
#define BOOTS 61
#define MIRRORBROKE 70
#define CLOUDYOCEAN 78
#define CLOUDYSKIES 79
#define MOONSKY1 80
#define MOONSKY2 81
#define MOONSKY3 82
#define MOONSKY4 83
#define BIGORBIT1 84
#define BIGORBIT2 85
#define BIGORBIT3 86
#define BIGORBIT4 87
#define BIGORBIT5 88
#define LA 89
#define REDSKY1 98
#define REDSKY2 99
#define ATOMICHEALTH 100
#define TECHLIGHT2 120
#define TECHLIGHTBUST2 121
#define TECHLIGHT4 122
#define TECHLIGHTBUST4 123
#define WALLLIGHT4 124
#define WALLLIGHTBUST4 125
#define ACCESSSWITCH 130
#define SLOTDOOR 132
#define LIGHTSWITCH 134
#define SPACEDOORSWITCH 136
#define SPACELIGHTSWITCH 138
#define FRANKENSTINESWITCH 140
#define NUKEBUTTON 142
#define MULTISWITCH 146
#define DOORTILE5 150
#define DOORTILE6 151
#define DOORTILE1 152
#define DOORTILE2 153
#define DOORTILE3 154
#define DOORTILE4 155
#define DOORTILE7 156
#define DOORTILE8 157
#define DOORTILE9 158
#define DOORTILE10 159
#define DOORSHOCK 160
#define DIPSWITCH 162
#define DIPSWITCH2 164
#define TECHSWITCH 166
#define DIPSWITCH3 168
#define ACCESSSWITCH2 170
#define REFLECTWATERTILE 180
#define FLOORSLIME 200
#define BIGFORCE 230
#define EPISODE 247
#define MASKWALL9 255
#define W_LIGHT 260
#define SCREENBREAK1 263
#define SCREENBREAK2 264
#define SCREENBREAK3 265
#define SCREENBREAK4 266
#define SCREENBREAK5 267
#define SCREENBREAK6 268
#define SCREENBREAK7 269
#define SCREENBREAK8 270
#define SCREENBREAK9 271
#define SCREENBREAK10 272
#define SCREENBREAK11 273
#define SCREENBREAK12 274
#define SCREENBREAK13 275
#define MASKWALL1 285
#define W_TECHWALL1 293
#define W_TECHWALL2 297
#define W_TECHWALL15 299
#define W_TECHWALL3 301
#define W_TECHWALL4 305
#define W_TECHWALL10 306
#define W_TECHWALL16 307
#define WATERTILE2 336
#define BPANNEL1 341
#define PANNEL1 342
#define PANNEL2 343
#define WATERTILE 344
#define STATIC 351
#define W_SCREENBREAK 357
#define W_HITTECHWALL3 360
#define W_HITTECHWALL4 361
#define W_HITTECHWALL2 362
#define W_HITTECHWALL1 363
#define MASKWALL10 387
#define MASKWALL11 391
#define DOORTILE22 395
#define FANSPRITE 407
#define FANSPRITEBROKE 411
#define FANSHADOW 412
#define FANSHADOWBROKE 416
#define DOORTILE18 447
#define DOORTILE19 448
#define DOORTILE20 449
// #define SPACESHUTTLE 487
#define SATELLITE 489
#define VIEWSCREEN2 499
#define VIEWSCREENBROKE 501
#define VIEWSCREEN 502
#define GLASS 503
#define GLASS2 504
#define STAINGLASS1 510
#define MASKWALL5 514
#define SATELITE 516
#define FUELPOD 517
#define SLIMEPIPE 538
#define CRACK1 546
#define CRACK2 547
#define CRACK3 548
#define CRACK4 549
#define FOOTPRINTS 550
#define DOMELITE 551
#define CAMERAPOLE 554
#define CHAIR1 556
#define CHAIR2 557
#define BROKENCHAIR 559
#define MIRROR 560
#define WATERFOUNTAIN 563
#define WATERFOUNTAINBROKE 567
#define FEMMAG1 568
#define TOILET 569
#define STALL 571
#define STALLBROKE 573
#define FEMMAG2 577
#define REACTOR2 578
#define REACTOR2BURNT 579
#define REACTOR2SPARK 580
#define GRATE1 595
#define BGRATE1 596
#define SOLARPANNEL 602
#define NAKED1 603
#define ANTENNA 607
#define MASKWALL12 609
#define TOILETBROKE 615
#define PIPE2 616
#define PIPE1B 617
#define PIPE3 618
#define PIPE1 619
#define CAMERA1 621
#define BRICK 626
#define SPLINTERWOOD 630
#define PIPE2B 633
#define BOLT1 634
#define W_NUMBERS 640
#define WATERDRIP 660
#define WATERBUBBLE 661
#define WATERBUBBLEMAKER 662
#define W_FORCEFIELD 663
#define VACUUM 669
#define FOOTPRINTS2 672
#define FOOTPRINTS3 673
#define FOOTPRINTS4 674
#define EGG 675
#define SCALE 678
#define CHAIR3 680
#define CAMERALIGHT 685
#define MOVIECAMERA 686
#define IVUNIT 689
#define POT1 694
#define POT2 695
#define POT3 697
#define PIPE3B 700
#define WALLLIGHT3 701
#define WALLLIGHTBUST3 702
#define WALLLIGHT1 703
#define WALLLIGHTBUST1 704
#define WALLLIGHT2 705
#define WALLLIGHTBUST2 706
#define LIGHTSWITCH2 712
#define WAITTOBESEATED 716
#define DOORTILE14 717
#define STATUE 753
#define MIKE 762
#define VASE 765
#define SUSHIPLATE1 768
#define SUSHIPLATE2 769
#define SUSHIPLATE3 774
#define SUSHIPLATE4 779
#define DOORTILE16 781
#define SUSHIPLATE5 792
#define OJ 806
#define MASKWALL13 830
#define HURTRAIL 859
#define POWERSWITCH1 860
#define LOCKSWITCH1 862
#define POWERSWITCH2 864
#define ATM 867
#define STATUEFLASH 869
#define ATMBROKE 888
#define BIGHOLE2 893
#define STRIPEBALL 901
#define QUEBALL 902
#define POCKET 903
#define WOODENHORSE 904
#define TREE1 908
#define TREE2 910
#define CACTUS 911
#define MASKWALL2 913
#define MASKWALL3 914
#define MASKWALL4 915
#define FIREEXT 916
#define TOILETWATER 921
#define NEON1 925
#define NEON2 926
#define CACTUSBROKE 939
#define BOUNCEMINE 940
#define BROKEFIREHYDRENT 950
#define BOX 951
#define BULLETHOLE 952
#define BOTTLE1 954
#define BOTTLE2 955
#define BOTTLE3 956
#define BOTTLE4 957
#define FEMPIC5 963
#define FEMPIC6 964
#define FEMPIC7 965
#define HYDROPLANT 969
#define OCEANSPRITE1 971
#define OCEANSPRITE2 972
#define OCEANSPRITE3 973
#define OCEANSPRITE4 974
#define OCEANSPRITE5 975
#define GENERICPOLE 977
#define CONE 978
#define HANGLIGHT 979
#define HYDRENT 981
#define MASKWALL14 988
#define TIRE 990
#define PIPE5 994
#define PIPE6 995
#define PIPE4 996
#define PIPE4B 997
#define BROKEHYDROPLANT 1003
#define PIPE5B 1005
#define NEON3 1007
#define NEON4 1008
#define NEON5 1009
#define BOTTLE5 1012
#define BOTTLE6 1013
#define BOTTLE8 1014
#define SPOTLITE 1020
#define HANGOOZ 1022
#define MASKWALL15 1024
#define BOTTLE7 1025
#define HORSEONSIDE 1026
#define GLASSPIECES 1031
#define HORSELITE 1034
#define DONUTS 1045
#define NEON6 1046
#define MASKWALL6 1059
#define CLOCK 1060
#define RUBBERCAN 1062
#define BROKENCLOCK 1067
#define PLUG 1069
#define OOZFILTER 1079
#define FLOORPLASMA 1082
#define REACTOR 1088
#define REACTORSPARK 1092
#define REACTORBURNT 1096
#define DOORTILE15 1102
#define HANDSWITCH 1111
#define CIRCLEPANNEL 1113
#define CIRCLEPANNELBROKE 1114
#define PULLSWITCH 1122
#define MASKWALL8 1124
#define BIGHOLE 1141
#define ALIENSWITCH 1142
#define DOORTILE21 1144
#define HANDPRINTSWITCH 1155
#define BOTTLE10 1157
#define BOTTLE11 1158
#define BOTTLE12 1159
#define BOTTLE13 1160
#define BOTTLE14 1161
#define BOTTLE15 1162
#define BOTTLE16 1163
#define BOTTLE17 1164
#define BOTTLE18 1165
#define BOTTLE19 1166
#define DOORTILE17 1169
#define MASKWALL7 1174
#define JAILBARBREAK 1175
#define DOORTILE11 1178
#define DOORTILE12 1179
#define VENDMACHINE 1212
#define VENDMACHINEBROKE 1214
#define COLAMACHINE 1215
#define COLAMACHINEBROKE 1217
#define CRANEPOLE 1221
#define CRANE 1222
#define BARBROKE 1225
#define BLOODPOOL 1226
#define NUKEBARREL 1227
#define NUKEBARRELDENTED 1228
#define NUKEBARRELLEAKED 1229
#define CANWITHSOMETHING 1232
#define MONEY 1233
#define BANNER 1236
#define EXPLODINGBARREL 1238
#define EXPLODINGBARREL2 1239
#define FIREBARREL 1240
#define SEENINE 1247
#define SEENINEDEAD 1248
#define STEAM 1250
#define CEILINGSTEAM 1255
#define PIPE6B 1260
#define TRANSPORTERBEAM 1261
#define RAT 1267
#define TRASH 1272
#define FEMPIC1 1280
#define FEMPIC2 1289
#define BLANKSCREEN 1293
#define PODFEM1 1294
#define FEMPIC3 1298
#define FEMPIC4 1306
#define FEM1 1312
#define FEM2 1317
#define FEM3 1321
#define FEM5 1323
#define BLOODYPOLE 1324
#define FEM4 1325
#define FEM6 1334
#define FEM6PAD 1335
#define FEM8 1336
#define HELECOPT 1346
#define FETUSJIB 1347
#define HOLODUKE 1348
#define SPACEMARINE 1353
#define INDY 1355
#define FETUS 1358
#define FETUSBROKE 1359
#define MONK 1352
#define LUKE 1354
#define COOLEXPLOSION1 1360
#define WATERSPLASH2 1380
#define FIREVASE 1390
#define SCRATCH 1393
#define FEM7 1395
#define APLAYERTOP 1400
#define APLAYER 1405
#define PLAYERONWATER 1420
#define DUKELYINGDEAD 1518
#define DUKETORSO 1520
#define DUKEGUN 1528
#define DUKELEG 1536
#define SHARK 1550
#define BLOOD 1620
#define FIRELASER 1625
#define TRANSPORTERSTAR 1630
#define SPIT 1636
#define LOOGIE 1637
#define FIST 1640
#define FREEZEBLAST 1641
#define DEVISTATORBLAST 1642
#define SHRINKSPARK 1646
#define TONGUE 1647
#define MORTER 1650
#define SHRINKEREXPLOSION 1656
#define RADIUSEXPLOSION 1670
#define FORCERIPPLE 1671
#define LIZTROOP 1680
#define LIZTROOPRUNNING 1681
#define LIZTROOPSTAYPUT 1682
#define LIZTOP 1705
#define LIZTROOPSHOOT 1715
#define LIZTROOPJETPACK 1725
#define LIZTROOPDSPRITE 1734
#define LIZTROOPONTOILET 1741
#define LIZTROOPJUSTSIT 1742
#define LIZTROOPDUCKING 1744
#define HEADJIB1 1768
#define ARMJIB1 1772
#define LEGJIB1 1776
#define CANNONBALL 1817
#define OCTABRAIN 1820
#define OCTABRAINSTAYPUT 1821
#define OCTATOP 1845
#define OCTADEADSPRITE 1855
#define INNERJAW 1860
#define DRONE 1880
#define EXPLOSION2 1890
#define COMMANDER 1920
#define COMMANDERSTAYPUT 1921
#define RECON 1960
#define TANK 1975
#define PIGCOP 2000
#define PIGCOPSTAYPUT 2001
#define PIGCOPDIVE 2045
#define PIGCOPDEADSPRITE 2060
#define PIGTOP 2061
#define LIZMAN 2120
#define LIZMANSTAYPUT 2121
#define LIZMANSPITTING 2150
#define LIZMANFEEDING 2160
#define LIZMANJUMP 2165
#define LIZMANDEADSPRITE 2185
#define FECES 2200
#define LIZMANHEAD1 2201
#define LIZMANARM1 2205
#define LIZMANLEG1 2209
#define EXPLOSION2BOT 2219
#define USERWEAPON 2235
#define HEADERBAR 2242
#define JIBS1 2245
#define JIBS2 2250
#define JIBS3 2255
#define JIBS4 2260
#define JIBS5 2265
#define BURNING 2270
#define FIRE 2271
#define JIBS6 2286
#define BLOODSPLAT1 2296
#define BLOODSPLAT3 2297
#define BLOODSPLAT2 2298
#define BLOODSPLAT4 2299
#define OOZ 2300
#define OOZ2 2309
#define WALLBLOOD1 2301
#define WALLBLOOD2 2302
#define WALLBLOOD3 2303
#define WALLBLOOD4 2304
#define WALLBLOOD5 2305
#define WALLBLOOD6 2306
#define WALLBLOOD7 2307
#define WALLBLOOD8 2308
#define BURNING2 2310
#define FIRE2 2311
#define CRACKKNUCKLES 2324
#define SMALLSMOKE 2329
#define SMALLSMOKEMAKER 2330
#define FLOORFLAME 2333
#define ROTATEGUN 2360
#define GREENSLIME 2370
#define WATERDRIPSPLASH 2380
#define SCRAP6 2390
#define SCRAP1 2400
#define SCRAP2 2404
#define SCRAP3 2408
#define SCRAP4 2412
#define SCRAP5 2416
#define ORGANTIC 2420
#define BETAVERSION 2440
#define PLAYERISHERE 2442
#define PLAYERWASHERE 2443
#define SELECTDIR 2444
#define F1HELP 2445
#define NOTCHON 2446
#define NOTCHOFF 2447
#define GROWSPARK 2448
#define DUKEICON 2452
#define BADGUYICON 2453
#define FOODICON 2454
#define GETICON 2455
#define MENUSCREEN 2456
#define MENUBAR 2457
#define KILLSICON 2458
#define FIRSTAID_ICON 2460
#define HEAT_ICON 2461
#define BOTTOMSTATUSBAR 2462
#define BOOT_ICON 2463
#define FRAGBAR 2465
#define JETPACK_ICON 2467
#define AIRTANK_ICON 2468
#define STEROIDS_ICON 2469
#define HOLODUKE_ICON 2470
#define ACCESS_ICON 2471
#define DIGITALNUM 2472
#define DUKECAR 2491
#define CAMCORNER 2482
#define CAMLIGHT 2484
#define LOGO 2485
#define TITLE 2486
#define NUKEWARNINGICON 2487
#define MOUSECURSOR 2488
#define SLIDEBAR 2489
#define DREALMS 2492
#define BETASCREEN 2493
#define WINDOWBORDER1 2494
#define TEXTBOX 2495
#define WINDOWBORDER2 2496
#define DUKENUKEM 2497
#define THREEDEE 2498
#define INGAMEDUKETHREEDEE 2499
#define TENSCREEN 2500
#define PLUTOPAKSPRITE 2501
#define DEVISTATOR 2510
#define KNEE 2521
#define CROSSHAIR 2523
#define FIRSTGUN 2524
#define FIRSTGUNRELOAD 2528
#define FALLINGCLIP 2530
#define CLIPINHAND 2531
#define HAND 2532
#define SHELL 2533
#define SHOTGUNSHELL 2535
#define CHAINGUN 2536
#define RPGGUN 2544
#define RPGMUZZLEFLASH 2545
#define FREEZE 2548
#define CATLITE 2552
#define SHRINKER 2556
#define HANDHOLDINGLASER 2563
#define TRIPBOMB 2566
#define LASERLINE 2567
#define HANDHOLDINGACCESS 2568
#define HANDREMOTE 2570
#define HANDTHROW 2573
#define TIP 2576
#define GLAIR 2578
#define SCUBAMASK 2581
#define SPACEMASK 2584
#define FORCESPHERE 2590
#define SHOTSPARK1 2595
#define RPG 2605
#define LASERSITE 2612
#define SHOTGUN 2613
#define BOSS1 2630
#define BOSS1STAYPUT 2631
#define BOSS1SHOOT 2660
#define BOSS1LOB 2670
#define BOSSTOP 2696
#define BOSS2 2710
#define BOSS3 2760
#define SPINNINGNUKEICON 2813
#define BIGFNTCURSOR 2820
#define SMALLFNTCURSOR 2821
#define STARTALPHANUM 2822
#define ENDALPHANUM 2915
#define BIGALPHANUM 2940
#define BIGPERIOD 3002
#define BIGCOMMA 3003
#define BIGX 3004
#define BIGQ 3005
#define BIGSEMI 3006
#define BIGCOLIN 3007
#define THREEBYFIVE 3010
#define BIGAPPOS 3022
#define BLANK 3026
#define MINIFONT 3072
#define BUTTON1 3164
#define GLASS3 3187
#define RESPAWNMARKERRED 3190
#define RESPAWNMARKERYELLOW 3200
#define RESPAWNMARKERGREEN 3210
#define BONUSSCREEN 3240
#define VIEWBORDER 3250
#define VICTORY1 3260
#define ORDERING 3270
#define TEXTSTORY 3280
#define LOADSCREEN 3281
#define BORNTOBEWILDSCREEN 3370
#define BLIMP 3400
#define FEM9 3450
#define FOOTPRINT 3701
#define POOP 4094
#define FRAMEEFFECT1 4095
// FIX_00037: steroids trigger a too many sprite respawn in 1.3 and 1.3d.
#define FRAMEEFFECT1_13CON 3999 // Needed to ensure 1.3/1.3d compliance --mk
#define PANNEL3 4099
#define SCREENBREAK19 4125
#define W_TECHWALL11 4130
#define W_TECHWALL12 4131
#define W_TECHWALL13 4132
#define W_TECHWALL14 4133
#define SCREENBREAK14 4120
#define SCREENBREAK15 4123
#define SCREENBREAK16 4127
#define SCREENBREAK17 4128
#define SCREENBREAK18 4129
#define W_TECHWALL5 4134
#define W_TECHWALL6 4136
#define W_TECHWALL7 4138
#define W_TECHWALL8 4140
#define W_TECHWALL9 4142
#define BPANNEL3 4100
#define MIMON 4120
#define W_HITTECHWALL16 4144
#define W_HITTECHWALL10 4145
#define W_HITTECHWALL15 4147
#define W_MILKSHELF 4181
#define W_MILKSHELFBROKE 4203
#define PURPLELAVA 4240
#define LAVABUBBLE 4340
#define DUKECUTOUT 4352
#define TARGET 4359
#define GUNPOWDERBARREL 4360
#define DUCK 4361
#define HATRACK 4367
#define DESKLAMP 4370
#define COFFEEMACHINE 4372
#define CUPS 4373
#define GAVALS 4374
#define GAVALS2 4375
#define POLICELIGHTPOLE 4377
#define FLOORBASKET 4388
#define PUKE 4389
#define DOORTILE23 4391
#define TOPSECRET 4396
#define SPEAKER 4397
#define TEDDYBEAR 4400
#define ROBOTDOG 4402
#define ROBOTPIRATE 4404
#define ROBOTMOUSE 4407
#define MAIL 4410
#define MAILBAG 4413
#define HOTMEAT 4427
#define COFFEEMUG 4438
#define DONUTS2 4440
#define TRIPODCAMERA 4444
#define METER 4453
#define DESKPHONE 4454
#define GUMBALLMACHINE 4458
#define GUMBALLMACHINEBROKE 4459
#define PAPER 4460
#define MACE 4464
#define GENERICPOLE2 4465
#define XXXSTACY 4470
#define WETFLOOR 4495
#define BROOM 4496
#define MOP 4497
#define PIRATE1A 4510
#define PIRATE4A 4511
#define PIRATE2A 4512
#define PIRATE5A 4513
#define PIRATE3A 4514
#define PIRATE6A 4515
#define PIRATEHALF 4516
#define CHESTOFGOLD 4520
#define SIDEBOLT1 4525
#define FOODOBJECT1 4530
#define FOODOBJECT2 4531
#define FOODOBJECT3 4532
#define FOODOBJECT4 4533
#define FOODOBJECT5 4534
#define FOODOBJECT6 4535
#define FOODOBJECT7 4536
#define FOODOBJECT8 4537
#define FOODOBJECT9 4538
#define FOODOBJECT10 4539
#define FOODOBJECT11 4540
#define FOODOBJECT12 4541
#define FOODOBJECT13 4542
#define FOODOBJECT14 4543
#define FOODOBJECT15 4544
#define FOODOBJECT16 4545
#define FOODOBJECT17 4546
#define FOODOBJECT18 4547
#define FOODOBJECT19 4548
#define FOODOBJECT20 4549
#define HEADLAMP 4550
#define TAMPON 4557
#define SKINNEDCHICKEN 4554
#define FEATHEREDCHICKEN 4555
#define ROBOTDOG2 4560
#define JOLLYMEAL 4569
#define DUKEBURGER 4570
#define SHOPPINGCART 4576
#define CANWITHSOMETHING2 4580
#define CANWITHSOMETHING3 4581
#define CANWITHSOMETHING4 4582
#define SNAKEP 4590
#define DOLPHIN1 4591
#define DOLPHIN2 4592
#define NEWBEAST 4610
#define NEWBEASTSTAYPUT 4611
#define NEWBEASTJUMP 4690
#define NEWBEASTHANG 4670
#define NEWBEASTHANGDEAD 4671
#define BOSS4 4740
#define BOSS4STAYPUT 4741
#define FEM10 4864
#define TOUGHGAL 4866
#define MAN 4871
#define MAN2 4872
#define WOMAN 4874
#define PLEASEWAIT 4887
#define NATURALLIGHTNING 4890
#define WEATHERWARN 4893
#define DUKETAG 4900
#define SIGN1 4909
#define SIGN2 4912
#define JURYGUY 4943




// These tile positions are reserved!
#define RESERVEDSLOT1 6132
#define RESERVEDSLOT2 6133
#define RESERVEDSLOT3 6134
#define RESERVEDSLOT4 6135
#define RESERVEDSLOT5 6136
#define RESERVEDSLOT6 6137
#define RESERVEDSLOT7 6138
#define RESERVEDSLOT8 6139
#define RESERVEDSLOT9 6140
#define RESERVEDSLOT10 6141
#define RESERVEDSLOT11 6142
#define RESERVEDSLOT12 6143

// Defines weapon, not to be used with the 'shoot' keyword.

#define KNEE_WEAPON         0
#define PISTOL_WEAPON       1
#define SHOTGUN_WEAPON      2
#define CHAINGUN_WEAPON     3
#define RPG_WEAPON          4
#define HANDBOMB_WEAPON     5
#define SHRINKER_WEAPON     6
#define DEVISTATOR_WEAPON   7
#define TRIPBOMB_WEAPON     8
#define FREEZE_WEAPON       9
#define HANDREMOTE_WEAPON   10
#define GROW_WEAPON         11

// Defines the motion characteristics of an actor
#define faceplayer 1
#define geth 2
#define getv 4
#define randomangle 8
#define faceplayerslow 16
#define spin 32
#define faceplayersmart 64
#define fleeenemy 128
#define jumptoplayer 257
#define seekplayer 512
#define furthestdir 1024
#define dodgebullet 4096

#ifndef YES
// Some misc #defines
#define NO       0
#define YES      1
#endif

// Defines for 'useractor' keyword
#define notenemy       0
#define enemy          1
#define enemystayput   2

// Player Actions.
#define pstanding 1
#define pwalking 2
#define prunning 4
#define pducking 8
#define pfalling 16
#define pjumping 32
#define phigher 64
#define pwalkingback 128
#define prunningback 256
#define pkicking 512
#define pshrunk 1024
#define pjetpack 2048
#define ponsteroids 4096
#define ponground 8192
#define palive 16384
#define pdead 32768
#define pfacing 65536


#define GET_STEROIDS     0
#define GET_SHIELD       1
#define GET_SCUBA        2
#define GET_HOLODUKE     3
#define GET_JETPACK      4
#define GET_ACCESS       6
#define GET_HEATS        7
#define GET_FIRSTAID     9
#define GET_BOOTS       10


#define KICK_HIT                         0
#define PISTOL_RICOCHET                  1
#define PISTOL_BODYHIT                   2
#define PISTOL_FIRE                      3
#define EJECT_CLIP                       4
#define INSERT_CLIP                      5
#define CHAINGUN_FIRE                    6
#define RPG_SHOOT                        7
#define POOLBALLHIT                      8
#define RPG_EXPLODE                      9
#define CAT_FIRE                        10
#define SHRINKER_FIRE                   11
#define ACTOR_SHRINKING                 12
#define PIPEBOMB_BOUNCE                 13
#define PIPEBOMB_EXPLODE                14
#define LASERTRIP_ONWALL                15
#define LASERTRIP_ARMING                16
#define LASERTRIP_EXPLODE               17
#define VENT_BUST                       18
#define GLASS_BREAKING                  19
#define GLASS_HEAVYBREAK                20
#define SHORT_CIRCUIT                   21
#define ITEM_SPLASH                     22
#define DUKE_BREATHING                  23
#define DUKE_EXHALING                   24
#define DUKE_GASP                       25
#define SLIM_RECOG                      26
// #define ENDSEQVOL3SND1                  27
#define DUKE_URINATE                    28
#define ENDSEQVOL3SND2                  29
#define ENDSEQVOL3SND3                  30
#define DUKE_PASSWIND                   32
#define DUKE_CRACK                      33
#define SLIM_ATTACK                     34
#define SOMETHINGHITFORCE               35
#define DUKE_DRINKING                   36
#define DUKE_KILLED1                    37
#define DUKE_GRUNT                      38
#define DUKE_HARTBEAT                   39
#define DUKE_ONWATER                    40
#define DUKE_DEAD                       41
#define DUKE_LAND                       42
#define DUKE_WALKINDUCTS                43
#define DUKE_GLAD                       44
#define DUKE_YES                        45
#define DUKE_HEHE                       46
#define DUKE_SHUCKS                     47
#define DUKE_UNDERWATER                 48
#define DUKE_JETPACK_ON                 49
#define DUKE_JETPACK_IDLE               50
#define DUKE_JETPACK_OFF                51
#define LIZTROOP_GROWL                  52
#define LIZTROOP_TALK1                  53
#define LIZTROOP_TALK2                  54
#define LIZTROOP_TALK3                  55
#define DUKETALKTOBOSS                  56
#define LIZCAPT_GROWL                   57
#define LIZCAPT_TALK1                   58
#define LIZCAPT_TALK2                   59
#define LIZCAPT_TALK3                   60
#define LIZARD_BEG                      61
#define LIZARD_PAIN                     62
#define LIZARD_DEATH                    63
#define LIZARD_SPIT                     64
#define DRONE1_HISSRATTLE               65
#define DRONE1_HISSSCREECH              66
#define DUKE_TIP2                       67
#define FLESH_BURNING                   68
#define SQUISHED                        69
#define TELEPORTER                      70
#define ELEVATOR_ON                     71
#define DUKE_KILLED3                    72
#define ELEVATOR_OFF                    73
#define DOOR_OPERATE1                   74
#define SUBWAY                          75
#define SWITCH_ON                       76
#define FAN                             77
#define DUKE_GETWEAPON3                 78
#define FLUSH_TOILET                    79
#define HOVER_CRAFT                     80
#define EARTHQUAKE                      81
#define INTRUDER_ALERT                  82
#define END_OF_LEVEL_WARN               83
#define ENGINE_OPERATING                84
#define REACTOR_ON                      85
#define COMPUTER_AMBIENCE               86
#define GEARS_GRINDING                  87
#define BUBBLE_AMBIENCE                 88
#define MACHINE_AMBIENCE                89
#define SEWER_AMBIENCE                  90
#define WIND_AMBIENCE                   91
#define SOMETHING_DRIPPING              92
#define STEAM_HISSING                   93
#define THEATER_BREATH                  94
#define BAR_MUSIC                       95
#define BOS1_ROAM                       96
#define BOS1_RECOG                      97
#define BOS1_ATTACK1                    98
#define BOS1_PAIN                       99
#define BOS1_DYING                     100
#define BOS2_ROAM                      101
#define BOS2_RECOG                     102
#define BOS2_ATTACK                    103
#define BOS2_PAIN                      104
#define BOS2_DYING                     105
#define GETATOMICHEALTH                106
#define DUKE_GETWEAPON2                107
#define BOS3_DYING                     108
#define SHOTGUN_FIRE                   109
#define PRED_ROAM                      110
#define PRED_RECOG                     111
#define PRED_ATTACK                    112
#define PRED_PAIN                      113
#define PRED_DYING                     114
#define CAPT_ROAM                      115
#define CAPT_ATTACK                    116
#define CAPT_RECOG                     117
#define CAPT_PAIN                      118
#define CAPT_DYING                     119
#define PIG_ROAM                       120
#define PIG_RECOG                      121
#define PIG_ATTACK                     122
#define PIG_PAIN                       123
#define PIG_DYING                      124
#define RECO_ROAM                      125
#define RECO_RECOG                     126
#define RECO_ATTACK                    127
#define RECO_PAIN                      128
#define RECO_DYING                     129
#define DRON_ROAM                      130
#define DRON_RECOG                     131
#define DRON_ATTACK1                   132
#define DRON_PAIN                      133
#define DRON_DYING                     134
#define COMM_ROAM                      135
#define COMM_RECOG                     136
#define COMM_ATTACK                    137
#define COMM_PAIN                      138
#define COMM_DYING                     139
#define OCTA_ROAM                      140
#define OCTA_RECOG                     141
#define OCTA_ATTACK1                   142
#define OCTA_PAIN                      143
#define OCTA_DYING                     144
#define TURR_ROAM                      145
#define TURR_RECOG                     146
#define TURR_ATTACK                    147
#define DUMPSTER_MOVE                  148
#define SLIM_DYING                     149
#define BOS3_ROAM                      150
#define BOS3_RECOG                     151
#define BOS3_ATTACK1                   152
#define BOS3_PAIN                      153
#define BOS1_ATTACK2                   154
#define COMM_SPIN                      155
#define BOS1_WALK                      156
#define DRON_ATTACK2                   157
#define THUD                           158
#define OCTA_ATTACK2                   159
#define WIERDSHOT_FLY                  160
#define TURR_PAIN                      161
#define TURR_DYING                     162
#define SLIM_ROAM                      163
#define LADY_SCREAM                    164
#define DOOR_OPERATE2                  165
#define DOOR_OPERATE3                  166
#define DOOR_OPERATE4                  167
#define BORNTOBEWILDSND                168
#define SHOTGUN_COCK                   169
#define GENERIC_AMBIENCE1              170
#define GENERIC_AMBIENCE2              171
#define GENERIC_AMBIENCE3              172
#define GENERIC_AMBIENCE4              173
#define GENERIC_AMBIENCE5              174
#define GENERIC_AMBIENCE6              175
#define BOS3_ATTACK2                   176
#define GENERIC_AMBIENCE17             177
#define GENERIC_AMBIENCE18             178
#define GENERIC_AMBIENCE19             179
#define GENERIC_AMBIENCE20             180
#define GENERIC_AMBIENCE21             181
#define GENERIC_AMBIENCE22             182
#define SECRETLEVELSND                 183
#define GENERIC_AMBIENCE8              184
#define GENERIC_AMBIENCE9              185
#define GENERIC_AMBIENCE10             186
#define GENERIC_AMBIENCE11             187
#define GENERIC_AMBIENCE12             188
#define GENERIC_AMBIENCE13             189
#define GENERIC_AMBIENCE14             190
#define GENERIC_AMBIENCE15             192
#define GENERIC_AMBIENCE16             193
#define FIRE_CRACKLE                   194
#define BONUS_SPEECH1                  195
#define BONUS_SPEECH2                  196
#define BONUS_SPEECH3                  197
#define PIG_CAPTURE_DUKE               198
#define BONUS_SPEECH4                  199
#define DUKE_LAND_HURT                 200
#define DUKE_HIT_STRIPPER1             201
#define DUKE_TIP1                      202
#define DUKE_KILLED2                   203
#define PRED_ROAM2                     204
#define PIG_ROAM2                      205
#define DUKE_GETWEAPON1                206
#define DUKE_SEARCH2                   207
#define DUKE_CRACK2                    208
#define DUKE_SEARCH                    209
#define DUKE_GET                       210
#define DUKE_LONGTERM_PAIN             211
#define MONITOR_ACTIVE                 212
#define NITEVISION_ONOFF               213
#define DUKE_HIT_STRIPPER2             214
#define DUKE_CRACK_FIRST               215
#define DUKE_USEMEDKIT                 216
#define DUKE_TAKEPILLS                 217
#define DUKE_PISSRELIEF                218
#define SELECT_WEAPON                  219
#define WATER_GURGLE                   220
#define DUKE_GETWEAPON4                221
#define JIBBED_ACTOR1                  222
#define JIBBED_ACTOR2                  223
#define JIBBED_ACTOR3                  224
#define JIBBED_ACTOR4                  225
#define JIBBED_ACTOR5                  226
#define JIBBED_ACTOR6                  227
#define JIBBED_ACTOR7                  228
#define DUKE_GOTHEALTHATLOW            229
#define BOSSTALKTODUKE                 230
#define WAR_AMBIENCE1                  231
#define WAR_AMBIENCE2                  232
#define WAR_AMBIENCE3                  233
#define WAR_AMBIENCE4                  234
#define WAR_AMBIENCE5                  235
#define WAR_AMBIENCE6                  236
#define WAR_AMBIENCE7                  237
#define WAR_AMBIENCE8                  238
#define WAR_AMBIENCE9                  239
#define WAR_AMBIENCE10                 240
#define ALIEN_TALK1                    241
#define ALIEN_TALK2                    242
#define EXITMENUSOUND                  243
#define FLY_BY                         244
#define DUKE_SCREAM                    245
#define SHRINKER_HIT                   246
#define RATTY                          247
#define INTO_MENU                      248
#define BONUSMUSIC                     249
#define DUKE_BOOBY                     250
#define DUKE_TALKTOBOSSFALL            251
#define DUKE_LOOKINTOMIRROR            252
#define PIG_ROAM3                      253
#define KILLME                         254
#define DRON_JETSND                    255
#define SPACE_DOOR1                    256
#define SPACE_DOOR2                    257
#define SPACE_DOOR3                    258
#define SPACE_DOOR4                    259
#define SPACE_DOOR5                    260
#define ALIEN_ELEVATOR1                261
#define VAULT_DOOR                     262
#define JIBBED_ACTOR13                 263
#define DUKE_GETWEAPON6                264
#define JIBBED_ACTOR8                  265
#define JIBBED_ACTOR9                  266
#define JIBBED_ACTOR10                 267
#define JIBBED_ACTOR11                 268
#define JIBBED_ACTOR12                 269
#define DUKE_KILLED4                   270
#define DUKE_KILLED5                   271
#define ALIEN_SWITCH1                  272
#define DUKE_STEPONFECES               273
#define DUKE_LONGTERM_PAIN2            274
#define DUKE_LONGTERM_PAIN3            275
#define DUKE_LONGTERM_PAIN4            276
#define COMPANB2                       277
#define KTIT                           278
#define HELICOP_IDLE                   279
#define STEPNIT                        280
#define SPACE_AMBIENCE1                281
#define SPACE_AMBIENCE2                282
#define SLIM_HATCH                     283
#define RIPHEADNECK                    284
#define FOUNDJONES                     285
#define ALIEN_DOOR1                    286
#define ALIEN_DOOR2                    287
#define ENDSEQVOL3SND4                 288
#define ENDSEQVOL3SND5                 289
#define ENDSEQVOL3SND6                 290
#define ENDSEQVOL3SND7                 291
#define ENDSEQVOL3SND8                 292
#define ENDSEQVOL3SND9                 293
#define WHIPYOURASS                    294
#define ENDSEQVOL2SND1                 295
#define ENDSEQVOL2SND2                 296
#define ENDSEQVOL2SND3                 297
#define ENDSEQVOL2SND4                 298
#define ENDSEQVOL2SND5                 299
#define ENDSEQVOL2SND6                 300
#define ENDSEQVOL2SND7                 301
#define GENERIC_AMBIENCE23             302
#define SOMETHINGFROZE                 303
#define DUKE_LONGTERM_PAIN5            304
#define DUKE_LONGTERM_PAIN6            305
#define DUKE_LONGTERM_PAIN7            306
#define DUKE_LONGTERM_PAIN8            307
#define WIND_REPEAT                    308
#define MYENEMY_ROAM                   309
#define MYENEMY_HURT                   310
#define MYENEMY_DEAD                   311
#define MYENEMY_SHOOT                  312
#define STORE_MUSIC                    313
#define STORE_MUSIC_BROKE              314
#define ACTOR_GROWING                  315
#define NEWBEAST_ROAM                  316
#define NEWBEAST_RECOG                 317
#define NEWBEAST_ATTACK                318
#define NEWBEAST_PAIN                  319
#define NEWBEAST_DYING                 320
#define NEWBEAST_SPIT                  321
#define VOL4_1                         322
#define SUPERMARKET                    323
#define MOUSEANNOY                     324
#define BOOKEM                         325
#define SUPERMARKETCRY                 326
#define DESTRUCT                       327
#define EATFOOD                        328
#define MAKEMYDAY                      329
#define WITNESSSTAND                   330
#define VACATIONSPEECH                 331
#define YIPPEE1                        332
#define YOHOO1                         333
#define YOHOO2                         334
#define DOLPHINSND                     335
#define TOUGHGALSND1                   336
#define TOUGHGALSND2                   337
#define TOUGHGALSND3                   338
#define TOUGHGALSND4                   339
#define TANK_ROAM                      340
#define BOS4_ROAM                      341
#define BOS4_RECOG                     342
#define BOS4_ATTACK                    343
#define BOS4_PAIN                      344
#define BOS4_DYING                     345
#define NEWBEAST_ATTACKMISS            346
#define VOL4_2                         347
#define COOKINGDEEPFRIER               348
#define WHINING_DOG                    349
#define DEAD_DOG                       350
#define LIGHTNING_SLAP                 351
#define THUNDER                        352
#define HAPPYMOUSESND1                 353
#define HAPPYMOUSESND2                 354
#define HAPPYMOUSESND3                 355
#define HAPPYMOUSESND4                 356
#define ALARM                          357
#define RAIN                           358
#define DTAG_GREENRUN                  359
#define DTAG_BROWNRUN                  360
#define DTAG_GREENSCORE                361
#define DTAG_BROWNSCORE                362
#define INTRO4_1                       363
#define INTRO4_2                       364
#define INTRO4_3                       365
#define INTRO4_4                       366
#define INTRO4_5                       367
#define INTRO4_6                       368
#define SCREECH                        369
#define BOSS4_DEADSPEECH               370
#define BOSS4_FIRSTSEE                 371
#define PARTY_SPEECH                   372
#define POSTAL_SPEECH                  373
#define TGSPEECH                       374
#define DOGROOMSPEECH                  375
#define SMACKED                        376
#define MDEVSPEECH                     377
#define AREA51SPEECH                   378
#define JEEPSOUND                      379
#define BIGDOORSLAM                    380
#define BOS4_LAY                       381
#define WAVESOUND                      382
#define ILLBEBACK                      383
#define VOL4ENDSND1                    384
#define VOL4ENDSND2                    385
#define EXPANDERHIT                    386
#define SNAKESPEECH                    387
#define EXPANDERSHOOT                  388
#define GETBACKTOWORK                  389
#define JIBBED_ACTOR14                 390
#define JIBBED_ACTOR15                 391
#define INTRO4_B                       392
#define BIGBANG                        393
#define SMACKIT                        394
#define BELLSND                        395
// MAXIMUM NUMBER OF SOUNDS: 450 ( 0-449 )
