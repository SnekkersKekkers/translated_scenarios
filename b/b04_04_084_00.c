BGOpen("fp200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040408400_04_000");
MsgDisp("Nanatsumori","The trees are changing color.");
MsgSel("It's a peaceful season.","It'll look super photogenic!","Let's take it easy and enjoy the view.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    VoicePlay("B040408400_04_010");
    MsgDisp("Nanatsumori","Well, compared to summer that is.
It is quite calming.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040408400_04_020");
    MsgDisp("Nanatsumori","Really?
Which part is photogenic?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("B040408400_04_030");
    MsgDisp("Nanatsumori","Yeah? There's nothing else to do, So I'll
just take it easy and pass the time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
