BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B040518500_05_000");
    MsgDisp("Hiiragi","It wasn't a love story,
but it was a very interesting 
documentary of a man's life.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518500_05_010");
    MsgDisp("Hiiragi","I haven't read the original work.
But, it has piqued my interest.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040518500_05_020");
    MsgDisp("Hiiragi","I do not think it is that bad.
But maybe the original 
left a strong impression..");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
