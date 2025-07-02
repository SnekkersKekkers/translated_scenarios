BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040221200_02_000");
MsgDisp("Sassa","This zoo has a lot of original goods huh?");
MsgSel("Should I buy a keychain?","There's animal cookies!","A t-shirt might be nice...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    ChCheek(2,10);
    VoicePlay("B040221200_02_010");
    MsgDisp("Sassa","Shall we buy the same one?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040221200_02_020");
    MsgDisp("Sassa","Hm?
Those are used to feed
the animals though.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040221200_02_030");
    MsgDisp("Sassa","A close-up of a leopard...
I kind of want to see you wearing it,
but I don't want to see it either.");
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
