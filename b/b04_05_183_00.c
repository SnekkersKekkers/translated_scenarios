BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040518300_05_000");
    MsgDisp("Hiiragi","Hーm...
I wonder if I should move seats.
I can't concentrate at all.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518300_05_010");
    MsgDisp("Hiiragi","I see.
If it gets a passing grade out of you, 
I guess it was worth coming.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040518300_05_020");
    MsgDisp("Hiiragi","That is harsh.
Well, I feel the same though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
