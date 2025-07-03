BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611001_06_000");
MsgDisp("Himuro","You're getting too excited.
Is it really that much fun?");
MsgSel("Yeah, it's super fun!","It's because I'm with ｛氷室＊＊｝","Is ｛氷室＊＊｝ not having fun?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040611001_06_010");
    MsgDisp("Himuro","I'm glad then.
It makes it worthwhile for 
me to come here too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("B040611001_06_020");
    MsgDisp("Himuro","Ah, right.
But, if I was given the choice, 
the sea would be better.
Here... we're in closer proximity.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040611001_06_030");
    MsgDisp("Himuro","It's neither good or bad.
That's all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
