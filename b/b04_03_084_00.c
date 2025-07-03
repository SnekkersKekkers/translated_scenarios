BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040308400_03_000");
MsgDisp("Honda","I wonder if the firefly
larvae are doing well?");
MsgSel("Larvae are a bit...","We completely can't see them huh","Do you want to try catching them?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040308400_03_010");
    MsgDisp("Honda","Is that so? On a closer look, they flash
their lights slowly and are really cute.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040308400_03_020");
    MsgDisp("Honda","It's because the larvae are in the water.
Right about now, they're 
heartily enjoying their meal.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308400_03_030");
    MsgDisp("Honda","Alright, I'll catch some to observe.
But, raising them is troublesome, 
so I have to release them right away.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
