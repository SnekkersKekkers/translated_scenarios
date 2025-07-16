BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(2,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040218100_02_000");
    MsgDisp("Sassa","I spontaneously got excited whilst
watching.
Shall we run home?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0,1);
    VoicePlay("B040218100_02_010");
    MsgDisp("Sassa","Yeah, that's right.
It's different to a real matchー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040218100_02_020");
    MsgDisp("Sassa","Yeah?
The athlete's point of view was quite
realistic.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
