BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040119000_01_000");
    MsgDisp("Kazama","Right! The attention to detail for 
the props and costumes were amazing.
Apparently they went all around 
the world to film it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040119000_01_010");
    MsgDisp("Kazama","There's no way that's true!
You rarely get to see such 
a big production.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,4);
    VoicePlay("B040119000_01_020");
    MsgDisp("Kazama","A m-miss?
If this movie was a miss, 
then what would a hit be...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
