BGOpen("tr220",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421302_04_000");
MsgDisp("Nanatsumori","Amazingー...
This might be the first time I've
been this popular with cats.");
MsgSel("They're really friendly, right?","You normally aren't popular, huh?","I might get jealous...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040421302_04_010");
    MsgDisp("Nanatsumori","Right.
...It would be nice if the cats in my 
neighborhood were this friendlyー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040421302_04_020");
    MsgDisp("Nanatsumori","The way you said that
....well, it's fine. The strays in
my neighborhood don't really let
me touch them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,1);
        VoicePlay("B040421302_04_030");
        MsgDisp("Nanatsumori","What are you saying?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040421302_04_040");
        MsgDisp("Nanatsumori","Hmm...
Okay, come, come.");
        MsgDisp("主人公","Eh∋");
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,#1);
        VoicePlay("B040421302_04_050");
        MsgDisp("Nanatsumori","Get close to me like 
these guys are. I'll dote on you.");
        MsgDisp("主人公","Hey, ｛七ツ森＊｝!");
        ChEye(4,5);
        ChMouth(4,1);
        ChMotion(4,5,1);
        SEPlay("EV_SE_555",0,0.8);
        VoicePlay("B040421302_46_000");
        MsgDisp("Cat","Nyaa!");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040421302_04_060");
        MsgDisp("Nanatsumori","Ahー...
It escaped.");
        MsgDisp("主人公","Ah, sorry.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoiceEVSPlay(4);
        VoicePlay("B040421302_04_070");
        MsgDisp("Nanatsumori","｛主人公｝.
Come hereー.");
        MsgDisp("主人公","You're still going with this....");
        ChEye(4,3);
        ChMouth(4,3);
        VoicePlay("B040421302_04_080");
        MsgDisp("Nanatsumori","Little miss jealous.
You can have me all to yourself now?");
        MsgDisp("主人公","Hey...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040421302_04_090");
        MsgDisp("Nanatsumori","You really are like a cat.
Cute.");
        MsgDisp("主人公","(Ugh... this is embarrassing...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
