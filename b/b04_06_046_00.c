BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so, huh?","Today's event was a miss.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040604600_06_000");
    MsgDisp("Himuro","Yeah, it cleansed my heart.
It was subtle and powerful...
It was splendid.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040604600_06_010");
    MsgDisp("Himuro","You're not very moved huh?
Maybe you've gotten used to hearing it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040604600_06_020");
    MsgDisp("Himuro","I didn't think someone who was nodding off
would want to give an evaluation.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
