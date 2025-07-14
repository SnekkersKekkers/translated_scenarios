BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,1,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423102_04_000");
MsgDisp("Nanatsumori","Crap... Since I stopped worrying about my
hair, I noticed how scary this is.");
MsgSel("Shall I hold your hand?","It's especially scary at the front!","How pathetic～");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        VoicePlay("B040423102_04_010");
        MsgDisp("Nanatsumori","No thank you.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040423102_04_020");
        MsgDisp("Nanatsumori","Eh.");
        MsgDisp("主人公","Maybe it'll make you
feel a bit better.");
        ChEye(4,2);
        ChMouth(4,4);
        VoicePlay("B040423102_04_030");
        MsgDisp("Nanatsumori","No. I mean, isn't it supposed to be the
other way around?");
        MsgDisp("主人公","The other way around?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040423102_04_040");
        MsgDisp("Nanatsumori","I mean, that's what guys do when a girl is
scared.");
        MsgDisp("主人公","Haha, then isn't it fine for
｛七ツ森＊｝ to be the one holding my
hand?");
        ChEye(4,4);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040423102_04_050");
        MsgDisp("Nanatsumori","Ah...
Ahh, I see.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,3,1);
        VoicePlay("B040423102_04_060");
        MsgDisp("Nanatsumori","...Alright. Then, let's ride on it again.
Let's line up.");
        MsgDisp("主人公","Is that alright?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040423102_04_070");
        MsgDisp("Nanatsumori","Everything is under control.
But——");
        MsgClose();
        SEPlay("EV_SE_544",0,0.7);
        ChClose(4,0,30);
        SEPlay("EV_SE_504",0,0.7,0.4);
        MsgClose();
        ChLayout(0);
        ChNanaType(#1);
        ChOpen(4,255,0,0,3,#1,#1,0,0,0,60);
        VoicePlay("B040423102_04_080");
        MsgDisp("Nanatsumori","I'll hold your hand starting now.");
        MsgDisp("主人公","(This is making my heart race...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423102_04_090");
    MsgDisp("Nanatsumori","Right! It's like all the things in front
of me are flying in all at once.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040423102_04_100");
    MsgDisp("Nanatsumori","...I know that.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
