BGOpen("wf610",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106202_01_000");
MsgDisp("Kazama","Aside from just being blue, the cave
sounds are exciting too.");
MsgSel("Boys like that kind of stuff, right?","Captain! Falling rocks overhead!","Hehe, ｛風真＊＊｝'s expedition team?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040106202_01_010");
        MsgDisp("Kazama","Boys? You're really, surprisingly just
lumping me in like that, huh?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040106202_01_020");
        MsgDisp("Kazama","And just how many boys do you have in your
sample size, here? You sound like you're
talking from some high and mighty place.");
        MsgDisp("主人公","But ever since we were kids, you always
said that you'd investigate anything you
were curious about...");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,2);
        Wait(90,1);
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,4);
        ChCheek(1,5);
        VoicePlay("B040106202_01_030");
        MsgDisp("Kazama","Ahh, that's right.
Like that ringing bell?");
        MsgDisp("主人公","Yeah. If it was just me myself, I would
have never done anything like that.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040106202_01_040");
        MsgDisp("Kazama","I wouldn't have done it without you there,
either.");
        MsgDisp("主人公","Huh?");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,0);
        VoicePlay("B040106202_01_060");
        MsgDisp("Kazama","I only wanted to explore with you.");
        MsgDisp("主人公","Hehe. Being on your expedition team made
everyday fun.");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106202_01_070");
        MsgDisp("Kazama","Are you really sure?
Do you even remember it all?");
        MsgDisp("主人公","Jeez.
Of course I do.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040106202_01_080");
        MsgDisp("Kazama","In that case, I'm appointing you as
second-in-command once more.
But there's no deserting.");
        MsgDisp("主人公","(｛風真＊＊｝ seems like he's having fun.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,1);
    ChMotion(1,5);
    VoicePlay("B040106202_01_090");
    MsgDisp("Kazama","Oh, watch out!
Duck!");
    MsgDispSksp(1,7);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106202_01_100");
    MsgDisp("Kazama","In that case, you're second-in-command.
Haa, talk about being extremely short
staffed.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
