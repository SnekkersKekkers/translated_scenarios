BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323202_03_000");
MsgDisp("Honda","I'm gradually starting to understand the
good points of ferris wheels.");
MsgSel("If you look into the distance, it's not scary.","The feeling that you're detaching yourself from the surface feels nice.","We get to take our time to talk, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040323202_03_010");
    MsgDisp("Honda","That's right.
If you only look at the ground, you'll get
dizzy.");
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
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040323202_03_020");
        MsgDisp("Honda","Heeh, so there's that sort of feeling too?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040323202_03_030");
        MsgDisp("Honda","Yep yep, suddenly being separated from the
hustle and bustle is an interesting
experience.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040323202_03_040");
        MsgDisp("Honda","...Hm? I see. Maybe that strange feeling
was born from that.");
        MsgDisp("主人公","Strange feeling?");
        ChEye(3,0);
        ChMotion(3,1);
        VoicePlay("B040323202_03_050");
        MsgDisp("Honda","Something like, hey, I'm sitting opposite
you in an empty space, right?
It's like an interview.");
        MsgDisp("主人公","Yeah, it's a bit odd.");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,4);
        ChCheek(3,5);
        VoicePlay("B040323202_03_060");
        MsgDisp("Honda","It's not odd.
I mean, maybe warm or happy...");
        ChEye(3,5);
        ChMouth(3,3);
        ChMotion(3,5);
        ChCheek(3,10);
        VoicePlay("B040323202_03_070");
        MsgDisp("Honda","Huh?
Could this be, the bittersweet springtime
of youth feeling?");
        SEPlay("EV_SE_GAYA_024",0.5,0.5);
        SEPlay("EV_SE_GAYA_017",1);
        SEWait();
        MsgDisp("主人公","｛本多＊＊｝, you're talking a bit
loud?");
        ChEye(3,1);
        ChMouth(3,0);
        ChMotion(3,1);
        ChCheek(3,0);
        VoicePlay("B040323202_03_080");
        MsgDisp("Honda","Let's go again, this needs to be verified!
Come!");
        ChClose(3);
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        SEWait();
        MsgDisp("主人公","Ehh!
Wait up, ｛本多＊＊｝ ～!");
        MsgClose();
        ScrFadeOut(0);
        ChOpen(3,253,0,0,0,#1,#1,0,0);
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
    VoicePlay("B040323202_03_090");
    MsgDisp("Honda","Right right, that's exactly itー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
