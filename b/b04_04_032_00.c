BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040403200_04_000");
MsgDisp("Nanatsumori","Excitingー.
It looks nice no matter 
what I take a picture of.");
MsgSel("Aren't you aiming for too much?","Yeah, it's pretty!","It kinda makes my heart race");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040403200_04_010");
    MsgDisp("Nanatsumori","What are you babbling about?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040403200_04_020");
    MsgDisp("Nanatsumori","You look happy. I guess when you see or
experience something nice, you end up
making that kind of face.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040403200_04_030");
    MsgDisp("Nanatsumori","What's so odd about it?
Tell me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
