BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040204100_02_000");
    MsgDisp("Sassa","Like I expected from the champion!
The difference between him and the other
person was huge∈");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040204100_02_010");
    MsgDisp("Sassa","Eh?
It was a pretty good match.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040204100_02_020");
    MsgDisp("Sassa","If this one was bad, none of the rest will
suffice either.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
