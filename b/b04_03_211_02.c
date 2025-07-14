BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321102_03_000");
MsgDisp("Honda","Looks like they're doing a night zoo.");
MsgSel("Seems somewhat fun!","Is it dangerous?","I wonder if you'll even be able to see properly");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321102_03_010");
    MsgDisp("Honda","That's right.
Animals look so much cooler at night!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040321102_03_020");
    MsgDisp("Honda","The animals can see you perfectly, but we
can't see them perfectly...
It might be dangerous?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040321102_03_030");
        MsgDisp("Honda","It might be hard to see, but that's part
of the fun.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040321102_03_040");
        MsgDisp("Honda","They also lend you a night scope.");
        MsgDisp("主人公","Seems interesting.");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040321102_03_050");
        MsgDisp("Honda","Right? You'll be surrounded by the
countless glowing eyes of animals, and
feel like you've become the prey～?");
        MsgDisp("主人公","Hehe. ｛本多＊＊｝ seems like he's enjoying
it.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040321102_03_060");
        MsgDisp("Honda","Yep yep, I like those glowing eyes. It's
the work of a reflector plate behind the
retina. I also want those eyes.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040321102_03_070");
        MsgDisp("Honda","...Come to think of it, Your eyes sparkle
too.
Let me see them for a bit.");
        MsgDisp("主人公","eh?");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(3,0,30);
        ChLayout(0);
        ChOpen(3,255,0,0,0,#1,#1,0,0,0,30);
        SEWait();
        VoicePlay("B040321102_03_080");
        MsgDisp("Honda","Perhaps, you have a glowing plate in your
eye too...");
        MsgDisp("主人公","｛本多＊＊｝, are you alright?");
        ChEye(3,5);
        ChMouth(3,4);
        VoicePlay("B040321102_03_090");
        MsgDisp("Honda","Eh?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        SEPlay("EV_SE_544");
        ChLayout(1);
        VoicePlay("B040321102_03_100");
        MsgDisp("Honda","Super interesting, as I thought!
I want to know more and more about you!");
        MsgDisp("主人公","(I'm a bit embarrassed...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
