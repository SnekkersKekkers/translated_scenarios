MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B030723002_07_000");
MsgDisp("Mikage","There's a night parade later.
Wanna take a quick look at it?");
MsgSel("Yeah, I wanna see","Sorry, it's not a good time…");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B030723002_07_010");
    MsgDisp("Mikage","Alright, then let's go.
Hurry now.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B030723002_07_020");
    MsgDisp("Mikage","I see.
Alright, then let's hurry home.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
