BGOpen("wf200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("How about walking along the brick road?","I want to go on the sightseeing boat");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030502001_05_000");
    MsgDisp("Hiiragi","Agreed.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    VoicePlay("B030502001_05_010");
    MsgDisp("Hiiragi","Yes, I wanted to go too.
It's time to set off.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
