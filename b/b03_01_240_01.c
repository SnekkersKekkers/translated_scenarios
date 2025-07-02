BGOpen("tr500",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B030124000_01_000");
MsgDisp("Kazama","'Leave the city behind and get in touch
with nature', huh...
That's a common catchphrase.");
MsgDisp("主人公","Like, 'forget your everyday life and
become one with nature'!");
ChEye(1,0);
ChMouth(1,0);
MsgSel("I wonder if there are animals?","Want to head to the campground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B030124000_01_010");
    MsgDisp("Kazama","It would be troublesome if there weren't.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030124000_01_020");
    MsgDisp("Kazama","Yep.
That's the correct choice.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
