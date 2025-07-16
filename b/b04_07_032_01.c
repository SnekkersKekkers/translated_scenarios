BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040703201_07_000");
MsgDisp("Mikage","Then, choose your own theme and walk
around and look freely.");
MsgSel("My... theme...","｛御影＊＊｝, aren't you having fun?","There's a cafe over there, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,4);
    ChMouth(7,3);
    ChMotion(7,3,1);
    VoicePlay("B040703201_07_010");
    MsgDisp("Mikage","Oii, that's not it.
I meant the theme of the class field trip.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,1,1);
    VoicePlay("B040703201_07_020");
    MsgDisp("Mikage","Yeah, I've been found out.
You're kinda strict～");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2,1);
    ChEyeOpenLevel(7,8);
    VoicePlay("B040703201_07_030");
    MsgDisp("Mikage","Yeah, is there?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
