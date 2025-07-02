BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,3);
VoicePlay("B040510500_05_000");
MsgDisp("Hiiragi","Say, what can you perceive?
I feel like contemporary art tests you");
MsgSel("Seems difficult...","Isn't it fine to just enjoy it?","What do I do if I feel nothing?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040510500_05_010");
    MsgDisp("Hiiragi","Sorry, 
I was pressuring you weirdly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040510500_05_020");
    MsgDisp("Hiiragi","Indeed.
Your stance is the correct way 
to go about it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040510500_05_030");
    MsgDisp("Hiiragi","Actually, I'm the same.
If both of us feel nothing, let's just
act as if I never asked.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
