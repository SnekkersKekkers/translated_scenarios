BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
SEPlay("EV_SE_567");
Wait(70,0);
VoicePlay("B040703202_07_000");
MsgDisp("Mikage","Oi, oi, don't get too excited.");
SEStop("EV_SE_567",1);
MsgSel("Yes, I'll be careful!","｛御影＊＊｝'s voice is so loud","You hear that, boys～!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    ChEyeOpenLevel(7,0);
    VoicePlay("B040703202_07_010");
    MsgDisp("Mikage","\"I hope you guys understand that you are
representing the school\", that sorta
thing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040703202_07_020");
        MsgDisp("Mikage","That's my bad～");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,5);
        VoicePlay("B040703202_07_030");
        MsgDisp("Mikage","Hahaha, my bad, my bad.
But you know, your voice is pretty loud
too.");
        MsgDisp("主人公","Ehhh∈");
        VoicePlay("B040703202_42_000");
        MsgDisp("Male Student","Aren't you two being way louder than the
rest of us?");
        SEPlay("EV_SE_GAYA_016",0.01,0.5);
        Wait(100,0);
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,4);
        VoicePlay("B040703202_07_040");
        MsgDisp("Mikage","It kinda seems like we're the loudest ones
here...?");
        SEStop("EV_SE_GAYA_016",1);
        MsgDisp("主人公","(Waah...
I feel a bit embarrassed.)");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("B040703202_07_050");
        MsgDisp("Mikage","Got it.
We'll be careful, so you guys should be
quiet too.");
        SEPlay("EV_SE_GAYA_023");
        Wait(70,0);
        MsgDisp("主人公","(When he says, \"we\",
｛御影＊＊｝ means me and
him, right? I feel kind of weird...)");
        SEStop("EV_SE_GAYA_023",1);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040703202_07_060");
    MsgDisp("Mikage","That, that!
I wanted to hear a girl say, \"Boys～\" once
in my life!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
