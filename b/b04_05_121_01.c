MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040512101_05_000");
MsgDisp("Hiiragi","There are people who are not only lining
up their second hand clothes, but their
own work to sell.");
MsgSel("What store would you set up ｛柊＊＊＊｝?","Is there food being sold too?","There's handmade accessories!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040512101_05_010");
    MsgDisp("Hiiragi","What I'd like to try my hand at is... a
yakisoba stand.
I wonder if it would be impossible for me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040512101_05_020");
    MsgDisp("Hiiragi","Heheheh, you noticed right away.
That is the sharp aroma of sauce.
It's yakisoba isn't it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040512101_05_030");
    MsgDisp("Hiiragi","It looks popular.
Shall we take a look?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
