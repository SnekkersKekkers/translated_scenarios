BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,2,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223401_02_000");
MsgDisp("Sassa","Kids are amazing.
They laugh even when being spun at that
speed.");
MsgSel("They were a bit noisy","I feel somewhat frustrated...","Maybe they're good at spinning?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223401_02_010");
    MsgDisp("Sassa","Don't have fun when you're at an amusement
park?
That's an unreasonable ask.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223401_02_020");
    MsgDisp("Sassa","There's no need to be competitive there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,3);
    VoicePlay("B040223401_02_030");
    MsgDisp("Sassa","That's true...I've experienced it for
myself. There's a lot of spinning play
equipment for children.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
