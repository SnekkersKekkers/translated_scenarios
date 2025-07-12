BGOpen("wf400",1);
ChOpen(5,253,0,0,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's event was the best!","Today's event was so-so huh?","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B040504600_05_000");
    MsgDisp("Hiiragi","That's right.
I'm proud to think that he's our senior.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040504600_05_010");
    MsgDisp("Hiiragi","Is that so?
I thought it was a most impressive
musical performance however.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,4);
    VoicePlay("B040504600_05_020");
    MsgDisp("Hiiragi","Even the best performance
can't satisfy everyone...
I've learned something new.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
