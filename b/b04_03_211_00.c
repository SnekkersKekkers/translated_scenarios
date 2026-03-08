BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321100_03_000");
MsgDisp("Honda","Hey, over here, over here!
We're wasting time!");
MsgSel("Let's take a closer look!","Let's take a picture with the animals!","｛Honda＊＊｝, do you have anywhere you wanna see?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040321100_03_010");
    MsgDisp("Honda","Yep yep.
I somewhat even want to go inside the
cage.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0);
    VoicePlay("B040321100_03_020");
    MsgDisp("Honda","Okay.
Ah, let's take a video too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040321100_03_030");
    MsgDisp("Honda","Eh?
There's nothing here I don't want to see.
Same for you, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
