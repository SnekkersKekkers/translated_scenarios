BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("B040521200_05_000");
MsgDisp("Hiiragi","They have a full range of original goods.
They have strong business acumen.
I must learn from their example.");
MsgSel("They have animal cookies!","They have a bunny ears headband","Eagle eye sunglasses?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040521200_05_010");
    MsgDisp("Hiiragi","There's English written on the back.
Huh, aren't these the popular kind?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040521200_05_020");
    MsgDisp("Hiiragi","If you wore them, it would be cute.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040521200_05_030");
    MsgDisp("Hiiragi","Polarized light lenses that look like
eagle eyes...
I'd like to try them.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
