BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
BGOpen("fp610",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,5);
ChMotion(8,0);
ChEyeOpenLevel(8,10);
ScrFadeIn(0);
ChMotion(8,1,1);
VoicePlay("B040811101_08_000");
MsgDisp("Shirahane","Uh-oh!
Damn, I got caught on the ice.");
MsgSel("Are you alright?","You have an amazing sense of balance!","Even monkeys fall from trees, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040811101_08_010");
    MsgDisp("Shirahane","I'm completely fine!
Come on, let's keep skatin'!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChCheek(8,5);
    VoicePlay("B040811101_08_020");
    MsgDisp("Shirahane","Hehe, I wonder about that?
I love skatin'.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040811101_08_030");
    MsgDisp("Shirahane","Like how I'll also fall on ice?
...No, no, that's not a good
thing at all!");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
