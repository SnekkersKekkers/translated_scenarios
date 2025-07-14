MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040212101_02_000");
MsgDisp("Sassa","This is a huge turnout.
Are you alright?");
MsgSel("Yeah? Do you want to take a little break?","Yeah, because there's a lot of things I wanna buy","Sorry for dragging you around.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040212101_02_010");
        MsgDisp("Sassa","I'm not particularly exhausted though.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0,1);
        VoicePlay("B040212101_02_020");
        MsgDisp("Sassa","I'm fine.
I was just checking on you.");
        MsgDisp("主人公","I see, thank you.
Then, shall we take a short break?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040212101_02_030");
        MsgDisp("Sassa","Yeah, wait a minute, I'll go buy some
drinks.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        SEWait();
        SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
        SEWait();
        MsgClose();
        ChOpen(2,253,0,0,0,#1,#1,0,0);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040212101_02_040");
        MsgDisp("Sassa","This is hush money.");
        SEPlay("EV_SE_535");
        SEWait();
        MsgDisp("主人公","Ehh?
...peppers?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,2);
        VoicePlay("B040212101_02_050");
        MsgDisp("Sassa","When I went to buy drinks, I saw
Mikage-sensei selling vegetables over
there.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040212101_02_060");
        MsgDisp("Sassa","Seems like these were unsold.
And he told us not to tell Himuro-sensei.");
        MsgDisp("主人公","Hehe, that's just like Mikage-sensei.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040212101_02_070");
        MsgDisp("Sassa","Yeah.
And he said he was also watching us.");
        MsgDisp("主人公","Eh, what did he say?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040212101_02_080");
        MsgDisp("Sassa","Ah, yeah...
He said we somewhat looked like a couple.");
        MsgDisp("主人公","Ehh∋");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        ChCheek(2,10);
        VoicePlay("B040212101_02_090");
        MsgDisp("Sassa","I don't have any objections.
About being called a couple...");
        ChEye(2,3);
        ChMouth(2,4);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040212101_02_100");
        MsgDisp("Sassa","That's why, let's walk around once more.
THis time we'll be more convincing.");
        MsgDisp("主人公","(We look like a lovers to the people
around us...
That's somewhat embarrassing.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040212101_02_110");
    MsgDisp("Sassa","In other words, you're releasing
adrenaline, so you feel like you're not
tired right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040212101_02_120");
    MsgDisp("Sassa","Eh?
I'm also having fun though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
