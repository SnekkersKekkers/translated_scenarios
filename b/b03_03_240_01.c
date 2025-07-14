BGOpen("tr500",0);
ChEye(3,3);
ChMouth(3,0);
ChMotion(3,5);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoicePlay("B030324001_03_000");
MsgDisp("Honda","... Ahh. The air is rich with oxygen and
the smell of animals. Farms are the best!");
MsgSel("I wonder if there are animals?","Want to head to the campground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B030324001_03_010");
    MsgDisp("Honda","There's tons of different kinds!
Let's go and see what we can find!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030324001_03_020");
    MsgDisp("Honda","Yeppers, good idea.
Imagine that we're surviving on a deserted
island!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
