BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040320001_03_000");
MsgDisp("Honda","Look closely.
The snowflakes remain unmelted");
MsgSel("They're a beautiful shape...","They melt as soon as you put them on your hand","Let's start skiing already!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040320001_03_010");
    MsgDisp("Honda","Yep yep.
The snowflakes are basically a hexagon
shape.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040320001_03_020");
    MsgDisp("Honda","That's right.
But hey, the ones on your hair haven't
melted?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,4);
    VoicePlay("B040320001_03_030");
    MsgDisp("Honda","Eh, ah, that's right...
Though it was a beautiful crystal.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
