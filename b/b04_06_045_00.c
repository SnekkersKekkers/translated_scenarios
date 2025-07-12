BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so huh","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040604500_06_000");
    MsgDisp("Himuro","Yeah, I caught a glimpse of 
a different dimension.
I wonder how it feels to be 
a different person...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040604500_06_010");
    MsgDisp("Himuro","...You perceived it in a different way
huh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040604500_06_020");
    MsgDisp("Himuro","In what respect?
I want to have a thorough discussion.
If we do that, I'm sure we'll be able 
to understand each other better.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
