MsgClose();
EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
ChNanaType(-1);
ChOpen(4,33,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040406501_04_000");
MsgDisp("Nanatsumori","Hmm.
It's just like an illusion 
of light and sound!");
MsgSel("I have to do my best to take pictures!","It's like a dream...","This will become a wonderful memory▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040406501_04_010");
    MsgDisp("Nanatsumori","You don't have to try so hard.
For now, let's just watch the fireworks?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040406501_04_020");
    MsgDisp("Nanatsumori","Ah...
It'll be a pity to wake up.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040406501_04_030");
    MsgDisp("Nanatsumori","Yeah. I think I'll remember today for next
year, the year after, and for a long time
to come.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
