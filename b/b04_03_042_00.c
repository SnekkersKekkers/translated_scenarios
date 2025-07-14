BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay..","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3,1);
    VoicePlay("B040304200_03_000");
    MsgDisp("Honda","Yup!! That bear riding the tricycle - it
looked like a person was inside right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040304200_03_010");
    MsgDisp("Honda","Hmm, yeah there were a few mistakes, like
in juggling.
But how about cutting them some slack?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,2);
    ChMotion(3,3);
    VoicePlay("B040304200_03_020");
    MsgDisp("Honda","Really? My palms were dripping in sweat,
though.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
