BGOpen("tr210",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421102_04_000");
MsgDisp("Nanatsumori","They say you can feed the animals.");
MsgSel("I have to try it!","I'm not interested.","I want to take a picture of them eating!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040421102_04_010");
    MsgDisp("Nanatsumori","ＯＫ! Be careful when you're feeding the
camels, okay? There's a chance they'll
spit at you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040421102_04_020");
        MsgDisp("Nanatsumori","Not interested, huh...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040421102_04_030");
        MsgDisp("Nanatsumori","Ah, I see...");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040421102_04_040");
        MsgDisp("Nanatsumori","Could it be that you're not really
interested in animals?");
        MsgDisp("主人公","That's not it but...
did you want to feed them.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040421102_04_050");
        MsgDisp("Nanatsumori","Well, I did butー");
        MsgDisp("主人公","Then, let's do it.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040421102_04_060");
        MsgDisp("Nanatsumori","It's fine.
You do't have to force yourself.");
        MsgDisp("主人公","But...");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040421102_04_070");
        MsgDisp("Nanatsumori","You still feel bad about it?");
        MsgDisp("主人公","I mean...");
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("B040421102_04_080");
        MsgDisp("Nanatsumori","...That's it.
I came up with a good idea.");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040421102_04_090");
        MsgDisp("Nanatsumori","Do you want to eat soft serve?");
        MsgDisp("主人公","Ah, I do.");
        ChMotion(4,0,1);
        VoicePlay("B040421102_04_100");
        MsgDisp("Nanatsumori","It'll be my treat.");
        MsgDisp("主人公","Eh, is that okay?");
        ChEye(4,0);
        ChMouth(4,3);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040421102_04_110");
        MsgDisp("Nanatsumori","It is.
Then, it'll be me feeding you.");
        MsgDisp("主人公","Ehh∋");
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,3);
        VoicePlay("B040421102_04_120");
        MsgDisp("Nanatsumori","Haha!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040421102_04_130");
    MsgDisp("Nanatsumori","Then, should I take a picture of you
feeding them?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
