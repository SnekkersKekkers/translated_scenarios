BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040501000_05_000");
MsgDisp("Hiiragi","Ah, what do you think of this one?
I think it suits you perfectly.");
MsgSel("Really, I might buy it!","Is that so...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B040501000_05_010");
    MsgDisp("Hiiragi","It suits you very well.
And more than anything,
that smile looks great on you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040501000_05_020");
    MsgDisp("Hiiragi","Was it a miss?
Women's garments are tricky.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040501000_05_030");
    MsgDisp("Hiiragi","Was it a huge miss? I wonder what's so
different to your usual look...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
