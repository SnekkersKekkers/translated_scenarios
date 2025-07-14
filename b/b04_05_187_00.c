BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,4,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040518700_05_000");
    MsgDisp("Hiiragi","Yeah, the story unfolded quickly and I was
naturally drawn in.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040518700_05_010");
    MsgDisp("Hiiragi","Yeah, I feel the same.
The setting for the culprit was a bit sly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,0,1);
    VoicePlay("B040518700_05_020");
    MsgDisp("Hiiragi","Is that so?
I thought it was a well-constructed story.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
