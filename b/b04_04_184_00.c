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
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040418400_04_000");
    MsgDisp("Nanatsumori","Right! The world of colorful sea slugs is
amazing. I'm going to buy merch.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418400_04_010");
    MsgDisp("Nanatsumori","Really? The sea slugs were the lead
actors, it was so amazing that I couldn't
take my eyes off them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("B040418400_04_020");
    MsgDisp("Nanatsumori","Seas slugs are that much of a no-go for
girls huh...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
