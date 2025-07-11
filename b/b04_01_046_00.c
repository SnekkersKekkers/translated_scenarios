BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040104600_01_000");
    MsgDisp("Kazama","He's a well known pianist in Europe.
Unless you're a Haba High alumni, you
wouldn't be able to listen this close
here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040104600_01_010");
    MsgDisp("Kazama","The performance was okay.
You, on the other hand, are amazing.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040104600_01_020");
    MsgDisp("Kazama","Ugh, you...
If you don't understand it, you don't have
to force a review on it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
