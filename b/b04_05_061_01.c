BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040506101_05_000");
MsgDisp("Hiiragi","Swimming in the ocean is amazing.
The fact it makes people smile this much.");
MsgSel("｛柊＊＊＊｝ should smile too!","Let's tan with everything we've got!","Let's swim with all our might!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMouth(5,2);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040506101_05_010");
    MsgDisp("Hiiragi","Despite what it looks like, I am smiling?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040506101_05_020");
    MsgDisp("Hiiragi","For work related reasons, I cannot tan.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040506101_05_030");
    MsgDisp("Hiiragi","Sounds good, yes.
But it seems different to the pool.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
