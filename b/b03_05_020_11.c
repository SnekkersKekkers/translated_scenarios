BGOpen("wf200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","Want to visit the wharf?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030502001_05_000");
    MsgDisp("Hiiragi","Sounds good.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    VoicePlay("B030502002_05_020");
    MsgDisp("Hiiragi","Sure. Is something on your mind?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
