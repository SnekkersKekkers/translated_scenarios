BGOpen("wf221",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMouth(1,3);
ChMotion(1,1);
SEPlay("EV_SE_597",0,0.5);
SEPlay("EV_SE_598");
Wait(30,0);
VoicePlay("B040102202_01_000");
MsgDisp("Kazama","Ooh, that's a nice breeze coming through.");
MsgSel("Are you going to set sail, Captain?","Hehe, but it isn't a sail boat","That could be a little ominous");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102202_01_010");
    MsgDisp("Kazama","Alright, anchors aweigh! ... Don't. Say a
word.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102202_01_020");
    MsgDisp("Kazama","... Sheesh, you're so serious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102202_01_030");
        MsgDisp("Kazama","I was just saying it was a nice breeze?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,1);
        VoicePlay("B040102202_01_040");
        MsgDisp("Kazama","You think so?");
        EfctOpen(4);
        Wait(20,1);
        SEPlay("EV_SE_758",0.5);
        ChEye(1,0);
        MsgDisp("主人公","Oh, it's about to rain.");
        ChEye(1,3);
        ChMouth(1,2);
        ChMotion(1,3);
        VoicePlay("B040102202_01_050");
        MsgDisp("Kazama","You're right.
That's seriously impressive.");
        EfctOpen(3);
        SEPlay("EV_SE_759",0.7);
        Wait(80,1);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,1);
        VoicePlay("B040102202_01_060");
        MsgDisp("Kazama","Now it's really coming down hard.
Here, come inside.");
        MsgDisp("主人公","Yeah, but doesn't it feel kind of nice?");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        Wait(15,0);
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040102202_01_070");
        MsgDisp("Kazama","Guess there's no choice.");
        ChClose(1,0,30);
        ChLayout(0);
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(1,255,0,0,3,#1,#1,0,0,0,30);
        MsgDisp("主人公","I'm sorry.
This is going to get you soaked, so let's
go inside.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,10);
        VoicePlay("B040102202_01_080");
        MsgDisp("Kazama","No, I'm fine.
Let's stay like this.");
        MsgDisp("主人公","(｛風真＊＊｝......)");
        SEStop("EV_SE_759",1);
        SEStop("EV_SE_758",1);
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
