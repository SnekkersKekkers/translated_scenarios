BGOpen("tr300",0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B030122000_01_000");
MsgDisp("Kazama","At least to me, this is like visiting a
grave.");
MsgDisp("主人公","Hehe, we'll have to greet our ancestors
then.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("B030122000_01_010");
MsgDisp("Kazama","Well, what route should we take?");
MsgSel("I want to see Habataki Tower","Let's go to the Exhibition Corner.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B030122000_01_020");
    MsgDisp("Kazama","The stairs are steep, so be careful.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Yeah, thank you.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030122000_01_030");
    MsgDisp("Kazama","You got it.
I wonder if the exhibit has changed any.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","I'm looking forward to hearing you talk
about it.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
