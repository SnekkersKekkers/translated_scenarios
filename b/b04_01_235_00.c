BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123500_01_000");
MsgDisp("Kazama","When I think of haunted houses,
this it. It has to be purely
Japanese style.");
MsgSel("It's scary but it's fun.","I thought my legs were gonna give out...","The tricks were too mild, no good, no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040123500_01_010");
    MsgDisp("Kazama","Looks that way.
I understood that quite well.");
    MsgDispSksp(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,-1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040123500_01_020");
    MsgDisp("Kazama","Oi, are you alright?
You're banned for haunted houses
from now on.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123500_01_030");
    MsgDisp("Kazama","The one who's the problem is you.
Listen, this only works if both
parties play along.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
