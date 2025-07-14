BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040508300_05_000");
MsgDisp("Hiiragi","After this, 
let's go to the gazebo too.");
MsgSel("It's like it's standing in the middle of the spring.","Apparently you can hear people's inner voice in there","It seems refreshing there.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040508300_05_010");
    MsgDisp("Hiiragi","That's the power spot, isn't it?
Let's get some of the spring's power.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040508300_05_020");
    MsgDisp("Hiiragi","That's at night time isn't it?
So, it's alright and you can still have
peace of mind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B040508300_05_030");
    MsgDisp("Hiiragi","Let's cool off for a bit.
I'm afraid I might not be able to get out
of there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
