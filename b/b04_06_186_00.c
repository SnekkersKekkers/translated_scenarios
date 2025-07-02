BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040618600_06_000");
    MsgDisp("Himuro","Aren't you being fooled by
the flashy production.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040618600_06_010");
    MsgDisp("Himuro","The only thing that was disappointing 
was the fact you could predict what
was going to happen next. Other
than that, it was good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040618600_06_020");
    MsgDisp("Himuro","If you were hoping for a story, 
then I guess that would be true.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
