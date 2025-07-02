EnvAutoSet(0);
BGOpen("wf710",2);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
ChLayout(1);
MsgClose();
ChOpen(1,33,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040106501_01_000");
MsgDisp("Kazama","The sky gets lit up as bright as daytime
for a bit.");
MsgSel("I can clearly see your face","It's so surprising when it's suddenly lit up like that","Even the sea is sparkling");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,5);
    VoicePlay("B040106501_01_010");
    MsgDisp("Kazama","Yeah, and I can see yours.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    ChCheek(1,0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040106501_01_020");
    MsgDisp("Kazama","Is there something bad about it?");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106501_01_030");
    MsgDisp("Kazama","Yeah, both the sea and the sky are
beautiful.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
