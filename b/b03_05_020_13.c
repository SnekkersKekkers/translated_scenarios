BGOpen("wf200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("How about walking along the brick road?","How about going to the wharf?","I want to go on the sightseeing boat");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    VoicePlay("B030502002_05_000");
    MsgDisp("Hiiragi","I like walking.
Even more so if it's the two of us.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    VoicePlay("B030502002_05_020");
    MsgDisp("Hiiragi","Sounds good. There's something 
that caught your eye, yes?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChClose(5,0,0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B030502002_05_010");
    MsgDisp("Hiiragi","Me too.
Let's hurry, it's departure time!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
