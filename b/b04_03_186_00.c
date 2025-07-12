BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040318600_03_000");
    MsgDisp("Honda","Really? That's good.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040318600_03_010");
    MsgDisp("Honda","That's right, I was more interested in the
boundary between actual stunts and the
composites than the story itself.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040318600_03_020");
    MsgDisp("Honda","Right right, same here.
The trailers hyped it up too muchー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
