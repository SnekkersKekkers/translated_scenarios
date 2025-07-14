BGOpen("tr200",0);
MsgDispSksp(1,0);
ChSet(3,0,1);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Let's go to the Wan Nyan House","Don't ask.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B030321002_03_000");
    MsgDisp("Honda","I see.
Alrighty, let's get over there and get it
done!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B030321002_03_010");
    MsgDisp("Honda","Okay. I'll tell you which ones are my
favorite.");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030321002_03_020");
    MsgDisp("Honda","Well then, which ones are we visiting
today?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
