ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,3,#1,#1,0,0);
VoicePlay("B040302302_03_000");
MsgDisp("Honda","Everyone is enjoying themselves in their
own way, reading, running...");
MsgSel("...and dating too.","｛本多＊＊｝, do you want to read too?","Let's go for a run!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("B040302302_03_010");
    MsgDisp("Honda","I guess we're on a date, huh...
A date?
What's the definition of a date, I wonder?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("B040302302_03_020");
    MsgDisp("Honda","Reading while looking at the sea together
with you...
That sounds wonderful!");
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
        ChMouth(3,2);
        ChMotion(3,1,1);
        VoicePlay("B040302302_03_030");
        MsgDisp("Honda","I'm not doing that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChSet(3,0,1);
        VoicePlay("B040302302_03_040");
        MsgDisp("Honda","If you want to try it, should we do it?");
        MsgDisp("主人公","Right now?");
        ChEye(3,3);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040302302_03_050");
        MsgDisp("Honda","You gotta do it when you feel like doing
it.
Well, let's get started.");
        SEPlay("EV_SE_FOOT_005",0,0.9);
        ChClose(3);
        SEWait();
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        ChOpen(3,255,4,0,0,#1,#1,0,0);
        VoicePlay("B040302302_03_060");
        MsgDisp("Honda","Hah...
That feels good.");
        MsgDisp("主人公","Y-Yeah.
I'm a bit tired, but that was fun.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040302302_03_070");
        MsgDisp("Honda","That's good.
But hey, new discovery.");
        VoicePlay("B040302302_03_080");
        MsgDisp("Honda","My mind becomes clearer while running.
Just the act of putting my legs forward
leaves no room for unnecessary thoughts.");
        MsgDisp("主人公","Hehe, yeah. ｛本多＊＊｝ you're always
thinking about all sorts of things, so
running might be good for you.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040302302_03_090");
        MsgDisp("Honda","Yeah, that's right! Like this, when I look
at you I start noticing things about your
hair, eyes, ears, nose, and-");
        MsgDisp("主人公","What∋
Don't stare at me so hard!");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        ChEyeOpenLevel(3,#1);
        VoicePlay("B040302302_03_100");
        MsgDisp("Honda","Why? I'm just interested in everything
about you, so I can't help it.");
        MsgDisp("主人公","(But still...!
So embarrassing...)");
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
