BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040210500_02_000");
MsgDisp("Sassa","Modern art..
I wish I could understand it...");
MsgSel("I want to decorate my room with a piece","It's a representation of the suffering of modern people","It's fine to not understand it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040210500_02_010");
    MsgDisp("Sassa","Your room must be quite big then.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040210500_02_020");
    MsgDisp("Sassa","You're just saying what's written.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040210500_02_030");
    MsgDisp("Sassa","I see, so if you understand it, it's dull
huh? Does that mean everyone who comes
here is part of the \"I don't get it\"
circle?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
