BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so, huh?","Today's event was a miss.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040604100_06_000");
    MsgDisp("Himuro","Seems so.
I enjoyed seeing you get so excited.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040604100_06_010");
    MsgDisp("Himuro","I agree that it wasn't bad. It's
unfortunate, but it lacked excitement. I
have hopes for the next one.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040604100_06_020");
    MsgDisp("Himuro","After all that fuss?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
