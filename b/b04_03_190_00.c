BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040319000_03_000");
    MsgDisp("Honda","Yep yep. They skillfully connected the 
various theories and explanations 
and made it into entertainment.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040319000_03_010");
    MsgDisp("Honda","Same same, I completely feel the same.
I like history but, that kind of 
unthinkable explanation is troubling.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B040319000_03_020");
    MsgDisp("Honda","Uwaah, harsh!
You're that blunt about it huhー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
