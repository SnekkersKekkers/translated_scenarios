BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040403201_04_000");
MsgDisp("Nanatsumori","Seems like a lot of the time, these
garden-like places have heart-shaped
things installed into them.");
MsgSel("Seems fun! Shall we look for it?","Hmmm...","It's perfect for the mood");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040403201_04_010");
    MsgDisp("Nanatsumori","ＯＫ!
If you find it, tell me in secret.
Let's keep it to ourselves.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040403201_04_020");
    MsgDisp("Nanatsumori","Uwah, you're pretty indifferent.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040403201_04_030");
    MsgDisp("Nanatsumori","To enjoy the situation and the game at the
same time.
You come up with some pretty clever stuff.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
