ChLayout(1);
MsgClose();
ChOpen(3,255,0,4,0,0,#1,0,0);
VoicePlay("B040302300_03_000");
MsgDisp("Honda","...The wind from the sea carries various
scents, doesn't it?");
MsgSel("It's a bit fishy, isn't it?","Don't fall into the sea, okay!","They're windsurfing.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040302300_03_010");
    MsgDisp("Honda","Exactly, the sea is the soup of life.
This is also the scent of living
creatures!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040302300_03_020");
    MsgDisp("Honda","I'm not falling in though?
Are you setting up a joke?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChSet(3,2,1);
    VoicePlay("B040302300_03_030");
    MsgDisp("Honda","True...
Why do water sports seem so challenging?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
