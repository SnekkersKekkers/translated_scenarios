BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521301_05_000");
MsgDisp("Hiiragi","There's a little garden outside too.");
MsgSel("It's a dog park!","The doggies are playing there","I want to play with the doggies and kitties?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040521301_05_010");
    MsgDisp("Hiiragi","Heeh....
Then, what about the cats?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040521301_05_020");
    MsgDisp("Hiiragi","They're happily skipping about.
Shall we go outside for a bit?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040521301_05_030");
    MsgDisp("Hiiragi","That's good.
I think I'll go for the two round
white ones at the back.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
