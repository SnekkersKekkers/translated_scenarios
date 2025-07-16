BGOpen("wf210",0);
ChSet(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040402100_04_000");
MsgDisp("Nanatsumori","Ahー...
I wonder if this is what they call peace.");
MsgSel("It's nice to be able to take a leisurely walk.","Is that a jellyfish over there?","There's no one here, it looks like we have it to ourselves...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChSet(4,0);
    ChMotion(4,1);
    VoicePlay("B040402100_04_010");
    MsgDisp("Nanatsumori","Right.
That's good if you're having fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,5);
    ChMouth(4,3);
    ChMotion(4,3);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040402100_04_020");
    MsgDisp("Nanatsumori","Eh, you can see that from here?
Your eyes sure are good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B040402100_04_030");
    MsgDisp("Nanatsumori","Aah.... If you think about it, there's no
need to get so worked up. Having it to
ourselves is awesome.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
