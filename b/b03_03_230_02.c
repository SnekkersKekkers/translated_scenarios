MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B030323002_03_000");
MsgDisp("Honda","Look!
Seems like they're having a night parade.");
MsgSel("Yeah, I want to watch","Sorry, not today…");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B030323002_03_010");
    MsgDisp("Honda","Right on.
Let's get a good look at all the
full colors of LED lights.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B030323002_03_020");
    MsgDisp("Honda","I see.
Well, maybe next time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
