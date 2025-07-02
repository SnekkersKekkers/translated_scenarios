BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040304100_03_000");
    MsgDisp("Honda","Really? I don't get it, but if you're 
satisfied, that's great.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,5);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B040304100_03_010");
    MsgDisp("Honda","Eh, if that was just so-so... there's
gotta be even more amazing matches∋");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B040304100_03_020");
    MsgDisp("Honda","Oh, really? If you'd enjoyed it, I
would've been relieved.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
