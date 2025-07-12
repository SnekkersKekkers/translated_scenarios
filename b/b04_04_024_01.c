SEPlay("EV_SE_518");
SEWait();
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,5,0,#1,#1,0,0);
ChEye(4,5);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B040402401_04_000");
MsgDisp("Nanatsumori","What was that just now∋");
MsgSel("Is it okay to laugh here?","Art...?","Crap∈");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040402401_04_010");
    MsgDisp("Nanatsumori","No, it's probably not okay.
Right now, I feel like laughing
as hard as I can.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040402401_04_020");
    MsgDisp("Nanatsumori","I see...
Art sure is hard.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040402401_04_030");
    MsgDisp("Nanatsumori","Hey! What was the intention 
behind making this?
Crap... this might become a habit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
