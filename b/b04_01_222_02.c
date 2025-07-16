BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040122202_01_000");
MsgDisp("Kazama","The exhibit artifacts are important, but
there's a history behind each scratch on
the pillars and floors.");
MsgSel("The castle itself was rebuilt right?","Were they cut with swords during a battle?","How cruel... there's graffiti too.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040122202_01_010");
        MsgDisp("Kazama","Listen up, okay? The fact that it has been
renovated and repaired so many times is
itself a history.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040122202_01_020");
        MsgDisp("Kazama","That's right. Apparently there was a big
renovation 50 years ago. My grandpa told
me that valuable cultural assets were
found at that time, too.");
        MsgDisp("主人公","Treasure?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040122202_01_030");
        MsgDisp("Kazama","It wasn't anything like that.
Just like graffiti from people of the past
or carpentry tools left behind.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,9);
        VoicePlay("B040122202_01_040");
        MsgDisp("Kazama","Hey, that writing that says \"XX was here!\"
might also become an precious artifact in
100 years.");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        Wait(16,0);
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040122202_01_050");
        MsgDisp("Kazama","Should we leave something too?");
        MsgDisp("主人公","Graffiti is bad.");
        ChEye(1,3);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040122202_01_060");
        MsgDisp("Kazama","Not that.
Let's leave behind our names in the guest
notebook, to say \"We were here!\"");
        MsgDisp("主人公","Hehe, yeah.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
        MsgClose();
        ScrFadeOut(0);
        SEWait();
        ChMotion(1,0);
        SEPlay("EV_SE_037",0,0.9,1);
        SEWait();
        VoicePlay("B040122202_01_070");
        MsgDisp("Kazama","Try erasing your last name.");
        MsgDisp("主人公","Eh, why?");
        SEPlay("EV_SE_503",0,0.5);
        SEWait();
        BGOpen("tr310",0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,7);
        ScrFadeIn(0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040122202_01_080");
        MsgDisp("Kazama","Yeah, let's leave it at that.
Let's go.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        SEWait();
        MsgDisp("主人公","(With this, we kinda look like a married
couple maybe?)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040122202_01_090");
    MsgDisp("Kazama","Maybe that's it?
It's a fun thing to imagine.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,1);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040122202_01_100");
    MsgDisp("Kazama","I really won't forgive them. \"
We were here\", \"We're here\"! just who are
they reporting to?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
