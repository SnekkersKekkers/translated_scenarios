BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521300_05_000");
MsgDisp("Hiiragi","Cats and dogs get along don't they?");
MsgSel("They have an image that they're on bad terms, right?","The puppies and kitties here get along.","Assumptions are bad.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040521300_05_010");
    MsgDisp("Hiiragi","That's right.
But in reality, look, 
everyone gets along");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040521300_05_020");
    MsgDisp("Hiiragi","I see, 
this place is an exception.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040521300_05_030");
    MsgDisp("Hiiragi","Assuming huh...
that doggy policeman was 
definitely kind to the kitty.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
