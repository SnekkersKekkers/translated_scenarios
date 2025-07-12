MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030123002_01_000");
MsgDisp("Kazama","What do you think of going to the Night
Parade?");
MsgSel("I'd love to watch","Sorry, not today…");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030123002_01_010");
    MsgDisp("Kazama","Right.
Let's find a good spot to watch from.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030123002_01_020");
    MsgDisp("Kazama","Okay. Being out too late isn't safe. Let's
head back.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
