BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123201_01_000");
MsgDisp("Kazama","Isn't it crazy going 
down from the top?");
MsgSel("That might be the scariest part...","The wind was so strong it started shaking!","A screw fell off");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123201_01_010");
    MsgDisp("Kazama","Right. All I could see in 
front of me was the sky.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123201_01_020");
    MsgDisp("Kazama","Right, the draught was awfu.l");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040123201_01_030");
    MsgDisp("Kazama","That has nothing to do with the peak...
It's more to do with the production.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
