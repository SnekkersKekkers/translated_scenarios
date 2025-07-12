BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040618500_06_000");
    MsgDisp("Himuro","Is it something to get that excited about?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040618500_06_010");
    MsgDisp("Himuro","It was a good story though...
it made me think about a lot of
different things. But I 
agree with you. ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040618500_06_020");
    MsgDisp("Himuro","...Hmm?
It didn't resonate with you huh?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
