BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(2,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("B040218800_02_000");
    MsgDisp("Sassa","That surprise after the end credits
totally got me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040218800_02_010");
    MsgDisp("Sassa","Is that so?
I was satisfied.
It was hard to not laugh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040218800_02_020");
    MsgDisp("Sassa","Ehh?
I think I'll be laughing at this for a
while though...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
