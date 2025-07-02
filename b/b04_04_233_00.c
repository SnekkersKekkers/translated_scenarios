BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(-1);
ChOpen(4,255,0,2,1,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423300_04_000");
MsgDisp("Nanatsumori","Crap...
This is dangerous.");
MsgSel("I could get used to this thrill!","Hey, that's enough...","That was a very interesting experience....");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040423300_04_010");
    MsgDisp("Nanatsumori","That's impossible to understand.
what's so addictive about it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423300_04_020");
    MsgDisp("Nanatsumori","Hey.
But now you've got a nice hairdo.
What style surpasses Visual Kei?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,7);
    VoicePlay("B040423300_04_030");
    MsgDisp("Nanatsumori","I don't remember anything...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
