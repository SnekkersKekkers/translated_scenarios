BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,4,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523401_05_000");
MsgDisp("Hiiragi","That teapot was spinning too.");
MsgSel("As expected of ｛柊＊＊＊｝, you have a good eye!","I wish I could ride in the pot too","Maybe there's piping hot black tea in it");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523401_05_010");
    MsgDisp("Hiiragi","Yes, you were spinning 
the cup daringly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,2);
    VoicePlay("B040523401_05_020");
    MsgDisp("Hiiragi","It looks like it's spinning irregularly...
It's a bit interesting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523401_05_030");
    MsgDisp("Hiiragi","If it spills that 
would be a catastrophe?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
