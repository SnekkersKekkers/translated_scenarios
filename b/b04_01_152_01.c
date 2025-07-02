BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,7);
ScrFadeIn(0);
ChEye(1,3);
ChMotion(1,3);
VoicePlay("B040115201_01_000");
MsgDisp("Kazama","Oh, nice.
You've set a new personal record.");
MsgSel("Yay, maybe I should buy my own darts?","Hehe, it's because my coach is excellent.","Yeah, I get the feeling I won't get a single miss.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040115201_01_010");
    MsgDisp("Kazama","Alright, you're getting
too carried away.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115201_01_020");
    MsgDisp("Kazama","Good attitude.
Then, coach also can't lose.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115201_01_030");
    MsgDisp("Kazama","...Geez.
Just where does that confidence
come from?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
