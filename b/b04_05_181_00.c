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
    VoicePlay("B040518100_05_000");
    MsgDisp("Hiiragi","Is that so, 
I fell behind in my studies...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040518100_05_010");
    MsgDisp("Hiiragi","It was so-so, yes?
It was also so-so for me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518100_05_020");
    MsgDisp("Hiiragi","Haa, that's good.
I thought I was the only one.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
