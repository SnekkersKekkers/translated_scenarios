EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(2,33,4,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040206501_02_000");
MsgDisp("Sassa","The big fireworks are nice but the themed
ones are also fun.");
MsgSel("Yeah, like the Niagara Falls one!","I prefer the big ones.","Sparklers are the most beautiful in their fragility.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040206501_02_010");
    MsgDisp("Sassa","Ah, I liked that one too.
It's both skillful and powerful.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206501_02_020");
    MsgDisp("Sassa","That's fine.
I guess you just like big things.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040206501_02_030");
    MsgDisp("Sassa","Sparkles at a fireworks festival......
That's a bit too surreal.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
