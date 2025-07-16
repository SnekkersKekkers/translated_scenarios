BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040205100_02_000");
MsgDisp("Sassa","The dim lights and ambiance......");
MsgSel("The starry sky was romantic","｛颯砂＊＊｝, did you fall asleep?","The seats were soft for sleeping......");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040205100_02_010");
    MsgDisp("Sassa","Really? I couldn't relax. It felt like
something could be hidden in the dark.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040205100_02_020");
    MsgDisp("Sassa","Eh?
You must have heard someone else.
I can't sleep when it's this dark.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040205100_02_030");
    MsgDisp("Sassa","Hahaha.
That snoring really was you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
