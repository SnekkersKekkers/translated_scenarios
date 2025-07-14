BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoicePlay("B040308402_03_000");
MsgDisp("Honda","I think today's wind is a bit chilly.");
MsgSel("It's not cold in the slightest","I hope winter comes soon","I want to make a bonfire with the fallen leaves");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308402_03_010");
    MsgDisp("Honda","Are you strong against the cold too?
Me too, me too!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("B040308402_03_020");
        MsgDisp("Honda","Wait wait!
I haven't enjoyed autumn with you yet.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040308402_03_030");
        MsgDisp("Honda","You're anxiously waiting for winter huh?");
        MsgDisp("主人公","which season does ｛本多＊＊｝ like?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040308402_03_040");
        MsgDisp("Honda","This is when fireflies live, so summer is
nice. But I simply like the awakening of
insects around spring time, march.");
        MsgDisp("主人公","Awakening of insects?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040308402_03_050");
        MsgDisp("Honda","Yep yep, the awakening of insects is the
time when the hibernating insects crawl
out of the ground.");
        MsgDisp("主人公","Insects crawl out...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040308402_03_060");
        MsgDisp("Honda","Yep yep, I'll also wriggle with them～");
        MsgDisp("主人公","Hehe, ｛本多＊＊｝ is always moving around.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040308402_03_070");
        MsgDisp("Honda","That's right.
In order to go out with you, I'm active
all year round.");
        MsgDisp("主人公","Hehe, You said it as if you were some
animal or insect.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040308402_03_080");
        MsgDisp("Honda","Yeah... that might be true.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040308402_03_090");
        MsgDisp("Honda","A long time ago, I was always stuffed up
in the library, in my room doing
experiments, there was a period I didn't
ever go outside. At that time I felt just
like an insect.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040308402_03_100");
        MsgDisp("Honda","Because of that I'm an adult bug now!
I'm flying around the town with you?");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040308402_03_110");
        MsgDisp("Honda","But the insect lifespan is short, So they
have to lay eggs quickly...");
        MsgDisp("主人公","Eh?");
        ChEye(3,5);
        ChMouth(3,5);
        ChMotion(3,5);
        ChCheek(3,10);
        VoicePlay("B040308402_03_120");
        MsgDisp("Honda","AAhー!
What am I saying～∋");
        ChEye(3,1);
        ChMouth(3,1);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040308402_03_130");
        MsgDisp("Honda","Sorry, forget about just now∈");
        MsgDisp("主人公","(｛本多＊＊｝, what were you saying?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040308402_03_140");
    MsgDisp("Honda","They're nice huhー, burning autumn leaves.
I also love them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
