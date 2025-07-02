BGOpen("wf400",1);
ChOpen(7,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040704300_07_000");
MsgDisp("Mikage","The brief story before the 
main one is called a \"pillow\".");
MsgSel("It was kinda hard to understand","That was what hooked me!","That was more interesting than the punch line.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040704300_07_010");
    MsgDisp("Mikage","The pillow is supposed to make it
easier to understand though?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040704300_07_020");
    MsgDisp("Mikage","Right, right?
The venue was suddenly filled
with a fun feeling.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040704300_07_030");
    MsgDisp("Mikage","I see, if you enjoyed it that's
the most important thing.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
