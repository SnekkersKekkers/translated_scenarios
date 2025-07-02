BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040501101_05_000");
MsgDisp("Hiiragi","Photo service...
So they take photos for you.");
MsgSel("We came all this way, so should we take some?","I'd like a photo with me and ｛柊＊＊＊｝!","It's pretty high...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040501101_05_010");
    MsgDisp("Hiiragi","Yes, a commemoration of today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040501101_05_020");
    MsgDisp("Hiiragi","I don't think you can opt 
to take them separately?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040501101_05_030");
    MsgDisp("Hiiragi","Are you referring both to 
the height and the price?
Hahaha, you're a funny person.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
