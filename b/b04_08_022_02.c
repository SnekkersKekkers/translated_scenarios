BGOpen("wf221",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040802202_08_000");
MsgDisp("Shirahane","Come ta think of it, this beach has a boy
who's super good at surfin'?
Should I try it too?");
MsgSel("I'll be cheering for you, do your best!","Who are you trying to imitate?","Seems tough...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B040802202_08_010");
    MsgDisp("Shirahane","Thanks!
I'm already fired up now!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040802202_08_020");
        MsgDisp("Shirahane","Is it bad to imitate?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,4);
        ChMouth(8,3);
        VoicePlay("B040802202_08_030");
        MsgDisp("Shirahane","Well, I'm definitely just imitating but
maybe I'll end up being good at it?");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,0,1);
        ChCheek(8,5);
        VoicePlay("B040802202_08_040");
        MsgDisp("Shirahane","Maybe you'll fall in love with me again.");
        MsgDisp("主人公","Eh?");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,4,1);
        ChCheek(8,7);
        VoicePlay("B040802202_08_050");
        MsgDisp("Shirahane","Hehe.
Anything is possible right?");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040802202_08_060");
        MsgDisp("Shirahane","... Did ya really not hear me?
Just now.");
        MsgDisp("主人公","That I'll fall in love with y——");
        ChEye(8,2);
        ChMouth(8,5);
        ChMotion(8,5,1);
        ChCheek(8,10);
        VoicePlay("B040802202_08_070");
        MsgDisp("Shirahane","Waa!
That's enough, don't say it!");
        MsgDisp("主人公","(｛大地＊＊｝'s face is all red!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040802202_08_080");
    MsgDisp("Shirahane","Well, I guess I won't know till I try it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
