BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040118900_01_000");
    MsgDisp("Kazama","Yeah, I wanna practice 
that neck movement now.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040118900_01_010");
    MsgDisp("Kazama","No, something like today's movie
is either a hit or a miss.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118900_01_020");
    MsgDisp("Kazama","Yeah, I think the sound and afterimages 
are gonna haunt me for a while...");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
