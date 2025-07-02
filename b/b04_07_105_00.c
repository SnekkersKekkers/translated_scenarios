BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
ScrFadeIn(0);
VoicePlay("B040710500_07_000");
MsgDisp("Mikage","I brought you here, but 
it's a bit difficult for me!");
MsgSel("Don't think about it, feel it!","It's over for you as soon as you give up...","Same here!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("B040710500_07_010");
    MsgDisp("Mikage","Crap.
There's a modern art dragon.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040710500_07_020");
    MsgDisp("Mikage","Right.
I'll take on the challenge with you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040710500_07_030");
    MsgDisp("Mikage","Right.
That won't work.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
