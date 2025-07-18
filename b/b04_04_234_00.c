BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,2,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040423400_04_000");
MsgDisp("Nanatsumori","In one word.
This is like a fairytale.");
MsgSel("I'm merry like a kid!","You could feel the centrifugal force, huh?","The world...it's spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423400_04_010");
    MsgDisp("Nanatsumori","I had fun watching you be like that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040423400_04_020");
    MsgDisp("Nanatsumori","You were spinning the wheel too much. this
is far from a fairytale.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040423400_04_030");
    MsgDisp("Nanatsumori","If you turn it that much, that's what you
get.
You got what you deserve.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
