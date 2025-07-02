BGOpen("wf300",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030503002_05_000");
MsgDisp("Hiiragi","Where should we go today?");
MsgSel("Let's go in the aquarium","The water garden sounds good","Let's go to the deep sea corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030503002_05_010");
    MsgDisp("Hiiragi","That's right. I thought the same.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMotion(5,0,1);
    VoicePlay("B030503002_05_020");
    MsgDisp("Hiiragi","Yes,
it's nice weather today.");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChMotion(5,4);
    VoicePlay("B030503002_05_030");
    MsgDisp("Hiiragi","The words 'deep sea'
has a strange charm to it.
Yes, let's go there.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
