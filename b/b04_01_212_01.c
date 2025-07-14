BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121201_01_000");
MsgDisp("Kazama","Look, they even have a stationary set.");
MsgSel("The bear eraser is cute▼","The thoroughbred pencil case is cool▼","Even the cockatiel clip is interesting▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040121201_01_010");
    MsgDisp("Kazama","Apparently it's the most popular.
It's definitely got a face you can't hate.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040121201_01_020");
    MsgDisp("Kazama","Is that so?
I think that horse's eyes look a bit crazy
though.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,4);
    VoicePlay("B040121201_01_030");
    MsgDisp("Kazama","I get what you mean by interesting.
It seems kinda noisy though.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
