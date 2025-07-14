BGOpen("wf400",1);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040404300_04_000");
    MsgDisp("Nanatsumori","Rakugo feels like a refined art form.
The stories have punch lines, it makes you
feel refreshed.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040404300_04_010");
    MsgDisp("Nanatsumori","Are you a person who's picky about Rakugo?
Damn... are you good at stories? If so,
let me hear it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,1);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040404300_04_020");
    MsgDisp("Nanatsumori","Well, everyone has their likes and
dislikes. But, you're an unfortunate
person to not have enjoyed a single
thing...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
