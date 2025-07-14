BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040503201_05_000");
MsgDisp("Hiiragi","Looks like you can feed them.
Would you like to try?");
MsgSel("If ｛柊＊＊＊｝ is interested","The pelicans are cool!","Their beaks are super sharp...!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,9);
    VoicePlay("B040503201_05_010");
    MsgDisp("Hiiragi","Huh?
Are you not interested?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040503201_05_020");
    MsgDisp("Hiiragi","Yeah, I really wanted to touch that flappy
part of its throat.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040503201_05_030");
    MsgDisp("Hiiragi","It really is.
Thank you.
...That was a close call.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
