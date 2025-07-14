BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,10);
ScrFadeIn(0);
ChEye(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B040122201_01_000");
MsgDisp("Kazama","I feel like I stand taller
when I come here.");
MsgSel("The atmosphere is different from outside the castle","This is where your ancestors lived after all, ｛風真＊＊｝.","Yeah, my voice gets all quiet too...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040122201_01_010");
    MsgDisp("Kazama","Yeah, that's right. Especially since this 
is the castle  tower. There are very 
few castles in the whole country with 
their castle tower still standing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040122201_01_020");
    MsgDisp("Kazama","That's right.
I have to introduce my ancestors 
to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040122201_01_030");
    MsgDisp("Kazama","Why is that?
Isn't it quite normal to be here?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
