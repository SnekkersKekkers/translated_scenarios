BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030515000_05_000");
MsgDisp("Hiiragi","Bowling or Darts......
Which one?");
MsgSel("Let's go Bowling","I like darts");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChMouth(5,2);
    ChMotion(5,3);
    VoicePlay("B030515000_05_010");
    MsgDisp("Hiiragi","Everything is worth trying. Understood.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B030515000_05_020");
    MsgDisp("Hiiragi","A match is a match, no matter what.
Are you prepared?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
