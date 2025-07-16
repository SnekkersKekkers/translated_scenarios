BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,3,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223100_02_000");
MsgDisp("Sassa","I have to ride this too!");
MsgSel("Awesome! I want to ride it more","Uugh, that was scary...","I wish it was a bit more thrilling...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040223100_02_010");
    MsgDisp("Sassa","Good.
Then, let's go again.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040223100_02_020");
    MsgDisp("Sassa","Sorry, did I make you push yourself?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040223100_02_030");
    MsgDisp("Sassa","That's good.
Next time, let's go with a cheer!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
