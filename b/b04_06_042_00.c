BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so huh","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040604200_06_000");
    MsgDisp("Himuro","Well, the technology was wonderful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040604200_06_010");
    MsgDisp("Himuro","Well, it wasn't a bad way to 
spend the time. It's alright
if it's once in a while.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040604200_06_020");
    MsgDisp("Himuro","Ah, right.
That's unfortunate.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
