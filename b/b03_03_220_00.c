BGOpen("tr300",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B030322000_03_000");
MsgDisp("Honda","It's easy to defend, and difficult to
attack.
Habataki Castle is a pretty famous castle.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("B030322000_03_010");
MsgDisp("Honda","This time we're on the attack.
What area will we capture first?");
MsgSel("I want to see Habataki Tower","Let's go to the Exhibition Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030322000_03_020");
    MsgDisp("Honda","For sure!
Let's attack the main building in one go!");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B030322000_03_030");
    MsgDisp("Honda","You got it.
Every time I visit here, there's new
historical documents added");
    MsgDisp("主人公","New historical documents...?");
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030322000_03_040");
    MsgDisp("Honda","Yeppers.
After I've done some research on it, I'll
report back and explain it to you.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
