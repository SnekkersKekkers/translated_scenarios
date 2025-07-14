MsgClose();
ChOpen(3,255,0,0,3,#1,#1,0,0);
ChLayout(1);
VoicePlay("B040302301_03_000");
MsgDisp("Honda","Hey look. Tetrapods. I really like them
y'know. That shape.");
MsgSel("They look cute like sugar candy.","Tetrapods...?","There are loads of crabs here.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040302301_03_010");
    MsgDisp("Honda","Yup, if they were more colourful, they
might look just like sugar candy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040302301_03_020");
    MsgDisp("Honda","Yeah. There are various types, but this
four-pronged one is probably the most
common.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040302301_03_030");
    MsgDisp("Honda","Yup. They not only protect the harbour
from the strength of the waves, but also
serve as habitats for living creatures.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
