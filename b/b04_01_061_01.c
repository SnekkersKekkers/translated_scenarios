BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106101_01_000");
MsgDisp("Kazama","You know, visiting in other seasons is
like visiting a completely different
world.");
MsgSel("Everyone's so happy and excited","It's the only time to enjoy swimming in the ocean","Yeah, the sea sparkles in the summer");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106101_01_010");
    MsgDisp("Kazama","You be careful not to get too excited
yourself.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106101_01_020");
    MsgDisp("Kazama","And I'm saved by that.
I wouldn't be able to stand it if it was
all year-round.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106101_01_030");
    MsgDisp("Kazama","Yeah, that's for sure.
That moment when the waves break, that's a
shine that's only found in summer.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
