BGOpen("bh110",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B040130001_01_000");
MsgDisp("Kazama","That's right.
I made some cookies yesterday, do you want
some?");
MsgSel("Yeah, let's have a teatime!","It's troubling that ｛風真＊＊｝ can do anything...","Then, I'll make some tea.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040130001_01_010");
    MsgDisp("Kazama","Alright, alright.
Do you want some black tea?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040130001_01_020");
    MsgDisp("Kazama","If you say that, 
I'll be troubled too.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040130001_01_030");
    MsgDisp("Kazama","O-Oh.
Can you say that again?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
