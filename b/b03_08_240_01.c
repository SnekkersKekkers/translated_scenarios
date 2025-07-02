BGOpen("tr500",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
MsgSel("I wonder if there are animals?","Want to head to the camp ground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("B030824001_08_000");
    MsgDisp("Shirahane","It's a farm, so there's gotta be sheep
and cows around.
Let's go!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B030824001_08_010");
    MsgDisp("Shirahane","Heheh, I've always wanted to camp!
Let's go!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
