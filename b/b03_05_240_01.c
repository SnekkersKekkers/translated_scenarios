BGOpen("tr500",0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030524001_05_000");
MsgDisp("Hiiragi","Even though the city is nearby, the
atmosphere is completely different here.
Where should we go?");
MsgSel("Are there animals?","Want to visit the campsite?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("B030524001_05_010");
    MsgDisp("Hiiragi","They should be out here grazing.
Let's see who can spot one first.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,3);
    ChMotion(5,0,1);
    VoicePlay("B030524001_05_020");
    MsgDisp("Hiiragi","That's good.
Let's relax and enjoy the nature.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
