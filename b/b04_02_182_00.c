BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(2,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0,1);
    VoicePlay("B040218200_02_000");
    MsgDisp("Sassa","You like that sort of thing?
Well, that's fine.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040218200_02_010");
    MsgDisp("Sassa","Sorry. I wasn't watching it properly
enough to talk about it.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040218200_02_020");
    MsgDisp("Sassa","I feel the same.
If you had said earlier, I would've left
right away.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
