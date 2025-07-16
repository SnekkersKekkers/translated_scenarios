BGOpen("wf610",0);
ChLayout(1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
ScrFadeIn(0);
VoicePlay("B040306202_03_000");
MsgDisp("Honda","The tide is low right now, so we could
probably go deeper into the cave.");
MsgSel("Are you sure it's safe?","I just saw something glowing at the back of the cave...","Okay, let's go check it out!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,2);
    VoicePlay("B040306202_03_010");
    MsgDisp("Honda","No way, it's not safe at all.
I was just a just a little tempted.
I'm glad you're here with me!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,5);
    ChMouth(3,5);
    ChMotion(3,5);
    VoicePlay("B040306202_03_020");
    MsgDisp("Honda","Woah! If that light doesn't even succumb
to all this blue... we might have a major
discovery on our hands?");
    MsgDispSksp(1,7);
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
        ChEye(3,2);
        ChMouth(3,0);
        ChMotion(3,2);
        VoicePlay("B040306202_03_030");
        MsgDisp("Honda","I can already see the news headline: \"Two
reckless youths found on Hanegasaki
Coast.\"");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,2);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040306202_03_040");
        MsgDisp("Honda","Ah, sorry sorry! I got too carried away.
Making decisions on your own is dangerous,
so I shouldn't have suggested that.");
        MsgDisp("主人公","I see.
I was feeling safe because you were with
me ｛本多＊＊｝.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        ChEyeOpenLevel(3,10);
        VoicePlay("B040306202_03_050");
        MsgDisp("Honda","That makes me happy but...
I need to be more careful so I don't put
you in danger.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,3);
        VoicePlay("B040306202_03_060");
        MsgDisp("Honda","But you know, I have this tendency to
charge ahead recklessly when I get
excited.");
        MsgDisp("主人公","Hehe.
It's one of the things that makes you
amazing ｛本多＊＊｝.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,1);
        VoicePlay("B040306202_03_070");
        MsgDisp("Honda","What? Don't tease me. I want you to think
I'm amazing, but I don't want to put you
in danger.");
        ChEye(3,1);
        ChMouth(3,1);
        ChMotion(3,5);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040306202_03_080");
        MsgDisp("Honda","Ah, no good.
Curiosity killed the cat!");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040306202_03_090");
        MsgDisp("Honda","It'd be one thing if it were just me, but
I don't want anything to happen to you.
I'll keep that in mind.");
        MsgDisp("主人公","(｛本多＊＊｝... thank you.");
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
