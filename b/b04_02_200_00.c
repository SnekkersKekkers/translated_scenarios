BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040220000_02_000");
MsgDisp("Sassa","Can you ski?");
MsgSel("I've been dubbed a princess on the snow!","It's to the point I won't fall...","Can you teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040220000_02_010");
        MsgDisp("Sassa","That's good.
Alright, let's go all the way to the top!");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0,1);
        VoicePlay("B040220000_02_020");
        MsgDisp("Sassa","That's no good.
If you don't push yourself, you won't get
better.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040220000_02_030");
    MsgDisp("Sassa","If you can do that much, just a bit more.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040220000_02_040");
    MsgDisp("Sassa","Is that so.
First of all, let's learn how to fall
without injury.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
