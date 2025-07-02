BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,4);
VoicePlay("B040103300_01_000");
MsgDisp("Kazama","Apparently they don't have bones...
That's how they can be so buoyant.");
MsgSel("It's full of collagen!","Maybe it's easy to eat▼","There's a fish with a funny face!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("B040103300_01_010");
    MsgDisp("Kazama","Ooh, I heard they use that in cosmetics.
Do you use it too?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040103300_01_020");
    MsgDisp("Kazama","Go ahead, eat up.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103300_01_030");
    MsgDisp("Kazama","Sure is.
It looks like a grumpy old man!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
