BGOpen("ne330",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040116002_01_000");
MsgDisp("Kazama","The feeling of reeling in something is
so realistic on that fishing game.");
MsgSel("It's like real fishing huh?","You get medals for catching fish","Shall we play fishing-fishing champ again?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040116002_01_010");
        MsgDisp("Kazama","It's not like it at all.
Real fishing is about feeling the wind 
and water and enjoying it in nature.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        VoicePlay("B040116002_01_020");
        MsgDisp("Kazama","Real fishing?
You don't get it.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040116002_01_030");
        MsgDisp("Kazama","I'd like to take you there. Fly fishing in
the remote countryside of England is the
best.");
        MsgDisp("主人公","Yeah, I'd like to go.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,5);
        VoicePlay("B040116002_01_040");
        MsgDisp("Kazama","Casting a homemade fly into the slowly
flowing river, and when once you're tired,
you can eat lunch on the grass.");
        MsgDisp("主人公","It's like being in a dream.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,0);
        VoicePlay("B040116002_01_050");
        MsgDisp("Kazama","Shall we go?");
        MsgDisp("主人公","Hehe, sounds good.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,4);
        VoicePlay("B040116002_01_060");
        MsgDisp("Kazama","I don't know how many years it'll be until
we can go. But, it'll be quick in
comparison to the 10 years I spent away
from you.");
        ChEyeOpenLevel(1,0);
        MsgDisp("主人公","Yeah, I'm looking forward to it.");
        ChMotion(1,0);
        Wait(12,0);
        ChEye(1,0);
        ChMouth(1,3);
        VoicePlay("B040116002_01_070");
        MsgDisp("Kazama","then, let's start imagining it.
Let's aim for a big one in 
\"fishing-fishing\" champ.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        SEWait();
        MsgDisp("主人公","(Hehe, it would be wonderful if
we could really go to England.)");
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
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040116002_01_080");
    MsgDisp("Kazama","Ah, so I guess it's like the 
fish are being bought?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040116002_01_090");
    MsgDisp("Kazama","Alright, I'll aim for a monster class
next.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
