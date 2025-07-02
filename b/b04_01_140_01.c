BGOpen("ne210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040114001_01_000");
MsgDisp("Kazama","Listen up. Don't get separated from me.
There might be some dodgy guys here.");
MsgSel("It's so packed, we can't get separated","You're worrying too much","It's because today's show was a punk band");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,4);
    VoicePlay("B040114001_01_010");
    MsgDisp("Kazama","I see. Then that's fine.
At any rate, stick close to me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040114001_01_020");
    MsgDisp("Kazama","That's not the case at all.
How can you say that?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040114001_01_030");
    MsgDisp("Kazama","That's dangerous...
If anyone tries to dive off the stage
at you, I'll definitely stop them, 
so don't worry");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
