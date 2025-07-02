BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay","Today's event was awful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040104300_01_000");
    MsgDisp("Kazama","It was awesome. It was nice to laugh to
our heart's content together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("B040104300_01_010");
    MsgDisp("Kazama","You think so?
I had a good time.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040104300_01_020");
    MsgDisp("Kazama","Seems like the problem might be
with the recipient - you.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
