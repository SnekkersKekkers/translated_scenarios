BGOpen("tr500",0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030424001_04_000");
MsgDisp("Nanatsumori","Well then.
What should we do?");
MsgSel("I wonder if there are animals?","Want to head to the campground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B030424001_04_010");
    MsgDisp("Nanatsumori","It would just be a bunch of grassland
otherwise.
Well, let's go...");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B030424001_04_020");
    MsgDisp("Nanatsumori","To the campground, you got it.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
