BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,3);
ChMotion(5,2);
VoicePlay("B040503300_05_000");
MsgDisp("Hiiragi","It's amazing isn't it.
This deep sea production...
it's really well done.");
MsgSel("There are creatures living in the sunken ship!","The music also makes it like we're in the sea","It's dark at our feet, so be careful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B040503300_05_010");
    MsgDisp("Hiiragi","There really is.
It's as if we're in the deep sea.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040503300_05_020");
    MsgDisp("Hiiragi","The effects of background music ...I
didn't realize.
That's important too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040503300_05_030");
    MsgDisp("Hiiragi","I apologize for not paying attention.
That should've been my responsibility...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
