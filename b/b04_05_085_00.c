BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040508500_05_000");
MsgDisp("Hiiragi","It's hard to believe how
lively it was in summer and autumn.
Are you okay? Aren't you cold?");
MsgSel("There's two of us so I'll be alright!","A quiet winter is also nice...","Ah, fumes are coming out the spring");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040508500_05_010");
    MsgDisp("Hiiragi","That's right.
Then, shall we get closer?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B040508500_05_020");
    MsgDisp("Hiiragi","It was so colorful with the fireflies 
and the autumn leaves. But I also
like this atmosphere that looks 
like an ink painting.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040508500_05_030");
    MsgDisp("Hiiragi","The temperature of the spring water
is warm in comparison 
to the surroundings.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
