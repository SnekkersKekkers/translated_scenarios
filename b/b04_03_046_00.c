BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay..","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040304600_03_000");
    MsgDisp("Honda","Yup! I bought \"Seiji Shitara, Genius
Pianist Quotes\" at the merchandise stand.
I'm looking forward to reading it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040304600_03_010");
    MsgDisp("Honda","Really?
The brilliance of the performance somehow
got through to me too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,1);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B040304600_03_020");
    MsgDisp("Honda","...Shh.
Shitara-san's fans are looking this way.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
