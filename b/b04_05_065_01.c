EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
MsgClose();
ChOpen(5,33,4,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506501_05_000");
MsgDisp("Hiiragi","It reverberates in my stomach.
It has an amazing strength.");
MsgSel("It's amazing how the fireworks shoot up right overhead!","Shall we eat some yakisoba?","Waa, my juice spilt!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040506501_05_010");
    MsgDisp("Hiiragi","I'm glad.
If you say that it's amazing, 
then I am satisfied.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040506501_05_020");
    MsgDisp("Hiiragi","Yeah.
My interest was also picqued by 
the aromas of the sauces.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040506501_05_030");
    MsgDisp("Hiiragi","Are you alright? 
Use this to wipe it right away.
You went to the trouble of 
dressing up so nicely too.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
