BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,4,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0,1);
    VoicePlay("B040518200_05_000");
    MsgDisp("Hiiragi","Your startled reaction was the best.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040518200_05_010");
    MsgDisp("Hiiragi","It's nice even when you're 
trying to put on a brave front.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518200_05_020");
    MsgDisp("Hiiragi","It was no good huh... I thought it was an
interesting perspective.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
