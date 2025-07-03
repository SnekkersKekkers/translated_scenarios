BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108202_01_000");
MsgDisp("Kazama","You've heard the rumors about this place,
right?");
MsgSel("That you can hear someone's inner voice?","That if you let it all out, you'll feel better?","Don't you want to see the glowing pink fireflies?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040108202_01_010");
    MsgDisp("Kazama","In your case, I don't know if it would
count as an inner voice.
You always say whatever's on your mind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108202_01_020");
        MsgDisp("Kazama","What's with that? I pretty much usually
say what I'm thinking.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108202_01_030");
        MsgDisp("Kazama","What do you mean, feel better.
... Sheesh, I'm not the type to do that.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040108202_01_040");
        MsgDisp("Kazama","Listen, the things we talk about, they're
important to me. I don't need to take
advantage of some moment to 'be frank'.");
        MsgDisp("主人公","I'm sorry...
I really said some careless stuff.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108202_01_050");
        MsgDisp("Kazama","Haah.
Well, I guess you didn't know, did you?");
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,2);
        ChEyeOpenLevel(1,9);
        VoicePlay("B040108202_01_060");
        MsgDisp("Kazama","But... in a way,
I'm a little pleased, too.");
        ChEyeOpenLevel(1,0);
        MsgDisp("主人公","Huh?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108202_01_070");
        MsgDisp("Kazama","When you were little you were kind
of a shrinking violet, so I guess you've
changed some while I was gone.");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEyeOpenLevel(1,0);
        Wait(12,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040108202_01_080");
        MsgDisp("Kazama","It's fine. That fact that you were always
in good health is something I wished for,
too.");
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        Wait(12,0);
        ChEye(1,4);
        ChMouth(1,4);
        ChCheek(1,5);
        VoicePlay("B040108202_01_090");
        MsgDisp("Kazama","But, you know, I wish I
could have seen even a small change like
that for myself as it happened.");
        MsgDisp("主人公","｛風真＊＊｝……");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,0);
        Wait(16,0);
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040108202_01_100");
        MsgDisp("Kazama","I'm sure we'll both change bit by bit as
time goes on. Maybe it's actually better
to always stay together, and not notice?");
        MsgDisp("主人公","(｛風真＊＊｝, you've always cared
about me...
I'm really happy.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B040108202_01_110");
    MsgDisp("Kazama","Pink? Doesn't that feel a little
suspicious? There's not atmosphere about
that at all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
