BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040103201_01_000");
MsgDisp("Kazama","Looks like there's a fountain, too.
That sparkling mist from it is nice.");
MsgSel("It would be nice if a rainbow appeared","I wonder if it's using water from the tanks","We should have brought a lunch");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040103201_01_010");
    MsgDisp("Kazama","That'd be nice too.
Alright, let's wait for it to happen!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040103201_01_020");
    MsgDisp("Kazama","∋
No, seriously, some just got in my mouth.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103201_01_030");
    MsgDisp("Kazama","That sounds nice. Next time let's have a
relaxing lunch here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
