BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,4,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040519000_05_000");
    MsgDisp("Hiiragi","Yes, the costumes, the props,
everywhere you looked it was perfect.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("B040519000_05_010");
    MsgDisp("Hiiragi","I agree that the second
half felt a bit rushed.
But even so, it was still great.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,1);
    VoicePlay("B040519000_05_020");
    MsgDisp("Hiiragi","A miss...
Then what would have 
been a hit for you?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
