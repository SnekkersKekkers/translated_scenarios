BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121100_01_000");
MsgDisp("Kazama","Looks like there are lots of weird
animals.");
MsgSel("Let's get a closer look!","Let's take a picture with the animals!","Is there anything you wanna see, ｛風真＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040121100_01_010");
    MsgDisp("Kazama","Oi oi, that's a fail video waiting to
happen.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    VoicePlay("B040121100_01_020");
    MsgDisp("Kazama","Apparently you can take pictures with baby
animals over there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040121100_01_030");
    MsgDisp("Kazama","Actually, I've never seen a more rare
animal than you.");
    MsgDispSksp(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
