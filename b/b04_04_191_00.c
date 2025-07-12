BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040419100_04_000");
    MsgDisp("Nanatsumori","I was so moved...
It made me realise the importance of life.
It was a great movie.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("B040419100_04_010");
    MsgDisp("Nanatsumori","I guess you thought 
it would be more moving.
Well, to each their own.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0);
    VoicePlay("B040419100_04_020");
    MsgDisp("Nanatsumori","...Are you enjoying life?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
