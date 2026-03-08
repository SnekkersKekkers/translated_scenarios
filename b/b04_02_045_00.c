BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040204500_02_000");
    MsgDisp("Sassa","Yeah, there was an intense scene in the
middle. I almost teared up.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040204500_02_010");
    MsgDisp("Sassa","Yeah, it's impressive they can memorize
all those long lines.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040204500_02_020");
    MsgDisp("Sassa","The plot was good.
At the very least, it wasn't a complete
disaster.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
