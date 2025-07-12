BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040518600_05_000");
    MsgDisp("Hiiragi","The action was amazing. But, I can't
remember anything of the story.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    VoicePlay("B040518600_05_010");
    MsgDisp("Hiiragi","Yes, those were my exact impressions.
The sound was too loud.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518600_05_020");
    MsgDisp("Hiiragi","That's harsh.
I'm sure they must have spent
a lot of money on production.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
