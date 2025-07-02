BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay","Today's event was awful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040204300_02_000");
    MsgDisp("Sassa","Seriously?
I wasn't sure if I was supposed to
laugh.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040204300_02_010");
    MsgDisp("Sassa","Just okay, huh......
To be honest, I didn't understand it
well enough to give a rating.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040204300_02_020");
    MsgDisp("Sassa","That's a relief.
I guess I'm not the only one who
didn't find it funny.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
