BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so huh","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040604300_06_000");
    MsgDisp("Himuro","You like that kind of thing?
I see.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040604300_06_010");
    MsgDisp("Himuro","Maybe it's because we both 
didn't prepare for it enough.
Should we try studying a 
little for the next one?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040604300_06_020");
    MsgDisp("Himuro","Do you even know enough about 
Rakugo to say that it was a miss?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
