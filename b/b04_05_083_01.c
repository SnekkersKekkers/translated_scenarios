BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("B040508301_05_000");
MsgDisp("Hiiragi","When it turns night time, it becomes a
world of fireflies.");
MsgSel("Are they having a break right now?","I want to see it together▼","Look at me instead of the fireflies!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040508301_05_010");
    MsgDisp("Hiiragi","Hehe.
There's no sign of them, so maybe they're
away from home?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040508301_05_020");
    MsgDisp("Hiiragi","That's fine?
Are you ready?
For your inner voice?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    VoicePlay("B040508301_05_030");
    MsgDisp("Hiiragi","I am looking?
There's no fireflies flying about?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
