BGOpen("wf300",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030503001_05_000");
MsgDisp("Hiiragi","There's also an outdoor water garden.
Which one should we go to?");
MsgSel("Let's go in the aquarium.","The water garden sounds good");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B030503001_05_010");
    MsgDisp("Hiiragi","Agreed.
I wonder what we'll be able to see today.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030503001_05_020");
    MsgDisp("Hiiragi","Sure, if you want to see it.
Let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
