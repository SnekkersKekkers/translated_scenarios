BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040204600_02_000");
    MsgDisp("Sassa","I guess I can understand how it
was good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040204600_02_010");
    MsgDisp("Sassa","It's difficult for me to rate
classical music.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040204600_02_020");
    MsgDisp("Sassa","A Hanegaki alumni is performing. So that
kind of rating is rude.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
