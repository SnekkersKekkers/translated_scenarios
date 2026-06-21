BGOpen("tr500",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030624001_06_000");
MsgDisp("Himuro","Habataki really does have everything.");
MsgDisp("主人公","It's nice that we can enjoy such a
peaceful atmosphere.");
MsgSel("I wonder if there are animals?","Want to head to the campsite?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B030624001_06_010");
    MsgDisp("Himuro","There is.
There's a ranch here.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B030624001_06_020");
    MsgDisp("Himuro","Sounds good. I'm in.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
