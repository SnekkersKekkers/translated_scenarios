BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040318500_03_000");
    MsgDisp("Honda","If you enjoyed it, that's good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChMouth(3,4);
    ChMouth(3,4);
    MsgDispSksp(0);
    VoicePlay("B040318500_03_010");
    MsgDisp("Honda","Yeah, it seems like they didn't 
make the best use of the 
original work huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMotion(3,2);
    ChEye(3,1);
    ChMouth(3,4);
    VoicePlay("B040318500_03_020");
    MsgDisp("Honda","Ahー, was it that bad?
Filming was definitely difficult though.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
