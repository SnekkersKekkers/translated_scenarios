BGOpen("wf210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040202101_02_000");
MsgDisp("Sassa","The wind feels good......
When the weather is nice like this,
it makes me want to run.");
MsgSel("You really like to exercise, huh?","Won't you hurt your feet here?","Eh? I'll wait here then.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040202101_02_010");
    MsgDisp("Sassa","Yeah, I love exercise.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,4,1);
    VoicePlay("B040202101_02_020");
    MsgDisp("Sassa","I get what you mean.
The hardness of the bricks in those
shoes might injure your knees.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,2);
    VoicePlay("B040202101_02_030");
    MsgDisp("Sassa","It was just a joke, though......
You'd be lonely waiting.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
