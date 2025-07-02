BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040105100_01_000");
MsgDisp("Kazama","You were totally into it, weren't you?");
MsgSel("The starry sky is romantic","｛風真＊＊｝, did you fall asleep?","The seats are soft for sleeping…");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040105100_01_010");
    MsgDisp("Kazama","Hooh, you like it too, huh.
Well, maybe that's normal.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040105100_01_020");
    MsgDisp("Kazama","I was awake. You were the one sleeping.
Don't make me into an accomplice.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040105100_01_030");
    MsgDisp("Kazama","Right?
You were out within 3 seconds.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
