BGOpen("wf221",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502200_05_000");
MsgDisp("Hiiragi","What a magnificent ship.
I'm looking forward to the sea voyage.");
MsgSel("The ocean is truly amazing......","It would be nice to travel around the world this way.","Look, the seagulls are so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040502200_05_010");
    MsgDisp("Hiiragi","Agreed. There's no other way to put it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,2);
    VoicePlay("B040502200_05_020");
    MsgDisp("Hiiragi","Yes, traveling on a whim and going where
the wind takes you...... I'm envious of
the people who can do that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,2);
    VoicePlay("B040502200_05_030");
    MsgDisp("Hiiragi","You're only used to seeing people, huh?
Here, come this way.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
