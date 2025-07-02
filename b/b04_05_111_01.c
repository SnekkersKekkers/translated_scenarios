BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,2);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
ChMouth(5,4);
VoicePlay("B040511101_05_000");
MsgDisp("Hiiragi","Well, it seems like
I can somewhat stand.");
MsgSel("Your outer figure is like an athlete's.","Be careful not to get hurt.","Shall I give you a push?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMotion(5,2);
    VoicePlay("B040511101_05_010");
    MsgDisp("Hiiragi","With that, it means more people will be
watching me... Haa, I can't fall even
more...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040511101_05_020");
    MsgDisp("Hiiragi","Thank you.
That's right. I can't take a 
break from the stage or school.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040511101_05_030");
    MsgDisp("Hiiragi","Eh? Why is that?
I don't understand your intentions...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
