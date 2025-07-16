BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,2,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723301_07_000");
MsgDisp("Mikage","Do you like this attraction?");
MsgSel("Yes, I love it!","No, I'm not good with it...","That's what I'm trying to find out.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040723301_07_010");
    MsgDisp("Mikage","That's not it.
You didn't look like you loved it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040723301_07_020");
    MsgDisp("Mikage","there's no point in both of us suffering,
right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040723301_07_030");
    MsgDisp("Mikage","Don't pull your Miss Diligent side out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
