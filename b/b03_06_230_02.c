MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030623002_06_000");
MsgDisp("Himuro","There will be a night parade soon.
Want to watch?");
MsgSel("Yeah, I want to.","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B030623002_06_010");
    MsgDisp("Himuro","Let's find a place with less people then.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,0);
    VoicePlay("B030623002_06_020");
    MsgDisp("Himuro","...I see.
Let's go home, then.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
