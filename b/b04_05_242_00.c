BGOpen("tr520",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524200_05_000");
MsgDisp("Hiiragi","We have many different tools.
Alright, let's start preparing.");
MsgSel("I'll be relying on you, ｛柊＊＊＊｝♪","Camping means ＢＢＱ!","It seems like a lot of trouble...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040524200_05_010");
    MsgDisp("Hiiragi","Yes, I'll do all the odd jobs.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040524200_05_020");
    MsgDisp("Hiiragi","I'll leave the cooking to you.
I'm counting on you♪");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040524200_05_030");
    MsgDisp("Hiiragi","Yes.
It's outdoors work after all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
