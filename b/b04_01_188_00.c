BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118800_01_000");
    MsgDisp("Kazama","Yeah, well you laughed a lot.
That was more interesting to me than the
movie.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040118800_01_010");
    MsgDisp("Kazama","You laughed that much, then said it was
\"so-so\"...
Your evaluation criteria is a mystery.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040118800_01_020");
    MsgDisp("Kazama","For sure.
After all, your face was dead-pan half way
through.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
