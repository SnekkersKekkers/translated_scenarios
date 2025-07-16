BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,4);
    ChMotion(4,2,1);
    VoicePlay("B040418700_04_000");
    MsgDisp("Nanatsumori","Hmm.
I got tired of thinking about it halfway
through.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418700_04_010");
    MsgDisp("Nanatsumori","Yeah. It wasn't bad, but I can't openly
say it was great. It was a bit
unsatisfying.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040418700_04_020");
    MsgDisp("Nanatsumori","Then, I guess we made a mistake with our
movie choice.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
