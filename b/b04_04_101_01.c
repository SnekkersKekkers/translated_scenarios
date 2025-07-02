BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040410101_04_000");
MsgDisp("Nanatsumori","Retro goods are popular, but 
this is still too retro.");
MsgSel("These are not goods, these are cultural assets!","Maybe they'll become in fashion again?","It's not good just because it's old.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,4,1);
    VoicePlay("B040410101_04_010");
    MsgDisp("Nanatsumori","You're being too loud.
Think about where we are.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(4,2,1);
    VoicePlay("B040410101_04_020");
    MsgDisp("Nanatsumori","Is that something that
happens every 100 years?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040410101_04_030");
    MsgDisp("Nanatsumori","Right.
These items were used to be studied
before they became retro items.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
