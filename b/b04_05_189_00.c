BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,4,-1,-1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040518900_05_000");
    MsgDisp("Hiiragi","You felt it too, didn't you?
That surge of emotion welling up 
from deep inside.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040518900_05_010");
    MsgDisp("Hiiragi","Your body was moving too, wasn't it?
Or was that just my imagination?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    VoicePlay("B040518900_05_020");
    MsgDisp("Hiiragi","I see, I'm sorry.
I guess I was the only one 
really enjoying it");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
