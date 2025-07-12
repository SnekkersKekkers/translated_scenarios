MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B030523002_05_000");
MsgDisp("Hiiragi","Ah, it's about time for the Night
Parade to start.
Did you want to watch it?");
MsgSel("Yeah, I want to","Sorry, today is a bit……");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030523002_05_010");
    MsgDisp("Hiiragi","Good. Me too.
Let's watch it from the best spot.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    ChEyeOpenLevel(5,8);
    VoicePlay("B030523002_05_020");
    MsgDisp("Hiiragi","I see......That's unfortunate.
It's a bit backwards, but it can't be
helped.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
