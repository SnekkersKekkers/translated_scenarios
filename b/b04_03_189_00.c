BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040318900_03_000");
    MsgDisp("Honda","My body started moving naturally,
isn't that amazing? I'd like to 
watch other Indian movies too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040318900_03_010");
    MsgDisp("Honda","Both the dancing and singing, 
it was fresh for me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040318900_03_020");
    MsgDisp("Honda","There's no such thing as a miss?
Even if you don't understand it, you know,
it's interesting in itself, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
