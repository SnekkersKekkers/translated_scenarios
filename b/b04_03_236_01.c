BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040323601_03_000");
MsgDisp("Honda","The possibilities with using full colour
LED is endless!");
MsgSel("The pink skull bear is cute","Is that fish person's whole body glowing?","Is that meat on the bone?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040323601_03_010");
    MsgDisp("Honda","I wonder if it's supposed to show a bear
having its eye on a salmon. Hmm? ...Maybe
a tuna?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040323601_03_020");
    MsgDisp("Honda","It's true!
It looks like they're using not only LEDs,
but also luminescent paint!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040323601_03_030");
    MsgDisp("Honda","Yeah, it's an unusual perspective on the
world. I can see the connection between
the bear and the fish, but the meat on the
bone? ...It's difficult.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
