EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(3,33,1,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040306501_03_000");
MsgDisp("Honda","Did you see that just now?
Huh, is that a new addition this year?");
MsgSel("Eh? Did I miss it?","It was there last year too?","Are you talking about yukata?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,3);
    VoicePlay("B040306501_03_010");
    MsgDisp("Honda","Ehー? What for?
I wanted you to see itー.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040306501_03_020");
    MsgDisp("Honda","Eh!
Do you have an eidetic memory?
Ahー, now I want to know more about yoU!");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040306501_03_030");
    MsgDisp("Honda","No I'm not? I'm talking about fireworks.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
