BGOpen("ne340",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040317001_03_000");
MsgDisp("Honda","Ooh, they have rental costumes.");
MsgSel("Skull Bear costume.","A GORO-sensei style outfit.","I'm not really into cosplay...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("B040317001_03_010");
    MsgDisp("Honda","Eh, I can't sing in that...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040317001_03_020");
    MsgDisp("Honda","That one? But it looks like the stomach
area will get cold.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040317001_03_030");
    MsgDisp("Honda","We've gotta try everything! Come on, let's
do it together!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
