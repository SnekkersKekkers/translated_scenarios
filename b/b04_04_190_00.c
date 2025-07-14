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
    ChMotion(4,0);
    VoicePlay("B040419000_04_000");
    MsgDisp("Nanatsumori","Well, I think the costumes and the
performance were amazing");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040419000_04_010");
    MsgDisp("Nanatsumori","Yeah. If I knew more about the history, I
might have enjoyed it a bit more.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040419000_04_020");
    MsgDisp("Nanatsumori","No no, even if it was difficult, there
were still a lot of noteworthy things
right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
