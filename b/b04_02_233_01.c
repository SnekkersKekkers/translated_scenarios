BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,0,0,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223301_02_000");
MsgDisp("Sassa","Is it fine to fly backwards?");
MsgSel("Why backwards...?","Seems super fun!","It's dangerous, so you definitely can't");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040223301_02_010");
    MsgDisp("Sassa","Eh, it seems interesting though...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040223301_02_020");
    MsgDisp("Sassa","That's right.
If it wasn't a rule violation, 
I would  try it.");
    MsgDispSksp(1,0);

    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223301_02_030");
    MsgDisp("Sassa","It is huh.
You always help me by stopping me
when I need it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
