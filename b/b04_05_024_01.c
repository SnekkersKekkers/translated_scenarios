SEPlay("EV_SE_518");
SEWait();
MsgClose();
ChOpen(5,255,2,2,2,#1,#1,0,0);
VoicePlay("B040502401_05_000");
MsgDisp("Hiiragi","This is the sound of you and me...
How should I interpret this?");
MsgSel("There's an ominous feeling...","Two people who shouldn't meet","Scratch over that! Again!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,1);
    VoicePlay("B040502401_05_010");
    MsgDisp("Hiiragi","Haa...
Let's take care of each other.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040502401_05_020");
    MsgDisp("Hiiragi","That's not true.
We were destined to meet.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040502401_05_030");
    MsgDisp("Hiiragi","Agreed.
That's the spirit.
Let's line up again.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
