BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay..","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3,1);
    VoicePlay("B040304300_03_000");
    MsgDisp("Honda","Yup, it was good!
I knew you'd understand.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040304300_03_010");
    MsgDisp("Honda","Eh, really? I laughed so hard my stomach 
hurt.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChSet(3,0);
    VoicePlay("B040304300_03_020");
    MsgDisp("Honda","Is that so? Everyone has their own tastes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
