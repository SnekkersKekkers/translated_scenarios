BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040619200_06_000");
    MsgDisp("Himuro","Like most people, you have a weakness for
living things? That's good. I'm glad to
see that reaction.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040619200_06_010");
    MsgDisp("Himuro","Weren't you taken in by that cuteness?
You're surprisingly calm.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040619200_06_020");
    MsgDisp("Himuro","Aren't you lacking sensitivity?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
